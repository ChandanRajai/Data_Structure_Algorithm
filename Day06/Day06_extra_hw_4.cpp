/*
    a a a a a
    b b b b b 
    c c c c c 
    d d d d d 
    e e e e e

*/
#include<iostream>
using namespace std;
int main(){

    int i,j;

    for(i=1;i<=5;i++){
        char name = 'a' + (i-1);
        for(j=1;j<=5;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}