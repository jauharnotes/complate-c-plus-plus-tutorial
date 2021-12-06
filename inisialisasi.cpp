#include <iostream>

using namespace std;

int main()
{
    int x;        //variabel yang tidak diinisialisasi akan memiliki nilai awal dari nilai warisan program lain (tidak diharapkan)
    int a=6;      // C-like Initialization, int bernilai= 6
    int b(2);     // Inisialisasi Constructor, int bernilai=2
    int c{3};     // Inisialisasi Seragam, int bernilai=3
    int hasil;    // int tidak bernilai. value undetermined (karena kita yakin dan akan mengisinya setelah ini, melalui oprasi penugasan. Tapi hal ini tidak disarankan)
    
    cout << "nilai variabel c :" << c << endl;
    //jika kita tidak menginisialisasi salah satu variabel maka akan menghasilkan nilai yang tidak diharapkan seperti dibawah ini
    cout <<"Hasil variabel tidak mempunyai nilai awal : "<<x+a<<endl;
 
    //Operasi dengan variabel yang mempunyai nilai awal (hasil sesuai dengan harapan kita)
    a = a + b;
    hasil = a - c;
    cout <<"Hasil variabel yang mempunyai nilai awal : "<< hasil;
 
    //Inisialisasi sangat penting dalam deklarasi untuk memastikan tidak adanya nilai asing dalam program,
    //yang kemungkinan dapat mengacaukan operasi matematika dalam program kita.
    return 0;
}