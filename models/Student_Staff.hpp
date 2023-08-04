#ifndef Student_Staff

#include "./Student.hpp"
#include "./Staff.hpp"

class Student_Staff
{
private:

    Student* std_list;
    Staff* staff_list;

public:

    //constructor
    Student_Staff(string student_db_addr,string staff_db_addr);

    //static mothods
    static void Highest_GPA(Student* students);
    static Student* N_of_UnderGrad(Student* students);
    static void Same_Hire_Year(Staff* staff);

};

#endif