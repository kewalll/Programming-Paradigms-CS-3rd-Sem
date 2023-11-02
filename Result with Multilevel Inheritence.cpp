#include <iostream>
#include <string>
using namespace std;
class Student {

protected:
string name;
int rollNumber;
public:
void input() {
cout << "Student name: ";
cin.ignore();
getline(cin, name);
cout << "Roll number: ";
cin >> rollNumber;
}
void display() {
cout << "Student Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
}
};
class Marks : public Student {
protected:
int subject1;
int subject2;
int subject3;
public:
void inputMarks() {
cin.ignore();
cout << "Subject 1: ";
cin >> subject1;
cout << "Subject 2: ";
cin >> subject2;
cout << "Subject 3: ";
cin >> subject3;
}
void displayMarks() {
cout << "Subject 1: " << subject1 << endl;
cout << "Subject 2: " << subject2 << endl;
cout << "Subject 3: " << subject3 << endl;

}
};
class Result : public Marks {
public:
void calculateTotalMarks() {
int totalMarks = subject1 + subject2 + subject3;
cout << "Total Marks: " << totalMarks << endl;
}
};
int main() {
int numStudents;
cout << "Enter the number of students: ";
cin >> numStudents;
for (int i = 0; i < numStudents; i++) {
Result studentResult;
cout << "\nEnter details for Student " << i + 1 << "\n";
studentResult.input();
studentResult.inputMarks();
cout << "\nDisplaying details for Student " << i + 1 << "\n";
studentResult.display();
studentResult.displayMarks();
studentResult.calculateTotalMarks();
cout << "\n";
}
return 0;
}