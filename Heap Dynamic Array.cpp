#include <bits/stdc++.h>
using namespace std;
void testHeapDynamicArray() {
    int size;
    cout << "Enter size for heap dynamic array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    cout << "Heap Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}
int main() {
    testHeapDynamicArray();
    return 0;
}