#include <iostream>
using namespace std;

// Function to find third largest element
int findThirdLargest(int arr[], int size) {
    if (size < 3) {
        return -1; // Not enough elements
    }
    
    int first = INT_MIN;  // Largest
    int second = INT_MIN; // Second largest
    int third = INT_MIN;  // Third largest
    
    // Single pass through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
    
    if (third == INT_MIN) {
        return -1; // No third largest found
    }
    return third;
}

// Main function to test the algorithm
int main() {
    int arr[] = {12, 35, 1, 10, 34, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = findThirdLargest(arr, size);
    if (result != -1) {
        cout << "Third largest element is: " << result << endl;
    } else {
        cout << "No third largest element found" << endl;
    }
    return 0;
}