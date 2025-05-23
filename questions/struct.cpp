#include<iostream>
#include<string>
using namespace std;

   typedef struct student{
        int age;
        string first_name;
        string last_name;
        int standard;
    }ep;

    int main()
    {
    ep student1;
    cout<<"enter age , first name, last name, and standard\n";
    cin>>student1.age;
    cin>>student1.first_name;
    cin>>student1.last_name;
    cin>>student1.standard;   
    cout<<student1.age<<" "<<student1.first_name<<" "<<student1.last_name<<" "<<student1.standard;
    return 0; 
    }
    