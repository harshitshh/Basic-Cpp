//Basic calculator to perform arithematic calculations
#include<iostream>
using namespace std;
int main(){
    int n,m,l;
    double a;
    cout<<"Welcome to Basic calculator \n Press 1 to add \n Press 2 to subtract \n Press 3 to multiply \n Press 4 to divide \n";
    cin>>n;
    cout<<"Enter the values to perform the funtion"<<endl;
    cin>>m;
    cin>>l;
    if(n==1){
        cout << m+l;
    }
     if(n==2){
        if(m>l){
            cout<<m-l;
        }
        else{
            cout<<l-m;
        }
     }
      if(n==3){
        cout<<m*l;
    }
    if(n==4){
        if(m>l){
            a= m/l;
            cout<<a;
        }
        else{
            a=l/m;
            cout<<a;
        }
        }}

