#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
        if (arr[i] <= pivot)
            count++;

    int pos = start + count;
    swap(arr[start], arr[pos]);

    // order the array
    int j = start;
    int k = end;

    while (j < pos && k > pos)
    {
        while (arr[j] < pivot)
        {
            j++;
        }
        while (arr[k] > pivot)
        {
            k--;
        }
        if (start < pos && end > pos)
        {
            swap(arr[j], arr[k]);
            j++;
            k--;
        }
    }
    return pos;
}

void QuickSort(int *arr, int start, int end)
{
    // Base Case
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    // left of pivot
    QuickSort(arr, start, p - 1);
    // Right of pivot
    QuickSort(arr, p + 1, end);
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}