#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i = 0;i<n-1;i++){
       for(int j = 0;j<n-i;j++){
          if(arr[j]>arr[j+1]){
           swap(arr[j],arr[j+1]);
          }
       }
       
    }
}
int main(){
    int n;
    cin>>n;
    int arr[5];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"The Sorting Array is "<<endl;
    selection(arr,n);
    //printArray(arr,n);
}