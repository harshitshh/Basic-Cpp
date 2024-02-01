#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<("input three numbers to compare\n");
    cin>>a;
    cin>>b;
    cin>>c;
        if(a>b){
            if(a>c){
            cout<<a<<("is the largest number");}
            else{
            cout<<c<<("is the largest number");}    
            }
            
        else{
            if(b>c){
            cout<<b<<("is the largest number");}
            else{
            cout<<c<<("is the largest number");}
            }
}