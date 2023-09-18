#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{	
	int score[4],total=0,max=0,min=100;
	string name[4];
	for(int i=0;i<4;i++)//i<=3 input array
	{
		cout<<"Name ["<<i<<"] : ";
		cin>>name[i];
		cout<<"Score ["<<i<<"] :";
		cin>>score[i];
	}
	cout<<"-----------------------------\n";
	cout<<"Name \t \t Score\n";
	cout<<"-----------------------------\n";
	for(int i=0 ; i<4;i++)
	{
		cout<<name[i]<<"\t \t"<<score[i]<<endl;
		total = total+score[i];
		if (score[i] > max)
			max = score[i];
		else if  (min > score[i])
			min = score[i];
	}
	cout<<setfill('-')<<setw(30)<<" "<<endl;
	cout<<"Max Score = "<<max<<endl;
	cout<<"Min Score = "<<min<<endl;
	cout<<"Total = "<<total<<endl;
	cout<<"Average = "<<(float)total/4<<endl;
	system("pause");
	return(0);
}
