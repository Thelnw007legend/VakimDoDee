#include <iostream>
using namespace std;
int main()
{
	int s;
	cout<<"Input C++ Score : ";
	cin>>s;
	cout<<"You "<<((s>50)?"pass with score = ":"fail with score = ")<<( s )<<endl;


	system("pause");
	return(0);
}