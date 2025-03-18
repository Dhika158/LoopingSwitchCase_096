#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Perulangan While
    cout << "Perulangan While" << endl;
    int x;
    int perulanganWhile = 0;
    int perulanganDowhile = 0;
    srand(time(0));
    x = rand() % 10;

    cout << "Nilai x awal : " << x << endl;
    while(x < 7){
        cout << "Nilai x : " << x << " lari keliling Lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
    cout << "Nilai x akhir : " << x << endl;
    cout << "Jumlah perulanggan : " << perulanganWhile << endl;
    cout << endl;

    //Perulangan Do While 
    cout << "Perulangan do While" << endl;
    do{
        cout << "Nilai x : " << x << " Lari keliling Lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }while (x < 7);
    cout << "Nilai x akhir : " << x << endl;
    cout << "Jumlah perulangan : " << perulanganWhile << endl;
    
}