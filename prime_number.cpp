#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    bool isPrime = 1;
    for(int i=2;i<n;i++){
        if(n%2==0){
            // cout<<"Not a Prime"<<endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a Prime Number";
    }else{
        cout<<"This is a Prime Number";
    }
}
