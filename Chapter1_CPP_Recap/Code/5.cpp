#include<iostream>
using namespace std;

template<class T>
void itoa(T* array, T value, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = value + i;
    }
}

int main() {
    int a[] = {1,2,3,4,5};
    itoa(a, 3, sizeof(a)/sizeof(a[0]));

    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}