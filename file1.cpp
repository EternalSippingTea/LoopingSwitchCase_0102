#include <iostream>
using namespace std;

int main(){
    //Perulangan FOR untuk pencacah naik
    int i;
    cout << "Perulangan FOR Pencacah Naik" << endl;
    for (i = 0; i <= 4; i++)
    {
        cout << "Nilai i :" << i 
        << " Lari keliling lapangan " << endl;
    }

    cout << " Nilai i terakhir : " << i << endl;
    cout << endl;
   //Perulangan FOR untuk pencacah turun
   cout << "Perulangan FOR Pencacah Turun" << endl;
   for (i = 4; i >= 0; i--)
   {
       cout << "Nilai i :" << i 
       << " Lari keliling lapangan " << endl;
   }
   cout << " Nilai i terakhir : " << i << endl;
   cout << endl;
} 

