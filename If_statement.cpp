#include <iostream>
#include <string>
using namespace std;
int main()
{	/*int num,value;
	int pos =0,neg =0, zero =0;
	cout<<"Enter number :";
	cin>>num;
	int i = 1;
	while (i <= num)
	{	cout<<" Enter Value "<< i <<" : ";
		cin>>value;
		if (value>0)pos++;
		else if (value<0)neg++;
		else zero++;
		i++;
	}
	cout<<"*********************************\n";
	cout<<"Negative = "<< neg <<" numbers\n";
	cout<<"Positive = "<< pos <<" numbers\n";
	cout<<"Zero	= "<< zero <<" numbers\n";
	*/
	
	int Num,Value,Sum;
	bool Flag = true;
	Num = 1;
	Sum = 0;
	do{
			cout<<"Enter value "<< Num <<" : ";
			cin>>Value;
			if((Value >= 1)&&(Value <= 20)){
				Sum +=Value;
				Num++;
			}
			else Flag = false;
	}while (Flag == true);
	if(Num> 1){
		float Avg;
		Avg = static_cast<float>(Sum)/--Num;
		cout<<"Average of data = "<<Avg <<endl;
	}
	else cout<<"NO data input."<<endl;
	
			















	system("pause");
	return(0);
}