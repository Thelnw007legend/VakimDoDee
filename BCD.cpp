#include <iostream>
#include <string>
using namespace std;
int main()
{	cout<<"*****Homework 2**********"<<endl;
	string Name;
	float m;
	float k;
	float c;
	cout<<"Enter Name :";
	cin>>Name;
	cout<<"Enter Salary :";
	cin>>m;
	cout<<"Enter Sale :";
	cin>>k;
	cout<<"Enter Commission Percent :";
	cin>>c;
	cout<<"-----Output---------"<<endl;
	cout<<"Your Name : "<< Name <<endl;
	cout<<"Total Revenue = "<< m+(k*(c/100)) <<"Bath"<<endl;
	system("pause");
	return(0);
}
