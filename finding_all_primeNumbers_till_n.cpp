//finding and printing prime numbers up to the specified value of 'n'
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<("Enter any value of n to print all the prime numbers till n ")<<endl;
    cin>>n;

    for(int i=2; i<=n ; i++){
        int check=0;
        for(int j=2; j<=i/2;j++){
            if(i%j==0){
                check++;
                break;    
            }
        }
        if(check==0){
                cout<<i<<endl;    
            }}}
