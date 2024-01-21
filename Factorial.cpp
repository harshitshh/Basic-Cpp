#include <iostream>
using namespace std;
int main(){
    int a,factorial=1;
    cout<<"Enter the number to find factorial.\n";
    cin>>a;
    for(int i=a; i>0; i--)
{
    factorial= factorial*i;
}
    cout<<"your desired factorial is \n"<<factorial;
   }

