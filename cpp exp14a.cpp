//Aryaman Pathak EnTCA2 031
//single inheritance
#include<iostream>
#include<string>
using namespace std;

class Uni { 
    public:
    string university ="Symbiosis:"; 
    void discipline (){
        cout<<"Engineering"<<endl;
    }
};

class Dep : public Uni{ 
    public:
    string department ="Electronics & Communication"; 
};

int main(){
    Dep d; 
    d.discipline();
    cout << d.university << " " << d.department << endl;
    return 0; }

/*
Engineering
Symbiosis: Electronics & Communication
    */
