// Print Sum of square of first n natural number

#include<iostream>
using namespace std;

int main(){

    int num,pow,i,sum=0;

    cout<<"Enter Any Number: ";
    cin>>num;
    cout<<"Enter Power : ";
    cin>>pow;

    
  
    for(i=1;i<=num;i++){
        sum = sum + (i*i);
    }

    cout<<"Sum of square of first "<<num<<" natural number is-- "<<sum<<endl;
}