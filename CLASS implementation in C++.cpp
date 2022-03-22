#include <iostream>
using namespace std;

class StudentMarks
{
	private:
		int CNo,eng,ur,phy,ps,math,cs,obtmarks;
		float percentage,totalmarks=550;
	public:		
		void calculateobtmarks()
		{
			obtmarks = eng+ur+phy+ps+math+cs;
			cout<<obtmarks<<endl;
		}
				
		void calculatepercentage()
		{
			percentage = obtmarks/totalmarks * 100;
			cout<<percentage<<endl;	
		}

		void inputstudent()
		{			
			cin>>CNo>>eng>>ur>>phy>>ps>>math>>cs;
		}	
};

int main() //driver code
{
	StudentMarks s1;
	
	s1.inputstudent();
	s1.calculateobtmarks();
	s1.calculatepercentage();
	
	return 0;
	
}



