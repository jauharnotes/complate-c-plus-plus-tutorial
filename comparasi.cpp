#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    bool hasil1, hasil2;

    // komparasi, relation expressions

    // sebanding ==
    hasil1 = (a == b);

    // tidak sebanding !=
    hasil2 = (a != b);

    // kurang dari
    hasil1 = (a < b);

    // lebih dari
    hasil2 = (a > b);

    // kurang atu sama dengan dari
    hasil1 = (a <= b);

    // lebih atau sama dengan dari
    hasil2 = (a >= b);

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    return 0;
}