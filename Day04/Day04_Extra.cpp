#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number To See Corresponding Day: "<<endl;
    cin>>n;

    if(n==1)
        cout<<"1--Sunday"<<endl;
    else if(n==2)
        cout<<"2--Monday"<<endl;
    else if(n==3)
        cout<<"3--Tuesday"<<endl;
    else if(n==4)
        cout<<"4--Wednesday"<<endl;
    else if(n==5)
        cout<<"5--Thursday"<<endl;
    else if(n==6)
        cout<<"6--Friday"<<endl;
    else if(n==7)
        cout<<"7--Saturday"<<endl;
    else
        cout<<" Please Enter Valid Day Number"<<endl;
}