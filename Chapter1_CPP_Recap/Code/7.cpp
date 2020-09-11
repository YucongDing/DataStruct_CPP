#include<iostream>
using namespace std;

// return index of the smallest index of a[i] != b[i]
// if all indexes of a[i] == b[i] return -1;
template<class T>
int mismatch(T* a, T* b, int n) {
    for(int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,5,4};

    int n = mismatch(a, b, 5);
    cout << n << endl;
    return 0;
}