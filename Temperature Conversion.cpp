#include<iostream>
using namespace std;
void ftoc(float f){
    float c=(f-32)*5/9;
    cout<<"Celcius : "<<c<<" C";
}
void ctof(float c){
    float f=(c*9/5)+32;
    cout<<"Fahrenheit : "<<f<<" F";
}
int main(){
    int ch;
    cout<<"Enter choice 1.c to f 2.f to c : ";
    cin>>ch;
    float t;
    cout<<"Enter temperature : ";
    cin>>t;
    if(ch==1)
        ctof(t);
    else if(ch==2)
        ftoc(t);
    else
        exit(0);
    return 0;
}