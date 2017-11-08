#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double jk,gp,gt,gb,jt,jkr,j(1.5);

	
	cout<<"masukkan total jam kerja\t:";
	cin>>jk;
	j=jk-40;
	jkr=j*1.5;
	
	cout<<"masukkan gaji per jam\t\t:";
	cin>>gp;
	
	jt=40+jkr;
	gt=jt*gp;
	gb=gt-(gt*15/100);
	
	cout<<"total jam kerja\t\t\t:"<<jt<<"\n";
	cout<<"total gaji \t\t\t:"<<gt<<"\n";
	cout<<"gaji bersih \t\t\t:"<<gb<<"\n";
}
