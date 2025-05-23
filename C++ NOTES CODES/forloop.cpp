// #include<iostream>
// using namespace std;

// int main(){
//    int i;
//    int j;
//    cin>>i;
//    cin>>j;
//    switch (i)
//    {
//       case 1:
//       cout<<"one\n";
//       break;
//       case 2:
//       cout<<"two\n";
//       break;
//       case 3:
//       cout<<"three\n";
//       break;
//       case 4:
//       cout<<"four\n";
//       break;
//       case 5:
//       cout<<"five\n";
//       break;
//       case 6:
//       cout<<"six\n";
//       break;
//       case 7:
//       cout<<"seven\n";
//       break;
//       case 8:
//       cout<<"eight\n";
//       break;
//       default:
//       cout<<"nine\n";
//       break;
//    }
//    switch (j)
//    {
//       case 1:
//       cout<<"one\n";
//       break;
//       case 2:
//       cout<<"two\n";
//       break;
//       case 3:
//       cout<<"three\n";
//       break;
//       case 4:
//       cout<<"four\n";
//       break;
//       case 5:
//       cout<<"five\n";
//       break;
//       case 6:
//       cout<<"six\n";
//       break;
//       case 7:
//       cout<<"seven\n";
//       break;
//       case 8:
//       cout<<"eight\n";
//       break;
//       default:
//       cout<<"nine\n";
//       break;
//    }
// for ( i ; i>9 ; i++)
// {
//    if (i % 2 == 0)
//    {
//       cout<<"even\n";
//    }
//    else
//    cout<<"odd\n";
//    break;
// }

// for ( j ; j>9 ; j++)
// {
//    if (j % 2 == 0 && i % 2 == 0)
//    {
//       cout<<"even\neven\n";
//    }
//    if (j % 2 == 0 && i % 2 != 0)
//    {
//      cout<<"odd\neven\n";
//    }
//    if (j % 2 != 0 && i % 2 == 0)
//    {
//      cout<<"even\nodd\n";
//    }
//    else
//    cout<<"odd\nodd\n";
//    break;
// }

// return 0;
// }

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << numbers[i] << std::endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << std::endl;
            } else {
                cout << "odd" << std::endl;
            }
        }
    }
    return 0;
}