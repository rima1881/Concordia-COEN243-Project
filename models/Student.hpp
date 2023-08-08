#ifndef Student_H
#define Student_H
#include <iostream>
#include "./program.hpp"

using namespace std;


class Student
{
private:
    
    int id;
    string firstName;
    string lastName;
    int dob;
    double gpa;
    int startedYear;
    int completedCredit;
    program prog;


public:

    //costructor
    Student(int id,string firstName,string lastName,int dob,double gpa,int startedYear,int completedCredit,program &program);


    //methods
    bool CompleteProgram();
    string StudentStatus();
    void Print_Std_Info();



    //getters
    int getId();
    string getFirstName();
    string getLastName();
    int getDOB();
    double getGPA();
    int getStartedYear();
    int getCompletedCredit();
    program getProgram();


    //setters
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOB(int dob);
    void setGPA(int gpa);
    void setStartedYear(int started_year);
    void setCompletedCredit(int credit);
    void setProgram(program program);



};


#endif