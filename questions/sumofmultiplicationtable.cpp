#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0;
    cout<<"enter the number whose table's sum you want: ";
    cin>>n;
    for (i = 1; i <= 10;)
    {
        sum += i*n ;
        cout<<sum<<endl;
        i++;
    }
    cout<<"the final answer is "<<sum;
    return 0;
}