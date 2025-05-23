// #include <iostream>
// using namespace std;
 
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };
 
// int main()
// {
//     struct employee Akshit;
//     return 0;
// }

                                //Accessing stucture element

// #include <iostream>
// using namespace std;
 
// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };
 
// int main()
// {
//     struct employee Akshit;
//     Akshit.eId = 1;
//     Akshit.favChar = 'c';
//     Akshit.salary = 120000000;
//     cout << "eID of Akshit is " << Akshit.eId << endl;
//     cout << "favChar of Akshit is " << Akshit.favChar << endl;
//     cout << "salary of Akshit is " << Akshit.salary << endl;
//     return 0;
// }

                     //***typedef and ep wala funda***

#include <iostream>
using namespace std;
 
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;
 
int main()
{
    ep Akshit;
    ep Tanuj;
    ep Archit;
    Akshit.eId = 1;
    Akshit.favChar = 'c';
    Akshit.salary = 120000000;
    cout << "eID of Akshit is " << Akshit.eId << endl;
    cout << "favChar of Akshit is " << Akshit.favChar << endl;
    cout << "salary of Akshit is " << Akshit.salary << endl;
    return 0;
}