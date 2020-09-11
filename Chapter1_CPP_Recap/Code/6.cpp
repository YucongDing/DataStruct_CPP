#include<iostream>
using namespace std;

template<class T>
bool is_sorted(T* array, int n) {
    T ptr = array[0];
    if (array[0] > array[1]) {
        for (int i = 1; i < n; i++) {
            if (array[i] > ptr) 
                return false;
        }
    } else {
        for (int i = 1; i < n; i++) {
            if (array[i] < ptr)
                return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1,2,3,4,5,6,7};
    int b[] = {4,3,2,5,1};
    int c[] = {9,8,7,6,4,2,1};

    cout << is_sorted(a, sizeof(a)/sizeof(a[0])) << endl;
    cout << is_sorted(b, sizeof(b)/sizeof(b[0])) << endl;
    cout << is_sorted(c, sizeof(c)/sizeof(c[0])) << endl;
    return 0;
}