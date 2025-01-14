/*1. define class , create a class name student .*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int rollNumber;
        string course;
        int age;

        void DisplayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Course: " << course << endl;
            cout << "Age: " << age << endl;
        };
    
};

int main() {

        Student* student1 = new Student();  //creating objects 
        student1->name = "Shubham";
        student1->rollNumber = 1;
        student1->course = "Computer Science";
        student1->age = 20;
       
        Student* student2 = new Student();
        student2->name = "Rahul";
        student2->rollNumber = 2;
        student2->course = "Mathematics";
        student2->age = 19;

        Student* student3 = new Student();
        student3->name = "Anadi";
        student3->rollNumber = 3;
        student3->course = "BCA";
        student3->age = 21;


        cout << "Student Details:" << endl;
        student1->DisplayDetails();
        cout << endl;
        student2->DisplayDetails();
        cout << endl;
        student3->DisplayDetails();

        
    return 0;
};

