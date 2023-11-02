#include<iostream>
using namespace std;

int gcd(int a,int b){
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    return result;
}
int lcm(int a,int b){
    int x=gcd(a,b);
    int ans=a*b/x;
    return ans;
}
int main(){
    int ch,a,b;
    cout<<"Enter choice 1.LCM 2.GCD : ";
    cin>>ch;
    cout<<"\nEnter a : ";
    cin>>a;
    cout<<"\nEnter b : ";
    cin>>b;
    if(ch==1)
        cout<<"LCM = "<<lcm(a,b);
    else if(ch==2)
        cout<<"GCD = "<<gcd(a,b);
    else
        exit(0);
    return 0;
}