#include <bits/stdc++.h>
using namespace std;
void testStackDynamicArray() {
    int size;
    cout << "Enter size for stack dynamic array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    cout << "Stack Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    testStackDynamicArray();
    return 0;
}