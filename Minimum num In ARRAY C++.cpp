#include <iostream>
#include<conio.h>
using namespace std;


int main()
{
	int a[10], min, i;
	for(i=0; i<=9; i++)
	{
		cout<<"ENTER ELEMENT NO:"<<i+1<<" ";
		cin>>a[i];
	}	
	min = a[0];
	for(i=1; i<=9; i++)
	{		
		if(min>a[i])
		{
			min=a[i];
		}	
	}
	cout<<"MINIMUM VALUE IN THIS ARRAY IS; "<<min;
	return 0;
}
