#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int m1, m2, m3;

public:
void inputData() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks for Subject 1: ";
        cin >> m1;
        cout << "Enter Marks for Subject 2: ";
        cin >> m2;
        cout << "Enter Marks for Subject 3: ";
        cin >> m3;
    }


float calculateTotal() {
        return m1 + m2 + m3;
    }

float calculateAverage() {
        return calculateTotal() / 3.0;
    }

void displayDetails() {
       cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
Student s1;
s1.inputData();
s1.displayDetails();

    return 0;
}
