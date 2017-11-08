#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,y,hsl;
	char yt;
	
	awal:
	cout<<"program pengurangan tanpa negatif\n";
	cout<<"masukkan x\t:";
	cin>>x;
	cout<<"masukan y\t:";
	cin>>y;
	
	if(x<y)
	hsl=y-x;
	else
	hsl=x-y;
	
	cout<<"hasil\t\t:"<<hsl<<"\n";
	
	cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
	cin>>yt;
	if(yt=='Y' || yt=='y')
	{goto awal;}
	if(yt=='T' || yt=='t')
	{goto selesai;}
	
	selesai:
	cout<<"Terima Kasih";
}
