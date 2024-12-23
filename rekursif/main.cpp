#include <iostream>

using namespace std;

int main()
{
void heapifyDownRecursive(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapifyDownRecursive(arr, n, largest);
    }
}

    return 0;
}
