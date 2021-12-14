#include <iostream>

using namespace std;

int main() {
    // f_n = f_n1 + f_n2
    int n, f_n, f_n1, f_n2;

    cout << "program deret fibonaci" << endl;
    cout << "masukan nilai n: "; cin >> n;

    f_n1 = 0;
    f_n2 = 1;
    for (int i = 1; i <= n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }
    cout << "\n";

    return 0;
}