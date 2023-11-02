#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator++(int) {
        Complex temp(*this);
        ++real;
        ++imag;
        return temp;
    }
    Complex& operator--() {
        --real;
        --imag;
        return *this;
    }

    Complex operator--(int) {
        Complex temp(*this);
        --real;
        --imag;
        return temp;
    }

    friend Complex operator+(const Complex& c1, const Complex& c2) {
        Complex result;
        result.real = c1.real + c2.real;
        result.imag = c1.imag + c2.imag;
        return result;
    }

    bool operator<(const Complex& c) {
        return (real * real + imag * imag) < (c.real * c.real + c.imag * c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    float a,b,c,d;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    cout<<"Enter d : ";
    cin>>d;
    Complex c1(a,b);
    Complex c2(c,d);
    Complex c3;

    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Prefix Increment\n";
        cout << "2. Postfix deccrement\n";
        cout << "3. Addition\n";
        cout << "4. Less Than Comparison\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                ++c1;
                cout << "Prefix Increment: ";
                c1.display();
                cout << std::endl;
                break;
            case 2:
                c2--;
                cout << "Postfix decrement: ";
                c2.display();
                cout << std::endl;
                break;
            case 3:
                c3 = c1 + c2;
                cout << "Addition: ";
                c3.display();
                cout << std::endl;
                break;
            case 4:
                if (c1 < c2) {
                    cout << "c1 is less than c2" << std::endl;
                } else {
                    cout << "c1 is not less than c2" << std::endl;
                }
                break;
            case 5:
                cout << "Exiting program." << std::endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}