// Print number from 280 to 250 with the help of for loop.
#include<iostream>>
using namespace std;

int main(){

    int start,end;
    cout<<"Enter Start Number: ";
    cin>>start;
    cout<<"Enter End   Number: ";
    cin>>end;

    cout<<"The Number Between "<<start<<" to "<<end<<endl;

    for(start;start>=end;start--){
        cout<<start<<" ";
    }
    cout<<endl;
    return 0;
}
