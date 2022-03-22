#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char ch;
	cout<<"ENTER THE CHARACTER "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 'a':case 'A':
			cout<<ch<<" is a vowel"<<endl;
			break;
		case 'e':case 'E':
			cout<<ch<<" is a vowel"<<endl;
			break;
		case 'i':case 'I':
			cout<<ch<<" is a vowel"<<endl;
			break;
		case 'o':case 'O':
			cout<<ch<<" is a vowel"<<endl;
			break;
		case 'u':case 'U':
			cout<<ch<<" is a vowel"<<endl;
			break;
			
		default:
			cout<<ch<<" is a consonant"<<endl;
		
	}
	
	
	return 0;
	
	
	
}
