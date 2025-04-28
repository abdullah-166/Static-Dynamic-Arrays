#include <bits/stdc++.h>
using namespace std;

void testFixedHeapDynamicArray() {
    const int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    cout << "Fixed Heap Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}
int main() {
    testFixedHeapDynamicArray();
    return 0;
}