// Print n’th Fibonacci number
#include<iostream>
using namespace std;

int main(){

    int n,last=0,prev=1,curr,i;
    cout<<"Enter Any Number: ";
    cin>>n;

    for(i=2;i<=n;i++){
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    cout<<n<<"th Fibonacci number is: "<<curr;
}

