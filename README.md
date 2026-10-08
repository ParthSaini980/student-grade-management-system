# Student Grade Management System

A beginner-level C++ project that uses Object-Oriented Programming (OOP) to store student information and calculate their academic results.

## Features

* Accepts details for multiple students
* Stores student name and roll number
* Stores marks for three subjects
* Calculates total marks
* Calculates percentage
* Assigns a grade based on percentage
* Displays the results of all students
* Uses a vector to store multiple Student objects

## OOP Concepts Used

This project demonstrates the following Object-Oriented Programming concepts:

* **Class** — Created a Student class to represent a student.
* **Objects** — Each student is represented as an object of the Student class.
* **Encapsulation** — Student data members are kept private and accessed through class functions.
* **Constructor** — Used to initialize student details when an object is created.
* **Member Functions** — Functions are used to calculate total marks, percentage, grade, and display information.

## Technologies Used

* C++
* Standard Template Library (STL)
* vector

## Grade Calculation

| Percentage   | Grade |
| ------------ | ----- |
| 90 and above | A     |
| 80 – 89      | B     |
| 70 – 79      | C     |
| 60 – 69      | D     |
| Below 60     | F     |

## How It Works

1. The program asks for the number of students.
2. It takes the name, roll number, and marks of three subjects for each student.
3. A Student object is created using the entered information.
4. The objects are stored in a vector<Student>.
5. The program calculates the total marks, percentage, and grade for each student.
6. The results of all students are displayed.

## Example

Enter number of students: 2

Enter details of student 1
Name: Rahul
Roll Number: 101
Marks in Subject 1: 85
Marks in Subject 2: 90
Marks in Subject 3: 80

Enter details of student 2
Name: Aman
Roll Number: 102
Marks in Subject 1: 70
Marks in Subject 2: 75
Marks in Subject 3: 80

===== STUDENT RESULTS =====

------------------------
Name: Rahul
Roll Number: 101
Total Marks: 255
Percentage: 85%
Grade: B

------------------------
Name: Aman
Roll Number: 102
Total Marks: 225
Percentage: 75%
Grade: C
```

## Project Structure

student-grade-management-system/
│
├── main.cpp
└── README.md
```

## Author

**Parth Saini**

B.Tech Computer Science Engineering Student
