#include <iostream>
#include <string>
using namespace std;
int main()
{	char Ch;
int Count =0;
	string Str;
	cout<<"Enter String :";
	while ((Ch = cin.get())!= '\n'){
		Count++;
		Str += Ch;
		if(Ch == '.') break;
	}
	cout<<"\nLength of string("<< Str <<")is ";
	cout << Count <<endl;
	
		
	
			


































	system("pause");
	return(0);
}