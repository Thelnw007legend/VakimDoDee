#include <iostream>
#include <string>
using namespace std;
int main()
{	
	/*char Choice;
	float Area;
	cout<<"Program calculate Area"<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Right-angled Triangle"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your Choose number : ";
	cin>>Choice;
	
	if (Choice == '1'){
		float Radius;
		cout<<"\nEnter Radius :";
		cin>>Radius;
		Area = 3.14159f*Radius*Radius;
		cout<<"Area of Circle ="<< Area <<endl;
	}
	else if (Choice == '2'){
		float Length,Width;
		cout<<"\Enter length and width :";
		cin>> Length >> Width;
		Area = Length*Width;
		cout<<" Area of Rectangle ="<< Area <<endl;
	}
	else if (Choice == '3'){
		float Base,Height;
		cout<<"\nEnter length and width :";
		cin>> Base >> Height;
		Area = 0.5*Base*Height;
		cout<<" Area of Right-angled Triangle =" << Area <<endl ;
	}
	
	else if (Choice == '4') cout<<"\n. . . Exit Program. . .\n";
	
	else cout<<"\nYou choose out of range is not process.\n";
	*/
	int num1,num2;
	int total = 0;
	cout<<"Enter num1 :";
	cin>>num1;
	cout<<"Enter num2 :";
	cin>>num2;
	cout<<"************************"<<endl;
	for (int n = 1; n <= num2; n++)
	{	cout<<num1<<" x "<< n <<" = "<<num1*n<<endl;
		total = total+(num1*n);
	}
	cout<<"Total = "<<total<<endl;
	cout<<"AVG. = "<<total/(float)num2<<endl;
	
	

















	system("pause");
	return(0);
}