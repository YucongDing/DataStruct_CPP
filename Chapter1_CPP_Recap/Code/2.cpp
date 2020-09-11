#include<iostream>
using namespace std;

template<class T>
int count(T value, int n, T* array) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (value == array[i]) {
            count++;
        }
    }
    return count;
}
int main() {
    int array[] = {1,2,3,4,5,6,4,3,4,5,2,4,4};
    cout << count(4, sizeof(array)/sizeof(array[0]),array) << endl;
    return 0;
}