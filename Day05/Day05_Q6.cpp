// Print Sum of cube of first n natural number

#include<iostream>
using namespace std;

int main(){

    int num,pow,i,sum=0;

    cout<<"Enter Any Number: ";
    cin>>num;
    

    
  
    for(i=1;i<=num;i++){
        sum = sum + (i*i*i);
    }

    cout<<"Sum of cube of first "<<num<<" natural number is-- "<<sum<<endl;
}