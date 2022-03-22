#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	float a , b ,c , d , root1 , root2;
	
	cout<<"ENTER THE VALUE OF a , b , c"<<endl;
	cin>>a>>b>>c;
	d=b*b-(4*a*c);
	if(d==0)
	{
		root1=-(b/(2*a));
		root2=root1;
		cout<<"1st root is "<<root1<<endl;
		cout<<"2nd root is "<<root2<<endl;
	}
	else if(d>0)
	{
		root1=-((b+sqrt(d))/(2*a));
		root2=-((b-sqrt(d))/(2*a));
		cout<<"1st root is "<<root1<<endl;
		cout<<"2nd root is "<<root2<<endl;	
	}
	else if(d<0)
	{
		cout<<"roots are imaginary and dont exist";
	}
	
	getch();
	return 0;
}

