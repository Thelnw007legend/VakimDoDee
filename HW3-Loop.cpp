#include <iostream>
#include <string>
using namespace std;
int main()
{
	char	menu;
	int		n1,n2,n3;
	//float result 0.0;
	cout<<"Select Menu"<<endl;
	cout<<"**************************"<<endl;
	cout<<"1.Align Left"<<endl;
	cout<<"2.Align Right"<<endl;
	cout<<"3.Center"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"*************************"<<endl;
	do{
		cout << "Select Menu No.: ";
        cin >> menu;

        if (menu == '1') {
            cout << "input number of lines: ";
            cin >> n1;

            for (int i = 1; i <= n1; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        } else if (menu == '2') {
            cout << "input number of lines: ";
            cin >> n2;

            for (int i = 1; i <= n2; i++) {
                for (int j = 1; j <= n2 - i; j++) {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        } 
		else if (menu == '3') {
            cout << "input number of lines: ";
            cin >> n3;

            int maxWidth = 2 * n3 - 1;
            for (int i = 1; i <= n3; i++) {
                int stars = 2 * i - 1;
                int spaces = (maxWidth - stars) / 2;

                for (int j = 0; j < spaces; j++) {
                    cout << " ";
                }
                for (int k = 0; k < stars; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }

		} while (menu != '4');








	system("pause");
	return(0);
}

		