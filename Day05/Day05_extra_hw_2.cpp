// Sum of n natural number
#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
	    sum = sum+i;
    }
    cout<<"The Sum of first "<<n <<" Number is: "<<sum<<endl;
}