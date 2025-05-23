#include <iostream>
using namespace std;

// with loop
// int main(){
//     int n, i, fact = 1;
//     cout<<"enter the number you want factorial of: ";
//     cin>>n;
//     for ( i = 1; i <=n ; i++)
//     {
//         fact = fact*i;
//     }
//     cout<< "the factorial is "<< fact;
//     return 0;
// }

// with recursion
int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
     return a * fact(a-1);
    }
}

int main()
{
    int i;
    cout<<"enter no ";
    cin>>i;
    cout<<"the factorial is "<< fact(i);
    return 0;
}

