#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    sum.add(c1, c2);

    cout << "\nSum = ";
    sum.display();

    return 0;
}
