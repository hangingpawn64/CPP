#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"enter number ";
    cin>>i;
    //********IF ELSE DID NOT WORK***********
    // if (i=1)
    // {
    //     cout<<"one";
    // }
    // else if (i=2)
    // {
    //     cout<<"two";
    // }
    // else if (i=3)
    // {
    //     cout<<"three";
    // }
    // else if (i=4)
    // {
    //     cout<<"four";
    // }
    // else if (i=5)
    // {
    //     cout<<"five";
    // }
    // else if (i=6)
    // {
    //     cout<<"six";
    // }
    // else if (i=7)
    // {
    //     cout<<"seven";
    // }
    // else if (i=8)
    // {
    //     cout<<"eight";
    // }
    // else if (i=9)
    // {
    //     cout<<"nine";
    // }
    // else
    // {
    //     cout<<"Greater than 9";
    // }

    switch (i)
    {
    case 1:
    cout<<"one";
        break;
    case 2:
    cout<<"two";
        break;
        case 3:
    cout<<"three";
        break;
        case 4:
    cout<<"four";
        break;
        case 5:
    cout<<"five";
        break;
        case 6:
    cout<<"six";
        break;
        case 7:
    cout<<"seven";
        break;
        case 8:
    cout<<"eight";
        break;
        case 9:
    cout<<"nine";
        break;
    default:
    cout<<"Greater than 9";
        break;
    }
    return 0;
}