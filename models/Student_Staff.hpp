#ifndef Student_Staff_H
#define Student_Staff_H

#include "./Student.hpp"
#include "./Staff.hpp"
#include <vector>

class Student_Staff
{
private:

    Student* std_list;
    Staff* staff_list;

public:

    //constructor
    Student_Staff(string student_db_addr,string staff_db_addr);

    //getters
    Student* getStudents();
    Staff* getStaff();


    //static mothods
    static void Highest_GPA(Student* students,int size);
    static vector<Student> N_of_UnderGrad(Student* students,int size);
    static void Same_Hire_Year(Staff* staff,int size);

};

#endif