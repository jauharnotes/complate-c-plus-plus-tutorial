#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, t;
    cin >> a >> t;

    double result = a * t / 2;

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
