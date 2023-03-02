#include<iostream>
using namespace std;
void Printarray (int a[],int size){
    cout<<"Printing the array "<<endl;
    for(int i = 0; i<=size;i++){
        cout<<a[i] ;
    }
    cout<<" Printing Done "<<endl;
}
int main(){
    int n = 14;
    int Third[14] = {2,3};
    Printarray(Third,14);
 
     n = 10;
    int Second[10]= {0};
    Printarray(Second,10);
    
}