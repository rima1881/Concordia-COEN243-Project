#include<iostream>
#include "models/Student_Staff.hpp"

using namespace std;

int main(){


    
    cout<<" --------------------------------------------------------------\n";
    cout<<"                     moodle simulator :)\n";
    cout<<" --------------------------------------------------------------\n\n\n";



    Student_Staff drive("db/student.txt","db/staff.txt");


    cout << drive.getStudents()[2].getFirstName();


    return 0;
}