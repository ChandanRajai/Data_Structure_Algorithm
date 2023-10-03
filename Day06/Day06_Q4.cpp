/*
    F G H I J 
    F G H I J 
    F G H I J 
    F G H I J 
    F G H I J 
*/
#include<iostream>
using namespace std;
int main(){

    int i,j;

    for(i=1;i<=5;i++){

        char name = 'F';
        for(j=1;j<=5;j++){
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }
}