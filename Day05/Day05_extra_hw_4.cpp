// Given Number is prime or not
#include<iostream>
using namespace std;

int main(){

    int i,n;
    cout<<"Enter number : ";
    cin>>n;

    if(n<2){
        cout<<n<<" is Not Prime Number"<<endl;
	    return 0;
    }
	else{
        for(i=2;i<n;i++)
	    {	
		    if(n%i==0){
		    cout<<n<<" is Not Prime Number"<<endl;
		    return 0;
		}
	}
	cout<<n<<" is Prime Number"<<endl;
    }
	
}