#include "./Staff.hpp"


//constructor
Staff::Staff(int id,string firstName,string lastName,int doh,int bonusCode,int salary){

    this -> id = id;
    this -> firstName = firstName;
    this -> doh = doh;
    this -> bonusCode = bonusCode;
    this -> salary = salary;

}




//methods
int Staff::Calculate_Salary(){

}

void Staff::Print_Stf_Info(){

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
int Staff::getSalary(){
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
void Staff::setSalary(int salary){
    this -> salary = salary;
}