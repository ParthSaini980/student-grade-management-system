#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks1, marks2, marks3;

public:

    // Constructor
    Student(string n, int r, float m1, float m2, float m3) {
        name = n;
        rollNumber = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    // Calculate total marks
    float getTotal() {
        return marks1 + marks2 + marks3;
    }

    // Calculate percentage
    float getPercentage() {
        return getTotal() / 3.0;
    }

    // Calculate grade
    char getGrade() {

        float percentage = getPercentage();

        if (percentage >= 90)
            return 'A';

        else if (percentage >= 80)
            return 'B';

        else if (percentage >= 70)
            return 'C';

        else if (percentage >= 60)
            return 'D';

        else
            return 'F';
    }

    // Display student details
    void display() {

        cout << "\n\n";

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Percentage: " << getPercentage() << "%" << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {

    vector<Student> students;

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        string name;
        int roll;
        float m1, m2, m3;

        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Roll Number: ";
        cin >> roll;

        cout << "Marks in Subject 1: ";
        cin >> m1;

        cout << "Marks in Subject 2: ";
        cin >> m2;

        cout << "Marks in Subject 3: ";
        cin >> m3;

        Student s(name, roll, m1, m2, m3);

        students.push_back(s);
    }

    cout << "\n\n STUDENT RESULTS \n";

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    return 0;
}
