#include <iostream>

using namespace std;

int main()
{
    int nilai;

    cout << "masukan nilai: ";
    cin >> nilai;

    switch (nilai)
    {
    case 9:
        cout << "Great" << endl;
        break;
    case 8:
        cout << "Good" << endl;
        break;
    case 7:
        cout << "Not Bad" << endl;
        break;
    case 6:
        cout << "Bad" << endl;
        break;
    default:
        cout << "belajar yang rajin ya!" << endl;
    }

    return 0;
}