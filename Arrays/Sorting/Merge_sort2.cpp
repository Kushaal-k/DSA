#include <iostream>

using namespace std;

void merge(int *arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int index1 = s;
    int index2 = mid + 1;
    int mainArrayIndex = s;

    while (index1 <= mid && index2 <= e) {
        if (arr[index1] <= arr[index2]) {
            index1++;
        } else {
            int value = arr[index2];
            int idx = index2;

            while (idx != index1) {
                arr[idx] = arr[idx - 1];
                idx--;
            }
            arr[index1] = value;

            index1++;
            mid++;
            index2++;
        }
    }
}

void mergeSort(int *arr, int s, int e) {
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, mid, e);
}

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
