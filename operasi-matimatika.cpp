// contoh program kuadrat
#include <iostream>
 using namespace std;

int main()
{
    int a= 1;
    int b= 2;
    int c= -2;
    int x= 2;

    int hasil = a*x*x + b*x + c;
    cout << "hasil kuadrat: " << hasil << endl;

    cout <<"hasil benar: "<< 8 + -2 << endl;

    // menentukan suatu proritas dengan dibungkus tanda ()
    int hasil1, hasil2;

    hasil1 = 3+5 /4;
    hasil2 = (3+5) / 4;

    cout << "hasil penjumlahan: " << hasil1 << endl;
    cout << "hasil penjumlahan: " << hasil2 << endl;

    // operasi unary
    int foo = 5;

    foo++; // foo = foo + 1 (increament)
    cout << "result: " << foo << endl;

    foo--; // foo = foo - 1 (decreament)
    cout << "result: " << foo << endl;

    return 0;   
}