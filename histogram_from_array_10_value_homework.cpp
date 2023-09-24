#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void fillRandom(int arry[10]) {
    for (int i = 0; i < 10; i++) {
        arry[i] = rand() % 30 + 1; 
    }
}

int main() {
    int arry[10];
    
    srand(time(0)); 

    fillRandom(arry); 
    
    cout << "Element\t" << "Value\t" << "Histogram\t" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << "\t" << arry[i] << " \t";
        
        for (int j = 1; j <= arry[i]; j++) {
            cout << "*";
        }

        cout << endl;
    }

    system("pause"); 
    return 0;
}
