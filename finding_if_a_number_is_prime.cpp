// Here we will take any number as an input and check if that number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n,f=0;
    cout<<("Please enter any number to check if that number is prime or not");
    cin>>n;

    for(int i=2; i<n; i++){
       if(n%i==0){
           f++;
        }
        else{
            f=f;
        }}

    if (f==0){
            cout<< ("Input is a prime number");
        }
    else{
            cout<< ("Input is not a prime number");
        }
}

