#include<iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 1, b = 2;
    cout << "a is " << a << ", b is " << b << endl;
    swap(a, b);
    cout << "After swapping, a is " << a << ", b is " << b << endl;
    return 0;
}