//Q7-- Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;
int main(){

    int no;
    cout<<"Enter Any Number: ";
    cin>>no;

    cout<<"Divisble By 4 Number Between 1 to "<<no<<endl;
    for(int i=1;i<=no;i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}