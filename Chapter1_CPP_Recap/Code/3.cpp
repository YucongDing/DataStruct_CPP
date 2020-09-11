#include<iostream>
using namespace std;

template<class T>
void fill(T* array, T value, int start, int end) {
    for (int i = start; i < end; i++) {
        array[i] = value;
    }
}

int main() {
    int a[] = {1,2,3,4,5,6,7};
    fill(a, 3, 1, 4);
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}