#include <iostream>

using namespace std;

int main()
{
	int x [3]={1,5,4};
	int y [3]={3,2,5};
	
	/*for (int i=0;i<=2;i++)
	{
		int a,b;
		a=x[i];
		b=y[i];
		cout<<"Aray x "<<i<<" = "<<a<<endl;
		cout<<"Aray y "<<i<<" = "<<b<<endl;
		cout<<"Aray penjumlahan "<<i<<" = "<<a+b<<endl<<endl;
	}*/
	
	for (int i=0;i<=2;i++)
	{
		int a;
		a =x[i];
		cout<<"Aray x "<<i<<" = "<<a<<endl;
	}
	cout<<endl;
	
	for (int j=0;j<=2;j++)
	{
		int b;
		b =y[j];
		cout<<"Aray y "<<j<<" = "<<b<<endl;
	}
	cout <<endl;
	
	for (int k=0;k<=2;k++)
	{
		int a,b;
		a=x[k];
		b=y[k];
		cout<<"Aray penjumlahan "<<k<<" = "<<a+b<<endl;
	}
}
