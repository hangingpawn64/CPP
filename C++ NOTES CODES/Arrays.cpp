// #include<iostream>
// using namespace std;

// int main(){

//     int marks[] = {23, 45, 56, 89};
// ***FOR LOOP***
// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
// }
// ***WHILE LOOP***
// int i=0;
// while (i<4)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }
// *** DO-WHILE LOOP***
// int i=0;
// do
// {
// cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
// i++;
// while (i<4);
// }
//         return 0;
// }

//************ Taking Input of Array Elements *****************

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter no of Element you want in array ";
    cin >> n;
    cout << "Enter the " << n << " Elements: ";
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your array is:\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}