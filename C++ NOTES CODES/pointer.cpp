#include<iostream>
using namespace std;

int main(){
    int a , b , c , d;
    cin>>a;
    cin>>b;
    *(&c)=a+b;
    if (a-b>0)
    {
        *(&d)=a-b;
    }
    else{
        *(&d)=b-a;
    }
    cout<<*(&c)<<endl;
    cout<<*(&d)<<endl;
return 0;
}