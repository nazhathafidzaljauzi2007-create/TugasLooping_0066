#include <iostream>
using namespace std;

int angka;
int pilihan;

//Fungsi untuk menampilkan menu pilihan
void tampilMenu(){
    cout<<"MENU UTAMA"<<endl;
    cout<<"1. Cek Bilangan Prima"<<endl;
    cout<<"2. Cek Bilangan Fibonacci"<<endl;
    cout<<"0. Keluar dari program"<<endl;
    cout<<"Masukkan pilihan: ";
}

//Fungsi untuk menerima inputan
void inputAngka(){
    cout<<"Masukkan angka = ";
    cin>>angka;
}

//Mengecek bilangan prima dengan WHILE loop
bool cekPrima(int n){
    if(n<=1){
        return false;
    }
    
    int i=2;
    while(i<=n/2){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
//Mengecek bilangan fibonacci dengan WHILE loop
bool cekFibonacci(int n){
    int a=0, b=1, c=0;
    
    if(n==0 || n==1){
        return true;
    }
    
    c = a+b;
    while(c<=n){
        if(c==n){
            return true;
        }
        a=b;
        b=c;
        c=a+b;
    }
    return false;
}

//Menampilkan hasil cek bilangan prima
void hasilPrima(){
    if(cekPrima(angka)){
        cout<<"Hasil: "<<angka<<" adalah bilangan prima"<<endl;
    }else{
        cout<<"Hasil: "<<angka<<" bukan bilangan prima"<<endl;
    }
}

//Menampilkan hasil cek bilangan fibonacci
void hasilFibonacci(){
    if(cekFibonacci(angka)){
        cout<<"Hasil: "<<angka<<" termasuk deret Fibonacci"<<endl;
    }else{
        cout<<"Hasil: "<<angka<<" tidak termasuk deret Fibonacci"<<endl;
    }
}