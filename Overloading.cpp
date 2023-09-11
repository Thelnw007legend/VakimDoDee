#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Defind prototype function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const double base, const double height);
float Area(const float height2, const double a, const double b);
int main()
{
	char Choice;
	bool flag = true;
	do{
			DisplayMenu();
			cin >> Choice;
			if(Choice == '1'){
					float Radius;
					cout<<"\nEnter radius : ";
					cin>>Radius;
					cout<<"Area of Circle = "<<fixed;
					cout<<setprecision(2)<<Area(Radius)<<endl;
			}
			else if(Choice == '2'){
				float Length,Widht;
				cout<<"Enter length and width : ";
				cin >> Length >> Widht;
				cout<<"Area of Rectangle = "<<fixed;
				cout<<setprecision(2)<<Area(Length,Widht);
				cout<<endl;
			}
			else if(Choice == '3') {
				double base;
				double height;
				cout<<"Enter Base and Height : ";
				cin>> base >> height;
				cout<<"Area of Triangle = "<<fixed;
				cout<<setprecision(2)<<Area(base,height);
				cout<<endl;
			}
			else if(Choice == '4'){
				float height2;
				double a=0,b=0;
				cout<<"Enter Height and A and B : ";
				cin>> height2 >> a >> b;
				cout<<"Area of Trapezoid = "<<fixed;
				cout<<setprecision(2)<<Area(height2,a,b);
				cout<<endl;
			}
			else if(Choice == '5') flag = false;
			else{
					cout<<"\nYou choose out of range is ";
					cout<<"not process.\n";
			}
			
	}while(flag);
	cout<<"\n. . .Exit Program. .\n";
	return(0);
}
float Area(const float Radius)
{
	return(3.14159F*Radius*Radius);
}
float Area(const float Length, const float Widht)
{
	return(Length*Widht);
}
float Area(const double base, const double height)
{
	return(0.5*base*height);
}
float Area(const float height2, const double a, const double b)
{
	return(0.5*height2*(a+b));
}
void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area "<<endl;
	cout<<" 1.Circle "<<endl;
	cout<<" 2.Rectangle" <<endl;
	cout<<" 3.Triangle"<<endl;
	cout<<" 4.Trapezoid"<<endl;
	cout<<" 5.Exit"<<endl;
	cout<<"Enter your choose number: ";
}

