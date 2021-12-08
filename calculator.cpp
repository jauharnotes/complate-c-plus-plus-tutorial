#include <iostream>

using namespace std;

int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "kalkulator sederhana \n \n";

    // masukan input dari user
    cout << "masukan nilai pertama: ";
    cin >> a;
    cout << "pilih operator +,-,*,/: ";
    cin >> aritmatika;
    cout << "masukan nilai kedua: ";
    cin >> b;

    cout << "\nhasil perhitungan: ";
    cout << a << " " << aritmatika << " " << b;

    // dengan if condition
    // if (aritmatika == '+') {
    //     hasil = a + b;
    // } else if (aritmatika == '-') {
    //     hasil = a - b;
    // } else if (aritmatika == '*') {
    //     hasil = a * b;
    // } else if (aritmatika == '/') {
    //     hasil = a / b;
    // } else {
    //     cout << "yang anda masukan salah!" << endl;
    // }

    // cout << " = " << hasil << endl;

    // dengan switch case condition
    switch (aritmatika) {
        case '+':
        hasil = a + b;
        break;
        case '-':
        hasil = a - b;
        break;
        case '*':
        hasil = a * b;
        break;
        case '/':
        hasil = a / b;
        break;
        default:
        cout << "yang anda masukan salah!" << endl;
    }

    cout << " = " << hasil << endl;

    return 0;

}