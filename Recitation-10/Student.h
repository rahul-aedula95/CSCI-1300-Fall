#include <iostream>
using namespace std;

class Student{
public:
    Student();
    Student(string name_in, double grade_in);
    
    double getGrade();
    string getName();
    void setGrade(double grade_in);
    void setName(string name);void print();
private:
    double grade;
    string name;
};