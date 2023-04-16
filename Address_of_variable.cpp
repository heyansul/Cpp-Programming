#include<iostream>
using namespace std;

int main(){

/*    int num = 5;

    cout<<num<<endl;

    cout<<"The address of the number " << &num <<endl;

    int *ptr = &num;
    cout<<"The Address of ptr "<<ptr<<endl;
    cout<<"The value of ptr "<<*ptr;

    cout<<"Size of the variable "<<sizeof(num)<<endl;
    cout<<"Size of the pointer "<<sizeof(ptr)<<endl;
   */
    int i = 5;
    int *p = &i;
    cout<<"Before the Number "<<i<<endl;
    cout<<"Before the Number "<<&i<<endl;
    (*p)++;
    cout<<"After the Number "<<i<<endl;
    cout<<"Before the Number "<<&i<<endl;
    //Copying the pointer
    int *q = p;
    cout<<"The value is "<<*p<<endl;
    p = p+1;
    cout<<"The value of P "<<p<<endl;


}

