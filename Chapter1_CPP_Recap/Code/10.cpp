#include<iostream>
using namespace std;

int abc(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0) {
        throw "exception 1";
    }
    if ( a == 0 && b == 0 && c == 0 ) {
        throw "exception 2";
    } 
    return a + b * c;
}

int main() {
    
    return 0;
}