#include <iostream>
#include <string>
using namespace std;



class Student {
protected:
string name;
string prn;
public:
void inputStudent() {
cout << "Enter student name: ";
getline(cin, name);
cout << "Enter PRN: ";
cin >> prn;
}
void displayStudent() {
cout << "Student Name: " << name << endl;
cout << "PRN: " << prn << endl;
}
};
class UT_Marks : virtual public Student {
protected:
double ut1Marks;
double ut2Marks;
public:
void inputUT_Marks() {
inputStudent();
cout << "Enter UT1 Marks: ";
cin >> ut1Marks;
cout << "Enter UT2 Marks: ";
cin >> ut2Marks;
}
void displayUT_Marks() {
displayStudent();
cout << "UT1 Marks: " << ut1Marks << endl;
cout << "UT2 Marks: " << ut2Marks << endl;
}
};


class Sports : virtual public Student {
protected:
string sport;
double sportMarks;
public:
void inputSports() {
cout << "Enter Sport: ";
cin.ignore();
getline(cin, sport);
cout << "Enter Sport Marks: ";
cin >> sportMarks;
}
void displaySports() {
displayStudent();
cout << "Sport: " << sport << endl;
cout << "Sport Marks: " << sportMarks << endl;
}
};
class Result : public UT_Marks, public Sports {
private:
double totalMarks;
public:
void calculateResult() {
totalMarks = ut1Marks + ut2Marks + sportMarks;
}
void displayResult() {
displayStudent();
cout << "Total Marks: " << totalMarks << endl;
}
};
int main() {
Result studentResult;

cout << "Enter UT Marks and Sports details:\n";
studentResult.inputUT_Marks();
studentResult.inputSports();
studentResult.calculateResult();
cout << "\nDisplaying Student Result:\n";
studentResult.displayResult();
return 0;
}