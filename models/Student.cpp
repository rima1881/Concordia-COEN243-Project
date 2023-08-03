#include "./Student.hpp"

//constructor
Student::Student(int id,string firstName,string lastName,int dob,double gpa,int startedYear,int completedCredit,string program){

    this -> id = id;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> dob = dob;
    this -> gpa = gpa;
    this -> completedCredit = completedCredit;
    this -> program = program;

}

//methods


//getters
int Student::getId(){
    return this -> id;
}

string Student::getFirstName(){
    return this -> firstName;
}

string Student::getLastName(){
    return this -> lastName;
}

int Student::getDOB(){
    return this -> dob;
}

double Student::getGPA(){
    return this -> gpa;
}

int Student::getStartedYear(){
    return this -> startedYear;
}

int Student::getCompletedCredit(){
    return this -> completedCredit;
}

string Student::getProgram(){
    return this -> program;
}

//setters
void Student::setFirstName(string fname){
    this -> firstName = fname;
}

void Student::setLastName(string lname){
    this -> lastName = lname;
}

void Student::setDOB(int dob){
    this -> dob = dob;
}

void Student::setGPA(int gpa){
    this -> gpa = gpa;
}

void Student::setStartedYear(int started_year){
    this -> startedYear = started_year;
}2 show in lspci

void Student::setCompletedCredit(int credit){
    this -> completedCredit = credit;
}

void Student::setProgram(int program){
    this -> program = program;
}