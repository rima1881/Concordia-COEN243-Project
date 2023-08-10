#include <fstream>
#include <sstream>
#include "./Student_Staff.hpp"
#include "./Student.hpp"
#include "./Staff.hpp"

Student_Staff::Student_Staff(string student_db_addr,string staff_db_addr){

    cout<<"opening the txt files...\n";

    ifstream studentTxt(student_db_addr);
    ifstream staffTxt(staff_db_addr);

    cout<<"files opened successfully\n\n";

    //student part
    cout<<"reading the students data...\n";
    string line;
    int i;
    int numline;

    getline(studentTxt,line);
    numline = stoi(line);

    int numStudents = --numline/10;

    this -> std_list = new Student[numStudents];

    int r,m;

    for (i = 0;i <= numline ;i++) {

        m = i / 10;
        r = i % 10;

        

        getline(studentTxt,line);

        if(r == 1)
            std_list[m].setId(stoi(line));

        else if(r == 2)
            std_list[m].setFirstName(line);

        else if(r == 3)
            std_list[m].setLastName(line);
            
        else if(r == 4)
            std_list[m].setDOB(stoi(line));

        else if(r == 5)
            std_list[m].setGPA(stod(line));

        else if(r == 6)
            std_list[m].setCompletedCredit(stoi(line));
        
        else if(r == 7)
            std_list[m].setProgram(*(new program(line.c_str()[0])));
            
        else if(r == 8)
            std_list[m].setStartedYear(stoi(line));
        

    }



    cout<<"reading students data finished\n\n";

    //staff part
    cout<<"reading staff data...\n";

    getline(staffTxt,line);
    numline = stoi(line);

    numStudents = --numline/8;

    this -> staff_list = new Staff[numStudents];


    /*
    for (i = 0;i <= numline ;i++) {

        m = i / 8;
        r = i % 8;

        
        getline(studentTxt,line);

        if(r == 1)
            staff_list[m].setId(stoi(line));

        else if(r == 2)
            staff_list[m].setFirstName(line);

        else if(r == 3)
            staff_list[m].setLastName(line);

        else if(r == 4)
            staff_list[m].setDOH(stoi(line));

        else if(r == 5)
            staff_list[m].setBonusCode(stoi(line));

        else if(r == 6)
            staff_list[m].setSalary(stod(line));


    }*/



    cout<<"closing files\n\n";


    // Close the file
    studentTxt.close();
    

}


//static methods
void Student_Staff::Highest_GPA(Student* students){

}

void Student_Staff::Same_Hire_Year(Staff* staff){

}

Student* Student_Staff::N_of_UnderGrad(Student* Students){
    return NULL;
}


//getters
Student* Student_Staff::getStudents(){
    return this -> std_list;
}
Staff* Student_Staff::getStaff(){
    return this -> staff_list;
}
