#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator, denominator;

    void input() {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2) {
        numerator = (f1.numerator * f2.denominator) +
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void subtract(Fraction f1, Fraction f2) {
        numerator = (f1.numerator * f2.denominator) -
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1, f2, sum, difference;

    cout << "Enter first fraction:" << endl;
    f1.input();

    cout << "\nEnter second fraction:" << endl;
    f2.input();

    sum.add(f1, f2);
    difference.subtract(f1, f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}
