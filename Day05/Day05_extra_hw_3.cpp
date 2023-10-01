// Factorial of n number 
#include<iostream>
using namespace std;
int main(){

    
    int i,n,fact=1;

    cout<<"Enter no for Factorial: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
	    fact=fact*i;
    }
    cout<<"The Factorial of "<<n <<" is : "<<fact<<endl;
}