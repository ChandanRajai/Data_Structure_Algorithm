// Print Table of given no
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number for Print Table: ";
    cin>>n;
    cout<<endl<<"The Table of "<<n<<" is--"<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
    cout<<endl;
}