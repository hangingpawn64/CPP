#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int marks[n]={};
    cin>>n;
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