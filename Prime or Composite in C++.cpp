#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void prime_or_composite_no (int n)
{
	if ( n == 1 || n == 2 )
	{
		cout<<n<<"IS  A PRIME NUMBER.";	
		exit(0);
	}

	for ( int i = 2; i <= n-1; i++ )
	{
		if ( n%i == 0)
		{
			cout<<n<<" IS NOT A PRIME NUMBER .";
			exit(0);	
		}
	}

	cout<<n<<" IS A PRIME  NUMBER.";	
}

int main()
{
	int num ;
	S:cout<<"ENTER A NUMBER TO CHECK IF IT'S PRIME OR COMPOSITE : ";
	cin>>num;
	prime_or_composite_no(num);
	getch();
	return 0;
	
}
