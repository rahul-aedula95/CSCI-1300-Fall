#include "Student.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
// our old friend split
int split(string input, char delimiter, string arr[], int arrSize)
{
string temp = "";
int size = 0;
int arrayPos = 0;
if(input == "")
{
return 0;
}
else
{
input = input + delimiter;
for(int i = 0; i < input.length(); i++)
{
if(input[i] != delimiter)
{
temp = temp + input[i];
}
else{
if(temp != "")
{
arr[arrayPos] = temp;
size++;
arrayPos++;
}
temp = "";
}
}
}
if (size > arrSize)
{
size = -1;
}
return size;
}



int filterStudents(Student students[], Student filtered[], int size, double low, double high)
{
    int filter_index = 0;
    for (int i = 0 ; i < size; i++){
        if (students[i].getGrade() >= low && students[i].getGrade() <= high){
            filtered[filter_index] = students[i];
            filter_index++;
    }
}
return filter_index;
}



int main(){
    
    Student students[30];
    ifstream infile;
    infile.open("students.txt");
    string curr = "";
    int i = 0;
    // skip the first line
    getline(infile,curr);
    while (getline(infile, curr)){
        string studs[2];
        int ct = split(curr, ',', studs, 2);
        if(ct == 2){
            students[i] = Student(studs[0], stod(studs[1]));
            i++;
        }
    }
    
    Student filtered_list[30];
    double low_score = 90;
    double high_score = 100;
    int num_in_filter = filterStudents(students, filtered_list, 30, low_score, high_score);

    for (int i=0; i<num_in_filter; i++){

        cout<<"Student "<<filtered_list[i].getName()<<" Grade: "<<filtered_list[i].getGrade()<<endl;
    }

    return 0;
}