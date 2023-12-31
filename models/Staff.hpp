#ifndef Staff_H
#define Staff_H
#include <iostream>

using namespace std;

class Staff
{
private:


    //props
    int id;
    string firstName;
    string lastName;
    int doh;
    int bonusCode;
    double salary;

public:

    //static props
    static int num;

    //constructor
    Staff(int id,string firstName,string lastName,int doh,int bonusCode,double salary);
    Staff();

    //methods
    double Calculate_Salary();
    void Print_Stf_Info();

    //getters
    int getId();
    string getFirstName();
    string getLastName();
    int getDOH();
    int  getBonusCode();
    double getSalary();

    //setters
    void setId(int id);
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOH(int doh);
    void setBonusCode(int bonus_code);
    void setSalary(double salary);

};

#endif