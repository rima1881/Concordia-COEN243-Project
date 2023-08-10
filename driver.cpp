#include<iostream>
#include<vector>
#include "models/Student_Staff.hpp"
#include "models/Student.hpp"
#include "models/Staff.hpp"

using namespace std;

void showStaff();
void showStudents();


Student_Staff * driver;


int main(){


    
    cout<<" --------------------------------------------------------------\n";
    cout<<"                     moodle simulator :)\n";
    cout<<" --------------------------------------------------------------\n\n\n";


    driver = new Student_Staff("db/student.txt","db/staff.txt");

    int option;

    while (true)
    {

        cout<<"\n\n***********************************************************************\n\n";
        cout << "Controller Menu:" << endl;
        cout << "1.Show Students info" << endl;
        cout << "2.Show Staff info" << endl;
        cout << "3.Find the highest gpa" << endl;
        cout << "4.Find the undergrads" << endl;
        cout << "5.Find staff with the same hired year" << endl;
        cout << "0.exit" << endl;

        option = -1;

        while (true)
        {

            cout << "Please choose an option (0-5): ";
            cin >> option;            

            if(option > -1 && option <6)
                break;

            cout << "invalid number !!!";
        }
        

        if(option == 0)
            break;
        else if(option == 1)
            showStudents();
        else if(option == 2)
            showStaff();
        else if(option == 3)
            Student_Staff::Highest_GPA(driver->getStudents(),Student::num);
        else if(option == 4){

            vector<Student> undergrads = Student_Staff::N_of_UnderGrad(driver->getStudents(),Student::num);

            cout << "the undergrad students are : \n\n";

            for(Student s: undergrads){
                s.Print_Std_Info();
            }
        }
        else if(option == 5)
            Student_Staff::Same_Hire_Year(driver->getStaff(),Staff::num);

    }
    
    free(driver);



    return 0;
}

void showStaff(){

    int option = 1;
    Staff * staff = driver -> getStaff();

    cout<< Staff::num <<"staff are registered in system\n";

    

    while(true){

        option = -1;

        while (true)
        {
            
            cout<<"\n\nenter the index of the staff to show info or enter 0 to exit : ("<<Staff::num<<",0) ";
            cin >> option;

            if(0 <= option && option <= Staff::num)
                break;
            
            
            cout << "invalid number!!!";
        }
        

        if(option == 0)
            break;

        staff[option-1].Print_Stf_Info();
        cout << "the staff salary is "<< staff[option -1 ].Calculate_Salary();


    }


}

void showStudents(){

    

    int option = 1;
    Student * students = driver -> getStudents();

    cout<< Student::num <<"students are registered in system\n";

    

    while(true){

        option = -1;

        while (true)
        {
            
            cout<<"\n\nenter the index of the student to show info or enter 0 to exit : ("<<Student::num<<",0) ";
            cin >> option;

            if(0 <= option && option <= Student::num)
                break;
            
            
            cout << "invalid number!!!";
        }
        

        if(option == 0)
            break;

        students[option-1].Print_Std_Info();
        
        cout<< "student status is " << students[option - 1].StudentStatus();

        string completed = students[option - 1].CompleteProgram() ? "" : "not";

        cout << "\nthe student has "<<completed<<" completed the program\n\n";


    }


}



