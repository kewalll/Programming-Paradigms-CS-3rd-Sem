#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    int rollno;
    char name[20];
    int marks[5];
    char grade[5];
    float per;
    float calculate()
    {
        per=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
        return per;
    }
    void grades()
    {
        for(int i=0;i<5;i++)
        {
            if(marks[i]>90)
            grade[i]='O';
            else if(marks[i]<91 && marks[i]>80)
            grade[i]='A';
            else if(marks[i]<81 && marks[i]>70)
            grade[i]='B';
            else if(marks[i]<71 && marks[i]>60)
            grade[i]='C';
            else if(marks[i]<61 && marks[i]>50)
            grade[i]='D';
            else if(marks[i]<51 && marks[i]>40)
            grade[i]='E';
            else if(marks[i]<41 && marks[i]>=0)
            grade[i]='F';
        }
    }
    public:
    void readmarks()
    {
        cout<<"\nenter roll no : ";cin>>rollno;
        cout<<"\nenter name : ";
        cin>>name;
        cout<<"\nenter marks in ";
        for(int i=0;i<5;i++)
        {
            cout<<"\nsubject "<<i+1<<" : ";
            cin>>marks[i];
        }
        calculate();
        grades();
    }
    void display()
    {
        cout << "\n****Marksheet****";
        cout << "\nName : " << name << endl;
        cout << "\nRoll no : " << rollno << endl;
        for (int i = 0; i < 5; i++)
        {
            
            cout << "\nMarks in Subject-" << i + 1 << " : " << setw(3) << left << marks[i] << endl;
            cout << "Grade in Subject-" << i + 1 << " : " << setw(2) << left << grade[i];
        }
        cout << fixed << setprecision(2);
        cout << "\nPercentage : " << per << "%" << endl;
    }
};
int main()
{
    student s;
    s.readmarks();
    s.display();
}
