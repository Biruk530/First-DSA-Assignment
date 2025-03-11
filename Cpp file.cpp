#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    if (size == 0) return -1;  // Handle empty array case

    int min_value = arr[0];  // Assume first element is smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];  // Update min_value if smaller element found
        }
    }
    return min_value;
}

int main() {
    int numbers[] = {27, 13, -57, 73, 14, -17, 46};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Smallest number: " << findSmallest(numbers, size) << endl;
    return 0;
}
