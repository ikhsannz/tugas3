#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,y,hsl;
	char yt;
	
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
}
