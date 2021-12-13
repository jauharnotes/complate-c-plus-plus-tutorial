#include <iostream>

using namespace std;

int main()
{
    // menskip angka ganginl
    // menggunakan foor loop
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            // break;
            continue;
        }
        cout << i << endl;
    }

    // mwnggunakan while loop
    int counter = 0;
    while (counter <= 10)
    {
        counter++;
        if (counter % 2 == 1)
        {
            continue;
        }
        cout << counter << endl;
    }

    return 0;
}