#include<iostream>
using namespace std;

//enum == enumeration = {1 ,2 ,3 ,4 .......}
enum month {Jan = 1 , Feb , Mar , Apr ,May ,Jun ,Jul ,Aug ,Sep , Oct ,Nov ,Dec	};
string GetMonth(month);
int main()
{
	cout<<"ENTER THE NUMBER OF MONTH"<<endl;
	int i;
	cin>>i;
	cout<<GetMonth(month(i))<<endl;
	
}

string GetMonth(month M )
{
	switch(M)
	{
		case 1:
			return "JANUARY";
		case 2:
			return "FEBRUARY";		
		case 3:
			return "MARCH";
		case 4:
			return "APRIL";					
		case 5:
			return "MAY";
		case 6:
			return "JUNE";
		case 7:
			return "JULY";
		case 8:
			return "AUGUST";
		case 9:
			return "SEPTEMBER";
		case 10:
			return "OCTOBER";
		case 11:
			return "NOVEMBER";	
		case 12:
			return "DECEMBER";	
		default :
			return "THERE ARE TOTAL OF 12 MONTHS ONLY!!!";
	}
}

