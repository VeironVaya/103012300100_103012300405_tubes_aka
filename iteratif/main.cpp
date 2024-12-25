#include <iostream>
using namespace std;


void heapifyDownIterative(int arr[], int n, int i) {
    for (int k = n / 2 - 1; k >= 0; k--) {
        int largest = k;
        int left = 2 * k + 1;
        int right = 2 * k + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != k) {
            swap(arr[k], arr[largest]);

            int i = largest;
            while (i < n) {
                largest = i;
                left = 2 * i + 1;
                right = 2 * i + 2;

                if (left < n && arr[left] > arr[largest])
                    largest = left;

                if (right < n && arr[right] > arr[largest])
                    largest = right;

                if (largest != i) {
                    swap(arr[i], arr[largest]);
                    i = largest;
                } else {
                    break;
                }
            }
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    heapifyDownIterative(arr,n,(n/2)-1);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
