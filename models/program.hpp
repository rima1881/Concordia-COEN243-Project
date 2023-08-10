#ifndef program_H
#define program_H

#include <iostream>
using namespace std;

enum programOptions {
        bachelor,
        Master,
        PhD
};

class program
{
private:
    programOptions data;

public:


    program(){}

    program(programOptions d){

        this -> data = d;

    }

    operator programOptions() const {
        return this -> data;
    }

    void operator=(programOptions p){
        this -> data = p;
    }

    bool operator==(programOptions p){
        return this -> data == p;
    }

    bool operator==(program p){
        return  p == this -> data;
    }

    friend ostream& operator<<(ostream& os, const program& dt){

        switch (dt.data)
        {
        case bachelor:
            os << "bachelor";
            return os;
        case Master:
            os << "Master";
            return os;
        case PhD:
            os << "Ph.D";
            return os; 
        }

        return os;

    }

};
#endif