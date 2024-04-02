#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    void setData() {
        cout << "Enter day=";
        cin >> this->day;
        cout << "Enter month number =";
        cin >> this->month;
        cout << "Enter year=";
        cin >> this->year;
    };

    void getData1() {
        if (day <= 31 && month <= 12) {
            cout << "Your Date is " << this->day << '-' << this->month << "-" << this->year << ", ";
        }
        else {
            cout << "invalid input";
        }
    };

    string mon(int month) {
        string m[] = {"_", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        return m[month];
    }

    void getData2() {
        if (day <= 31 && month <= 12) {
            cout << this->day << '-' << this->mon(month) << "-" << this->year << " , ";
        }
        else {
            cout << "invalid input";
        }
    };

    void getData3() {
        if (day <= 31 && month <= 12) {
            cout << this->day << "/" << this->month << "/" << this->year << ".";
        }
        else {
            cout << "invalid input";
        }
    };

    int calculateDifference(const Date& otherDate) {
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int days1 = this->year * 365 + this->day;
        for (int i = 1; i < this->month; i++) {
            days1 += daysInMonth[i];
        }
        days1 += (this->year - 1) / 4 - (this->year - 1) / 100 + (this->year - 1) / 400;

        int days2 = otherDate.year * 365 + otherDate.day;
        for (int i = 1; i < otherDate.month; i++) {
            days2 += daysInMonth[i];
        }
       days2 += (otherDate.year - 1) / 4 - (otherDate.year - 1) / 100 + (otherDate.year - 1) / 400;

        return abs(days1 - days2);
    }
};

int main() {
    int n, i;

    cout << "Enter no of node you want to add in list=";
    cin >> n;
    Date d[n];

    int m = 1;
    for (i = 0; i < n; i++) {
        cout << "enter your " << m << "no. date=";
        d[i].setData();
        m++;
    }

    int l = 1;
    for (i = 0; i < n; i++) {
        cout << "Your " << l << "no. date are=";
        d[i].getData1();
        d[i].getData2();
        d[i].getData3();
        cout << endl;
        l++;
    }

    // Calculate difference between two dates
    int date1Index, date2Index;
    cout << "Enter index of first date (0 to " << n - 1 << "): ";
    cin >> date1Index;
    cout << "Enter index of second date (0 to " << n - 1 << "): ";
    cin >> date2Index;

    int difference = d[date1Index].calculateDifference(d[date2Index]);
    cout << "Difference between the two dates is " << difference << " days." << endl;

    return 0;
}
