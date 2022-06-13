#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int no, char sName) {
  
  studentId=no;
  strcpy(name,sName),
}

// Display StudentId and Name
Student::display() {

    cout<<"Student Id is: "<<studentId<<endl;
    cout<<"Student Name is:"<<name<<endl;
  
}
