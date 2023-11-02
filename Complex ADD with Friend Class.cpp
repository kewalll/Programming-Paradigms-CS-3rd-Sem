#include<iostream>
using namespace std;

class Complex {
	private:
		float real, img;
	
	public:
		Complex() {
			real = 0;
			img = 0;
		}
		
		Complex(float r) {
			real = r;
			img = r;
		}
		
		Complex(float r, float i) {
			real = r;
			img = i;
		}
		
		Complex(const Complex& c) {
			real = c.real;
			img = c.img;
		}
	
		friend void add(Complex& sum, const Complex& n1, const Complex& n2);
		friend void subtract(Complex& diff, const Complex& n1, const Complex& n2);
		friend void printSum(const Complex& c);
		friend void printDiff(const Complex& c);
};

void add(Complex& sum, const Complex& n1, const Complex& n2) {
	sum.real = n1.real + n2.real;
	sum.img = n1.img + n2.img;
}

void subtract(Complex& diff, const Complex& n1, const Complex& n2) {
	diff.real = n1.real - n2.real;
	diff.img = n1.img - n2.img;
}

void printSum(const Complex& c) {
	cout<<"Sum is: "<<c.real<<" + "<<c.img<<"i"<<endl;
}

void printDiff(const Complex& c) {
	cout<<"Difference is: "<<c.real<<" + "<<c.img<<"i"<<endl;
}

int main() {
	float r1, r2, i1, i2;
	
	cout<<"Enter real part of num1: ";
	cin>>r1;
	cout<<"Enter imaginary part of num1: ";
	cin>>i1;
	cout<<"Enter real part of num2: ";
	cin>>r2;
	cout<<"Enter imaginary part of num2: ";
	cin>>i2;
	
	Complex num1(r1, i1);
	Complex num2(r2, i2);
	Complex sum;
	Complex diff;
	
	add(sum, num1, num2);
	subtract(diff, num1, num2);
	
	printSum(sum);
	printDiff(diff);
	
	return 0;
}
