#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{
	int a,b,c;
	
	cout<<endl;
	cout<<"ingrese el primer valor    : ";
	cin>>a;
	cout<<"ingrese un segundo valor   : ";
	cin>>b;
	
	cout<<"...............que operación deseas hacer..............";
	cout<<endl;
	cout<<endl;
	cout<<"    1    SUMA           "<<endl;
	cout<<"    2    MULTIPLICACION "<<endl;
	cout<<endl;
	cout<<".......................................................";
	cout<<endl;
	cin>>c;
	
	if (c==1) {cout<<"selecciono la opción (1) SUMA  el resultado de esta operación es...... "<<a+b<<"......."<<endl;}
	else {cout<<"selecciono la opción  (2) el resultado de esta operación es     "<<a*b<<endl;}
	
system("pause");
		
}
