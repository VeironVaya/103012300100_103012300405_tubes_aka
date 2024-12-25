#include <iostream>
using namespace std;

void heapifyDownRecursive(int arr[], int n, int i) {
    int k = i;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (k == -1) {
            return;
    }
    else {
    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapifyDownRecursive(arr, n, largest);
    }

        heapifyDownRecursive(arr, n, k-1);

    }
}



int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10
        };
    int n = 100;

    heapifyDownRecursive(arr,n,(n/2)-1);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
