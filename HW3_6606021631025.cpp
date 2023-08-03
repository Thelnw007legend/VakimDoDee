#include <iostream>
#include <string>
using namespace std;
int main()
{	cout<<"==========QUIZZES==========="<<endl;
	string Name;
	float a1;
	float a2;
	float a3;
	float a4;
	float a5;
	
	
	cout<<"Enter first quizz (10):";
	cin>>a1;
	cout<<"Enter second quizz(10):";
	cin>>a2;
	cout<<"Enter third quizz (10):";
	cin>>a3;
	
	float a6 = ((a1 + a2 + a3)/3);
	
	cout<<"==========MID-TERM=========="<<endl;
	cout<<"Enter mid-term (40):";
	cin>>a4;
	


	cout<<"==========FINAL============="<<endl;
	cout<<"Enter final (50):";
	cin>>a5;
	cout<<"Quizz Total:"<< a6 <<endl;
	cout<<"Mid term:"<< a4 <<endl;
	cout<<"Final:"<< a5 <<endl;
	cout<<"Total:"<< a4 + a5 + a6 <<endl;
	float a7 = a4 + a5 + a6;
	cout<<"Your "<<((a7>50)?"score is PASS ":"fail with score = ")<<( a7 )<<endl;







	system("pause");
	return(0);
}