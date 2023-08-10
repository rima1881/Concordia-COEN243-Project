#ifndef Student_H
#define Student_H
#include <iostream>
#include "./program.hpp"

using namespace std;


class Student
{
private:
    

    //props
    int id;
    string firstName;
    string lastName;
    int dob;
    double gpa;
    int startedYear;
    int completedCredit;
    program prog;


public:
    
    //static props
    static int num;

    //costructor
    Student(int id,string firstName,string lastName,int dob,double gpa,int startedYear,int completedCredit,program program);
    Student();


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
    void setId(int id);
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOB(int dob);
    void setGPA(double gpa);
    void setStartedYear(int started_year);
    void setCompletedCredit(int credit);
    void setProgram(program program);

};


#endif