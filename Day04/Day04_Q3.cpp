//Q3-- Take a number in input (ex n) and print the corresponding month to it. 
//       Ex: for n=1, print january, n=2, print feburary like this you need to give output.
//       It is given that n will be greater than 0 and less than 13

#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter Number To See Corresponding Month : "<<endl;
  cin>>n;

  if(n==1)
    cout<<"1--January "<<endl;
  else if (n==2)
    cout<<"2--February "<<endl;
  else if (n==3)
    cout<<"3--March "<<endl;
  else if (n==4)
    cout<<"4--April "<<endl;
  else if (n==5)
    cout<<"5--May "<<endl;
  else if (n==6)
    cout<<"6--June "<<endl;
  else if (n==7)
    cout<<"7--July "<<endl;
  else if (n==8)
    cout<<"8--August "<<endl;
  else if (n==9)
    cout<<"9--September "<<endl;
  else if (n==10)
    cout<<"10--October "<<endl;
  else if (n==11)
    cout<<"11--November "<<endl;
  else if (n==12)
    cout<<"12--December "<<endl;
  else
    cout<<" Please Enter Valid Month Number "<<endl;
  
}