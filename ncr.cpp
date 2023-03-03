#include<iostream>
using namespace std;
int Factorial (int n){
    int fact=1;
    for (int i = 1;i<=n;i++){
        fact = fact *i;
    }
    return fact;
}
int ncr(int n,int r){
    int num = Factorial(n);
    int den = Factorial(r) * Factorial(n-r);
    int answer = num/den;
    return answer;

}
int main(){
     int a,b;
     cin>>a>>b;
     cout<<"The Factrorial of the number "<<ncr(a,b);
}