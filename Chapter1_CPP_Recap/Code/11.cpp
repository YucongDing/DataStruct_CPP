#include<iostream>
using namespace std;

template<class T>
int count(T* array, T value, int n) {
    if (n < 1) {
        throw "The arrays length must be >= 1";
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    
    return 0;
}