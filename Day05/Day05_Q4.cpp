// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. 
//  So print all the numbers from 220 to 730 which follow the AP

#include<iostream>
using namespace std;

int main(){

    int i=280,n=730;
    cout<<" Numbers from 220 to 730 "<<endl;

    for(i;i<=n;i=i+7){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}