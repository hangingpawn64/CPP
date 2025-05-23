#include<iostream>
using namespace std;

int main(){
    string A;
    string B;
    int i;
    cin>>A;
    cin>>B;
    cout<< A.size()<<" "<<B.size()<<endl;
    cout<< A + B<<endl;
    i = B[0];
    B[0] = A[0];
    A[0] = i ; 
    cout<<A<<" "<<B;
    return 0;
}