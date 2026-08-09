#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    double marks;
};

void readStudentData(Student& s) {
    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollNumber;

    cout << "Enter marks: ";
    cin >> s.marks;
}

void printStudentData(const Student &s) {
    cout << "\n--- Student Record ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student std1;
    readStudentData(std1);
    printStudentData(std1);
    return 0;
}
