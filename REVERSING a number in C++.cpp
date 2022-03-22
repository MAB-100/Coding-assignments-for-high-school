#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,reverse =0;
	cout<<"ENTER A NUMBER TO REVERSE \n";
	cin>>n;
	while(n!=0)
	{
		reverse= reverse * 10;
		reverse = reverse + n%10;
		n = n/10;
	}	
	cout<<"REVERSE OF ENTERED NUMBER IS ="<<reverse;
	return 0;
}
