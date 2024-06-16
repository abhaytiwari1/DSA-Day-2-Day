#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Swap the elements at left and right indices
        
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}