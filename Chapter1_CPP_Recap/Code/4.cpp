#include<iostream>
using namespace std;

template<class T>
T inner_product(T* a, T* b, int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};

    double c[] = {1.0,2.0,3.0,4.0,5.0};
    double d[] = {1.0,2.0,3.0,4.0,5.0};

    cout << inner_product(a, b, sizeof(a)/sizeof(a[0])) << endl;
    cout << inner_product(c, d, sizeof(c)/sizeof(c[0])) << endl;
    return 0;
}