#include <iostream>

using namespace std;

void sort(int *arr, int n)
{

    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    sort(arr, n - 1);
}

int main()
{
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    sort(arr, n);

    cout << "Sorted array : " << endl;
    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";
    cout << endl;
    
    delete[] arr;
    return 0;
}