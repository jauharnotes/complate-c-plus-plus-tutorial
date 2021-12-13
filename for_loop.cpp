#include <iostream>

using namespace std;

int main()
{
    cout << "foor 1" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    cout << "foor 2" << endl;
    for(int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }

    cout << "foor 3" << endl;
    for(int i = 10; i >= 1; i--) {
        cout << i << endl;
    }

    cout << "foor 4" << endl;
    int total = 0;
    for(int i = 1; i <= 10; i++) {
        total += i;
        cout << i << " || " << total << endl;
    }

    cout << "akhir dari program \n";
}