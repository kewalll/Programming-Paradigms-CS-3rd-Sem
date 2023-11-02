#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
string name;
int age;
public:
void input() {
cout << "Enter name: ";
cin.ignore();
getline(cin, name);
cout << "Enter age: ";
cin >> age;
}
void display() {
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
}
};
class Employee : public Person {
private:
int employeeId;
public:
void inputEmployee() {
input();
cout << "Enter Employee ID: ";
cin >> employeeId;
}
void displayEmployee() {
display();
cout << "Employee ID: " << employeeId << endl;
}
};
class Student : public Person {
private:

int studentId;
public:
void inputStudent() {
input();
cout << "Enter Student ID: ";
cin >> studentId;
}
void displayStudent() {
display();
cout << "Student ID: " << studentId << endl;
}
};
int main() {
Employee employee;
Student student;
cout << "Enter employee details:\n";
employee.inputEmployee();
cout << "\nEnter student details:\n";
student.inputStudent();
cout << "\nDisplaying employee details:\n";
employee.displayEmployee();
cout << "\nDisplaying student details:\n";
student.displayStudent();
return 0;
}