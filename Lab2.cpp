//============================================================================
// Name        : Lab2.cpp
// Author      : Justin Dejesus
// Description : minmax array
//============================================================================
#include<iostream>
using namespace std;
int main()

{
  int arr[5],min,max,i;
  cout<<"Enter 5 numbers for the array. ";
  for(i=0;i<5;i++)
  cin>>arr[i];

  min=arr[0];
  max=arr[0];

  for(i=0;i<5;i++)
  if(min<arr[i])
   min=arr[i];
  else if(max>arr[i])
   max=arr[i];

  cout<<"\n Min number "<<max;
  cout<<"\n Max number "<<min;

  return 0;

}
