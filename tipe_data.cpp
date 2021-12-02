#include<iostream>

using namespace std;

int main() {

    // bilangan bulat
    int a = 5; // 32 bit
    long b = 6; // 64 bit
    short c = 7; // 

    // bilangan desimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a'; // character 1-bit

    // boolean
    bool g = false; // false/true

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;

    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;

    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cin.get();

    return 0;
}