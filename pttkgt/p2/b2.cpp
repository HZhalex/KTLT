#include <iostream>
using namespace std;

void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];  

    while (i <= j) {
     
        while (a[i] < pivot) i++;


        while (a[j] > pivot) j--;

        if (i <= j) {

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(a, left, j);
    if (i < right)
        quickSort(a, i, right);
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {15, 10, 9, 5, 20, 18, 8, 6, 21, 1};
    int n = 10;

    quickSort(a, 0, n - 1);

    printArray(a, n);
}