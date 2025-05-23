#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"please enter the no. of element in array ";
    cin>>n;
    int marks[n]={};
    cout<<"enter element of array ";
for (i = 0; i < n; i++)
{
    cin>>marks[i];
}
for (i = 0; i < n; i++)
{
    cout<<marks[i];
}
   return 0;
}