//Q1- Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
#include <iostream>
using namespace std;
int main() {
  int no1,no2;
  cout<<"Enter Two Distinct Numbers: "<<endl;
  cin>>no1>>no2;

  if(no1>no2)
    cout<<no1<<" is Greater then "<<no2<<endl;
  else
    cout<<no2<<" is Greater then "<<no1<<endl;
  
}