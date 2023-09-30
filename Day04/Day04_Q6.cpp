//Q6-- Print all Odd numbers from 1 to n, take n as an input from the user.

#include<iostream>
using namespace std;
int main(){

    int no;
    cout<<"Enter Any Number: "<<endl;
    cin>>no;

    cout<<"Odd numbers Betweem 1 to "<<no<<endl;
    for(int i=1;i<=no;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}