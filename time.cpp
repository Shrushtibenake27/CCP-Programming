#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void input() {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void add(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60) {
            seconds = seconds - 60;
            minutes++;
        }

        if (minutes >= 60) {
            minutes = minutes - 60;
            hours++;
        }
    }

    void subtract(Time t1, Time t2) {
        seconds = t1.seconds - t2.seconds;
        minutes = t1.minutes - t2.minutes;
        hours = t1.hours - t2.hours;

        if (seconds < 0) {
            seconds = seconds + 60;
            minutes--;
        }

        if (minutes < 0) {
            minutes = minutes + 60;
            hours--;
        }
    }

    void display() {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }
};

int main() {
    Time t1, t2, sum, difference;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "\nEnter second time:" << endl;
    t2.input();

    sum.add(t1, t2);
    difference.subtract(t1, t2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}
