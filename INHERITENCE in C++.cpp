#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class EMPLOYEE
{
	public:
		int EmployeeNo , salary ;
		char name[20] ;
	public:
		EMPLOYEE() //constructor
		{
		cout<<"ENTER THE EMPLOYEE#"<<endl;	
		cin>>EmployeeNo;
		cout<<"ENTER THE NAME"<<endl;	
		cin>>name;		
		cout<<"ENTER SLARAY OF THIS EMPLOYEE?"<<endl;	
		cin>>salary;
		}
};
class MANAGER : public EMPLOYEE
{
	
	private:
		char title[20];
		
	public:
		MANAGER ()	//constructor
		{
			cout<<"WHAT IS THE TITLE OF THIS MANAGER?"<<endl;
			cin>>title;
			
			cout<<"EMPLOYEE # "<<EmployeeNo<<" NAMELY: "<<name<<" IS A MANAGER OF "<<title<<" HAVING SALARY OF RS "<<salary<<endl;	
		}	
};
class LABOR : public EMPLOYEE
{
	public:
		LABOR ()	//constructor
		{
			cout<<"EMPLOYEE # "<<EmployeeNo<<" NAMELY: "<<name<<" IS A LABOR, HAVING SALARY OF RS "<<salary<<endl;
		}	

};

int main() //drover code
{
	LABOR l1;
	MANAGER M1;
	
	return 0;

}


