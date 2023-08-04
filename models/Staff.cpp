#include "./Staff.hpp"


//constructor
Staff::Staff(int id,string firstName,string lastName,int doh,int bonusCode,double salary){

    this -> id = id;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> doh = doh;
    this -> bonusCode = bonusCode;
    this -> salary = salary;

}




//methods
double Staff::Calculate_Salary(){
    return salary * (100 + bonusCode) / 100;
}

void Staff::Print_Stf_Info(){

    cout << "\n\n*********************************\n\n";
    cout << "id : "<<id<<"\n";
    cout << "firstname : "<<firstName<<"\n";
    cout << "lastname : "<<lastName<<"\n";
    cout << "date of hire : "<< doh << "\n";
    cout << "bonus code : "<< bonusCode << "\n";
    cout << "salary : "<< salary << "\n";
    cout << "\n*********************************\n";

}



//getters
int Staff::getId(){
    return this -> id;
}
string Staff::getFirstName(){
    return this -> firstName;
}
string Staff::getLastName(){
    return this -> lastName;
}
int Staff::getDOH(){
    return this -> doh;
}
int Staff::getBonusCode(){
    return this -> bonusCode;
}
double Staff::getSalary(){
    return this -> salary;
}



//setters
void Staff::setFirstName(string fname){
    this -> firstName = fname;
}
void Staff::setLastName(string lname){
    this -> lastName = lname;
}
void Staff::setDOH(int doh){
    this -> doh = doh;
}
void Staff::setBonusCode(int bonus_code){
    this -> bonusCode = bonus_code;
}
void Staff::setSalary(double salary){
    this -> salary = salary;
}