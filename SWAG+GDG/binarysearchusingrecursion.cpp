#include<iostream>
using namespace std;
int binarysearch(int arr[], int n , int target){
  int s=0;
  int e=n;
  while (s<=e)
  {
    int mid=(s+e)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]>target){
      e=mid-1;
    }
      else {
        e=mid+1;
      }
    }
    return -1;
  }
 
int main(){
int n;
int target;
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}

cin>>target;
cout<<binarysearch(arr , n  , target);
return 0;
}
