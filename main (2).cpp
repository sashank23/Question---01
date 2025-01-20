
    // Online Free C++ compiler to run C++ program online
    #include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
};

int main() {
    Student* student = new Student;
    cout << "Enter student's name: ";
    cin.getline(student->name, 50);

    cout << "Enter roll number: ";
    cin >> student->rollNumber;

    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; ++i) {
        cin >> student->marks[i];
    }
    float average = (student->marks[0] + student->marks[1] + student->marks[2]) / 3;
    cout << "\nStudent's Details:" << endl;
    cout << "Name: " << student->name << endl;
    cout << "Roll Number: " << student->rollNumber << endl;
    cout << "Marks: " << student->marks[0] << ", " << student->marks[1] << ", " << student->marks[2] << endl;
    cout << "Average Marks: " << average << endl;
    delete student;

    return 0;
}
