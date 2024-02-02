//this code is to implement a pattern which prints a triangular pattern 
#include <iostream>
using namespace std;
int main(){
    int a=0,n;
    cout<<("number of rows in pattern");
    cin>>n;
    while(a<n){
        for(int i=1;i<=(a+1);i++){
            cout<<("*");
    }
    cout<<endl;
    a++;
}}