#include<iostream>
using namespace std;
inline int getMax(int a ,int b ){
    return (a>b) ? a : b;
}
int main(){
     int a = 1;
     int b = 2;
     getMax(a,b);

     cout<<a<<" "<<b<<endl;
     a = a+1;
     b = b+2;
     getMax(a,b);
    cout<<a<<" "<<b<<endl;
}