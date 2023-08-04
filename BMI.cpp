#include <iostream>
#include <string>
using namespace std;
int main()
{			
	string Sex;
	float a;	
	float w;
	float h;
	float BMI;
	
	cout<<"Enter Gender :";
	cin>>Sex;
	cout<<"Enter age :";
	cin>>a;
	cout<<"Enter weight :";
	cin>>w;
	cout<<"Enter height :";
	cin>>h;
	
	BMI = w/((h/100)*(h/100));
	cout<<"BMI ="<< BMI <<endl;
	
	if (BMI <= 18.5)
		cout<<" Underweight ";
	else if (BMI <= 20.1) cout<<" Normal " <<endl;
		else if (BMI <= 25) cout<< "Overweight" <<endl;
		
	else if (BMI <= 40) cout<< "Obesity" <<endl;
	

		
	












	
	
	
	system("pause");
	return(0);
}