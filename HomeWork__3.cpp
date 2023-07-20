#include <iostream>
#include <string>
using namespace std;
int main()
{	string Name;
	int m;
	int b1000 = 1000;
	int b100 = 100;
	int b50 = 50;
	int b20 = 20;

	cout<<"Amount to be withdraw: ";
	cin>>m;
	
	cout<<"\n";
	cout<<"1000: "<<(m/b1000)<<endl;
	cout<<"100: "<<(m%b1000)/b100<<endl;
	cout<<"50: "<<(m%b100)/b50<<endl;
	cout<<"20: "<<(m%b50)/b20<<endl;

	system("pause");
	return(0);
}