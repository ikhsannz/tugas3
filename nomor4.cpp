#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x;
	
	cout<<"============================\n";
	cout<<"PROGRAM MENENTUKAN BILANGAN\n";
	cout<<"POSTIF ATAU NEGATIF ATAU NOL\n";
	cout<<"============================\n";
	
	cout<<"masukkan nilai atau angka:";
	cin>>x;
	cout<<"============================\n";
	
	if (x>0)
	cout<<"angka "<<x<<" termasuk bilangan positif\n";
	
	else if (x==0)
	cout<<"angka "<<x<<" termasuk bilangan nol\n";
	
	else if (x<0)
	cout<<"angka "<<x<<" termasuk bilangan negatif\n";
	
	else 
	cout<<"mohon masukkan angka dengan benar!!\n";
}
