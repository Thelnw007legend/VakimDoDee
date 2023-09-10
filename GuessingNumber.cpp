#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int checkNum(int secret_num, int guess, int ranum) {
    if (guess < secret_num) {
        cout << "The secret number is higher" << endl;
        return -1;  
    } else if (guess > secret_num) {
        cout << "The secret number is lower" << endl;
        return 1;   
    } else {
        cout << "Congratulations!" << endl;
        cout << "The secret number is " << secret_num << endl;
        cout << "You made " << ranum << " guesses" << endl;
	}
}

int main() {
    srand(time(0));
    int secret_num = rand() % 10 + 1;
    cout << "### Welcome to guessing number game ###" << endl;
    cout << "Secret number has been chosen" << endl;
    
    int ranum = 0;
    int result;
    bool game = false;
    
    while (!game) {
        int guess;
        cout << "Guess the number (1 to 10): ";
        cin >> guess;
       ranum++;
        
        if (guess < 1 || guess > 10) {
            cout << "Please enter a number between 1 and 10." << endl;
        } else {
            result = checkNum(secret_num, guess, ranum);
            if (result == 0) {
                game = true;
            }
        }
    }

    return 0;
}
