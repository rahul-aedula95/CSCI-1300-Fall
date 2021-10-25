#include "Student.h"
Student::Student(){
    grade = 0;
    name = "";
}

Student::Student(string name_in, double grade_in){
    name = name_in;
    grade = grade_in;
}

double Student::getGrade(){
    return grade;
}
string Student::getName(){
    return name;
}
void Student::setGrade(double grade_in){
    grade = grade_in;
}
void Student::setName(string name_in){
    name = name_in;
}

void Student::print(){
    cout << name << ": " << grade << "%" << endl;
}