#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the frist number ";
    cin>>a;
    int b;
    cout<<"Enter the second number ";
    cin>>b;
    char oper;
    cout<<"Enter the opration you want ";
    cin>>oper;
    switch(oper){
        case '+':cout<< "Addition of the Number is "<<(a+b)<<endl;
        break;
        case '-': cout<<"Subraction of the number is "<<(a-b)<<endl;
        break;
        case '*':cout<<"Multiplication of the number is "<<(a*b)<<endl;
        break;
        case '/':cout<<"Devison of the number is "<<(a/b)<<endl;
        break;
        case '%':cout<<"Modulo of the number is "<<(a%b)<<endl;
        break;
        default:
            cout<<"Invaild Character"<<endl;

    }
}
