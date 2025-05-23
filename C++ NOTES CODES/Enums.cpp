//Enum or enumeration is a user-defined data type.  Enums have named constants that represent integral values.  Enums are used to make the program more readable and less complex. It lets us define a fixed set of possible values and later define variables having one of those values.

//  //enum enum_name
// {
//     element1,
//     element2,
//     element3
//}

     //****Accessing and using*****
#include <iostream>
using namespace std;
 
enum Meal
{
    breakfast,
    lunch,
    dinner
};
 
int main()
{
    Meal m1 = dinner;
    if (m1 == 2)
    {
        cout << "The value of dinner is " << dinner << endl;
    }
}