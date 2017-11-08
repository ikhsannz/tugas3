#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char q;
	double Ls,Lpp,p,l,a,t(2.5);

	cout <<"=====================================\n";
	cout <<"PROGRAM PERHITUNGAN LUAS BANGUN DATAR\n";
	cout <<"=====================================\n";
	cout <<"  +KODE+   LUAS BANGUN DATAR   +\n";
	cout <<"  +  P +  Luas persegi panjang +\n";
	cout <<"  +  S +    Luas segitiga      +\n";
	cout <<"=====================================\n";
	cout <<"silahkan masukkan kode yang dipilih:";
	cin >>q;

if (q=='p'|| q=='P')
	{
		cout<<"masukkan panjang\t\t:";
		cin >>p;
		cout<<"masukkan lebar\t\t\t:";
		cin >>l;
		Lpp=p*l;
		cout<<"Luas persegi adalah\t\t:"<<Lpp<<"\n";
	}
	else if 	(q=='s'|| q=='S')
	{
		cout<<"masukkan alas\t\t\t:";
		cin >>a;
		cout<<"masukkan tinggi\t\t\t:";
		cin >> t;
		Ls=0.5*(a*t);
		cout<<"luas segitiga adalah\t\t:"<<Ls<<"\n";
	}
	else
	cout<<"kode yang anda masukkan salah\t\t"<<"\n";
}
