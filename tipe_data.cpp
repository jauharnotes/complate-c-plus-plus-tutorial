#include<iostream>

using namespace std;

int main() {

    // bilangan bulat
    int a = 5; // 32 bit
    long b = 6; // 64 bit
    short c = 7; // 
    signed int ab = 8;

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

    cout << "type signed :" << d << endl;
    cin.get();

    cout << "ukuran memori komputer" << endl;

    cout << "--> Integer " << endl;
    cout << "Ukuran Memori dari int : " << sizeof(int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed short int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned short int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long long int) << endl;
 
    cout << endl << "--> Floating Point " << endl;
    cout << "Ukuran Memori dari float : " << sizeof(float) << endl;
 
    cout << endl << "--> Double Floating Point " << endl;
    cout << "Ukuran Memori dari Double : " << sizeof(double) << endl;
    cout << "Ukuran Memori dari Long Double : " << sizeof(long double) << endl;
 
    cout << endl << "--> Boolean " << endl;
    cout << "Ukuran Memori dari Boolean : " << sizeof(bool) << endl;
 
    cout << endl << "--> Character " << endl;
    cout << "Ukuran Memori dari Char : " << sizeof(char) << endl;
    cout << "Ukuran Memori dari Singned Char : " << sizeof(signed char) << endl;
    cout << "Ukuran Memori dari Unsigned Char : " << sizeof(unsigned char) << endl;
    cout << "Ukuran Memori dari char16_t : " << sizeof(char16_t) << endl;
    cout << "Ukuran Memori dari char32_t : " << sizeof(char32_t) << endl;
    cout << "Ukuran Memori dari wchar_t : " << sizeof(wchar_t) << endl;
 
    cout << endl << "--> String " << endl;
    cout << "Ukuran Memori dari String: " << sizeof(string) << endl;
 
    cout << endl << "--> Pointer Null " << endl;
    cout << "Ukuran Memori dari decltype(nullptr): " << sizeof(decltype(nullptr)) << endl;
 
    cout << endl << "--> Valueless " << endl;
    cout << "Ukuran Memori dari void: " << sizeof(void) << endl;

    return 0;
}