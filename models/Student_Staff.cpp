#include <fstream>
#include "./Student_Staff.hpp"
#include "./Student.hpp"
#include "./Staff.hpp"

Student_Staff::Student_Staff(string student_db_addr,string staff_db_addr){

    cout<<"opening the txt files...\n";

    ifstream studentTxt(student_db_addr);
    ifstream staffTxt(staff_db_addr);


    cout<<"files opened successfully\n\n";


    cout<<"reading the files...";
    string line;
    while (getline (studentTxt, line)) {

        // Output the text from the file
        cout << line;
    }



    cout<<"reading finished\n\n";


    cout<<"closing files\n\n";
    // Close the file
    studentTxt.close();
    staffTxt.close();


}

void Student_Staff::Highest_GPA(Student* students){

}

void Student_Staff::Same_Hire_Year(Staff* staff){

}

Student* Student_Staff::N_of_UnderGrad(Student* Students){
    return NULL;
}