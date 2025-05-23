//********AREA OF RECTANGLE********

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1 , num2;
//     cout<<"enter Length"<<endl;
//     cin>>num1;
//     cout<<"enter Breadth"<<endl;
//     cin>>num2;
//     cout<<"The Area of rectangle is "<< num1 * num2 ;
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int r,h;
    cout<<"Enter Radius  "<<endl;
    cin>>r;
    cout<<"Enter Height  "<<endl;
    cin>>h;
   if (h=0)
{
     cout<<"Area of Circle is  "<< 3 * r * r <<endl;
}
    else (h>0);
{
    cout<<"Volume of Cylinder is  "<< 3 * r * r * h <<endl;
}
return 0;
}
