#include<iostream>
using namespace std;

typedef struct employee
{
    int employee_id;
    char name;
    int age;
    float salary;
}ep;
 
int main(){
    int n;
    1<n<100;
    int op;
    int employee_id;
    char name;
    int age;
    float salary;
    1<salary<100000;
    
   cout<<"Enter No. of Employees: ";
   cin>>n;
  
   cout<<"there are "<<n<<" employees\n";
   cout<<"choose operation:";
   cin>>op;
   switch (op)
   {
   case 1:
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Employee id: ";
    cin>>employee_id;
    cout<<"Enter Age ";
    cin>>age;
    cout<<"Enter Salary ";
    cin>>salary;
    ep name;
    break;

   case 2:
   cout<<"wait";
   break;

   default:
   cout<<"Choose a valid operation";
    break;
   }
   
    return 0;
}
