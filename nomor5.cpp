#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double berat, tinggi  (2.5);
	char yt;
	
	awal:
	cout<<"====================================\n";
	cout<<"masukkan tinggi badan(cm)\t:";
	cin>>tinggi;
	cout<<"masukkan berat badan(kg)\t:";
	cin>>berat;
	cout<<"====================================\n";

	if (berat<tinggi/2.5)
	cout<<"anda terlalu kurus = underweight\n";
		
	else if (tinggi/2.3<berat)
	cout<<"anda terlalu berat = overweight\n";	
		
	else if (tinggi/2.5<=berat<=tinggi/2.3)
	cout<<"berat dan tinggi badan anda normal\n";
	else
	cout<<"program error, silahkan coba lagi";
	
	cout<<"====================================\n";
	cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
	cin>>yt;
	if(yt=='Y' || yt=='y')
	{goto awal;}
	if(yt=='T' || yt=='t')
	{goto selesai;}
	selesai:
	cout<<"Terima Kasih";
}
