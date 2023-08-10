#include "./Student.hpp"
#include "./program.hpp"


//constructor
Student::Student(int id,string firstName,string lastName,int dob,double gpa,int startedYear,int completedCredit,program program){

    this -> id = id;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> dob = dob;
    this -> gpa = gpa;
    this -> completedCredit = completedCredit;
    this -> prog = program;

}
Student::Student(){}


//methods
bool Student::CompleteProgram(){

    if(this -> prog == bachelor)
        return completedCredit == 140;
    else if (this -> prog == Master)
        return completedCredit == 16;
    else if (this -> prog == PhD)
        return completedCredit == 14;

    return false;

}

string Student::StudentStatus(){

    if(gpa >= 3.5)
        return "A+";
    else if( gpa >= 3)
        return "A";
    else if(gpa >= 2.5)
        return "B";
    else if(gpa >= 2)
        return "C";
    else
        return "D";
    
    return nullptr;

}


void Student::Print_Std_Info(){

    cout << "\n\n*********************************\n\n";
    cout << "id : "<<id<<"\n";
    cout << "firstname : "<<firstName<<"\n";
    cout << "lastname : "<<lastName<<"\n";
    cout << "date of birth : "<< dob << "\n";
    cout << "GPA : "<< gpa << "\n";
    cout << "Comleted Credit : "<< completedCredit << "\n";
    cout << "Program : "<< this -> prog << "\n";
    cout << "\n*********************************\n";

}



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

program Student::getProgram(){


    return this -> prog;

}

//setters
void Student::setId(int id){
    this -> id = id;
}

void Student::setFirstName(string fname){
    this -> firstName = fname;
}

void Student::setLastName(string lname){
    this -> lastName = lname;
}

void Student::setDOB(int dob){
    this -> dob = dob;
}

void Student::setGPA(double gpa){
    this -> gpa = gpa;
}

void Student::setStartedYear(int started_year){
    this -> startedYear = started_year;
}

void Student::setCompletedCredit(int credit){
    this -> completedCredit = credit;
}

void Student::setProgram(program program){
    this -> prog = program;
}
