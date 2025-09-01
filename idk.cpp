#include <iostream>
using namespace std;
int main(){
	
int pilih;
    int input,panjang,lebar,sisi,alas,tinggi,r;
	const float phi = 3.14;
    cout<<"**Program Penghitung Bangunan Datar dan Ruangan**"<<endl<<endl;
    cout<<"1. Segitiga"<<endl;
    cout<<"2. Persegi"<<endl;
    cout<<"3. Lingkaran"<<endl;
	cout<<"4. Kubus"<<endl;
	cout<<"5. Limas"<<endl;
	cout<<"6. Bola"<<endl;
    cout<<"Masukkan pilihan: ";
    cin>>pilih;
    switch(pilih){
case 1 :
   	cout<<"Masukkan alas: ";cin>>alas;
	cout<<"Masukkan tinggi: ";cin>>tinggi;
	cout<<"Hasil perhitungan: "<<(alas*tinggi/2)<<endl;
	break;
case 2 :
    cout<<"Masukkan sisi: ";cin>>sisi;
	cout<<"Hasil perhitungan: "<<(sisi*sisi)<<endl;
	break;
case 3 :
    cout<<"Masukkan jari-jari: ";cin>>r;
	cout<<"Hasil perhitungan: "<<(phi*r*r)<<endl;
	break;
case 4 :
   	cout<<"Masukkan sisi: ";cin>>sisi;
	cout<<"Hasil perhitungan: "<<(sisi*sisi*sisi)<<endl;
	break;
case 5 :
   	cout<<"Masukkan alas: ";cin>>alas;
	cout<<"Masukkan tinggi: ";cin>>tinggi;
	cout<<"Hasil perhitungan: "<<(1/3*alas*tinggi)<<endl;
	break;
case 6 :
	cout<<"Masukkan jari-jari: ";cin>>r;
	cout<<"Hasil perhitungan: "<<(4/3*phi*r*r)<<endl;
	break;
    }
    return 0;
} 
