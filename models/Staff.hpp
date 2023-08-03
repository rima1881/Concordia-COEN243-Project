#ifndef Staff
#include <iostream>

using namespace std;

class Staff
{
private:

    int id;
    string firstName;
    string lastName;
    int doh;
    int bonusCode;
    int salary;

public:

    //constructor
    Staff(int id,string firstName,string lastName,int doh,int bonusCode,int salary);

    //methods
    int Calculate_Salary();
    void Print_Stf_Info();

    //getters
    int getId();
    string getFirstName();
    string getLastName();
    int getDOH();
    int getBonusCode();
    int getSalary();

    //setters
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOH(int doh);
    void setBonusCode(int bonus_code);
    void setSalary(int salary);

};

#endif