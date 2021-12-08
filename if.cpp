#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan angka: ";
    cin >> a;

    // if statment
    // kondisi dalam bentuk boolean
    if (a == 5){
        cout << "nilai adalah 5" << endl;
    } else if (a == 6) {
        cout << "nilai adalah 6" << endl;
    } else if (a == 7){
        cout << "nilai adalah 7" << endl;
    } else {
        cout << "nilai bukan 5,6,7" << endl;
    }

    cout << "selesai" << endl;
    return 0;
    
}