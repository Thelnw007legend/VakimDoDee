#include <iostream>
#include <string>
using namespace std;
int main()
{	char menu;
	int amount;
	float result = 0.0;
	cout<<"==========Menu=========="<<endl;
	cout<<"Press 1:Enter Amount"<<endl;
	cout<<"Press 2:interest 7%"<<endl;
	cout<<"Press 3:interest 5%"<<endl;
	cout<<"Press 0:Exit"<<endl;
	cout<<"--------------------------"<<endl;
	do{
		cout<<"Enter Menu :";
		cin>>menu;
		if(menu == '1')
		{	cout<<"Enter Amount :";
			cin>>amount;
		}
		else if (menu == '2')
		{	result = amount*0.07;
			cout<<"7 % of "<<amount<<"="<<amount + result<<endl;
		}
		else if (menu == '3');
		{	result = amount*0.05;
			cout<<"5 % of "<<amount<<"="<<amount + result<<endl;
		} else cout<<"Invalid Menu! Please choose again"<<endl;
		
	}while(menu != '0');
















	system("pause");
	return(0);
}