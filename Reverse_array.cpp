#include<iostream>
using namespace std;
int Reverse (int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[],int size ){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={3,4,7,8,9};
    
    Reverse(arr,6);
    Reverse(brr,5); 
    
    printArray(arr,6);
    printArray(brr,5);
}