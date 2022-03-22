#include <iostream>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	cout<<"HELLO! WHAT IS YOUR NAME?"<<endl;
	char x[50];
	//cin >>x;
	gets(x);
	cout<<"\nHI "<<x<<"\n \nI AM MAB ,A CREATION OF ABBAS"<<endl;
	cout<<"\nWELCOME TO THE SYSTEM"<<endl;
	choice1:cout<<"\nWHAT CAN I DO FOR YOU?";
	cout<<"\nA:LIST ALL FUNCTIONALITIES";
	cout<<"\nB:DO NOTHING";
	cout<<"\nC:SHUT DOWN"<<endl;

	char y;
	cin>>y;
		
	if  (y=='A' )
	{
	cout<<"we dont have any functionalities right now "<<endl;
	cout<<"sorry"<<endl;
	goto choice1;	
	}
	
	if  (y=='B' )
	{
	
	cout<<"\nOK!"<<endl;
	goto choice1;
	}
	
	if  (y=='C' )
	{
		
	cout<<"PRESS ANT KEY TO EXIT";
	
	}
	
}
