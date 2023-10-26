#include<iostream>
using namespace std;

void RecursiveInsertionSort(int arr[], int n) {
    if (n <= 0) {
        return;
    }
    RecursiveInsertionSort(arr, n - 1);
    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

// Printing Array Sorted
void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = { 15, 20, 5, 10, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    RecursiveInsertionSort(arr, n);
    PrintArray(arr, n);
    return;
}
