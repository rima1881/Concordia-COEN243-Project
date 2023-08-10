#include<iostream>
#include "models/Student_Staff.hpp"

using namespace std;

int main(){


    
    cout<<" --------------------------------------------------------------\n";
    cout<<"                     moodle simulator :)\n";
    cout<<" --------------------------------------------------------------\n\n\n";



    Student_Staff drive("db/student.txt","db/staff.txt");


    cout << drive.getStudents()[4].getId() << "\tid\n";
    cout << drive.getStudents()[4].getFirstName()<<"\tname\n";
    cout << drive.getStudents()[4].getLastName() << "\tlastname\n";
    cout << drive.getStudents()[4].getGPA() << "\tgpa\n";
    cout << drive.getStudents()[4].getDOB() << "\tdob\n";
    cout << drive.getStudents()[4].getCompletedCredit() << "\tcreadit\n";
    cout << drive.getStudents()[4].getStartedYear() << "\t started year \n";
    cout << drive.getStudents()[4].getProgram() << "\t program \n";



    return 0;
}