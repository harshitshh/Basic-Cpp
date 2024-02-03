#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Number of rows in pattern";
    cin>>a;
    for( int i=1;i<=a;i++){
        cout<< endl;
        for(int j=1; j<=i; j++){
            cout<< j;
        }
    }
return 0;
}