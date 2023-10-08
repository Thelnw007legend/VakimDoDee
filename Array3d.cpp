#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

char check_grade(int score) {
    char grade;  
    if (score >= 80) {
        grade = 'A';
    } else if (score >= 75) {
        grade = 'B+';
    } else if (score >= 70) {
        grade = 'B';
    } else if (score >= 65) {
        grade = 'C+';
    } else if (score >= 60) {
        grade = 'C';
    } else if (score >= 55) {
        grade = 'D+';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade; 
}

 float calculate_gpa(int math, int science, int english) {
    return (math + science + english) / 3.0;
}

int main() {
    int num[3][3];
    string n[3];
    char grade[3][3];
    float gpa[3];
    for (int i = 0; i < 3; i++) {
        cout << "Student" << "\t" << i + 1 << endl;
        cout << "Name [" << i + 1 << "] :";
        cin >> n[i];
        for (int j = 0; j < 3; j++) {
            cout << "Score [" << i << "][" << j << "] :";
            cin >> num[i][j];
            grade[i][j] = check_grade(num[i][j]);
        }
        gpa[i] = calculate_gpa(num[i][0], num[i][1], num[i][2]);
    }

    cout << setfill('-') << setw(60) << "" << endl;
    cout << "Student\tMath\tScience\tEnglish\tGPA\n";
    cout << setfill('-') << setw(60) << "" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " " << n[i] << "\t";
        for (int j = 0; j < 3; j++) {
               cout << num[i][j] << " (" << grade[i][j] << ")\t";
        }
        cout << fixed << setprecision(2) << gpa[i] << endl;
    }

    system("pause");
    return 0;
}
