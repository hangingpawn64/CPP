#include<iostream>
using namespace std;
int greatest(int,int,int,int);

int greatest(int a,int b,int c,int d)
{
    int g;
if (a>b)
{
    if (a>c)
    {
        if (a>d)
        {
           g=a;
            
        }
        else{
            g=d;
            
        }
    }
    else{
        if (c>d)
        {
           g=c;
            
        }
        else{
            g=d;
            
        }
    }
}
else {
    if (b>c)
    {
        if (b>d)
        {
           g=b;
            
        }
        else{
            g=d;
            
        }
    }
    else{
        if (c>d)
        {
            g=c;
            
        }
        else{
            g=d;
            
        }
    }
}
return g;
}

int main(){
    int a,b,c,d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<greatest(a,b,c,d);
    return 0;
}
