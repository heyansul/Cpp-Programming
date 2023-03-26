#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int i =0;
    int answer = 0;
    while(n!=0){
        int bit = n&1;
        answer = (bit*pow(10))+answer;
        n=n>>1;
        //i = i+1;

    }
    cout<< "Answer in Bit is "<<answer<<endl;
}