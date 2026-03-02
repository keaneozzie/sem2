#include <iostream>
using  namespace std;

float phi = 3.14159;
      int r;



void input(){
    cout << "Masukan Luas: ";
    cin >> r;
}

int luaslingkaran(int r){
    return r;
}
int jumlah(int phi, int r, int luas){
    return phi * r * r + luas;
}

void output(){
    cout << "Hasilnya : " <<jumlah(phi, r, luaslingkaran(r)) << endl;
}
int main(){
    input();
    output();
    cout << "Hasilnya: " << luaslingkaran(r) << endl;
} 