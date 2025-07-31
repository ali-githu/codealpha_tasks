#include<iostream>
using namespace std;
int main() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    double totalCredits = 0, totalGradePoints = 0, cgpa = 0;
    int totalSemesters = 1; // Assuming one semester for simplicity

    for (int i = 0; i < numCourses; i++) {
        double grade, creditHours;
        cout << "Enter grade (4.0 scale) for course " << i + 1 << ": ";
        cin >> grade;
        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> creditHours;

        totalCredits += creditHours;
        totalGradePoints += grade * creditHours;

        cout << "Course " << i + 1 << ": Grade = " << grade << ", Credit Hours = " << creditHours << endl;
    }

    double gpa = totalGradePoints / totalCredits;
    cgpa = gpa; // For one semester, GPA = CGPA

    cout << "GPA for the semester: " << gpa << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}



