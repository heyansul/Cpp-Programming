#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size , int key ){
    int start = 0;
    int end = size-1;
    int mid = start+(end - start/2);
    int ans = 0;
    while(start<=end){
        if(arr[mid]==key){
        ans = mid;
        end = mid-1;
    }
        else if(key>arr[mid]){
         start = mid + 1;
    }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start+(end - start/2);
    }
   return ans; 
}
int lastOccurance(int arr[],int size , int key ){
    int start = 0;
    int end = size-1;
    int mid = start+(end - start/2);
    int ans = 0;
    while(start<=end){
        if(arr[mid]==key){
        ans = mid;
        start = mid+1;
    }
        else if(key>arr[mid]){
         start = mid + 1;
    }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start+(end - start/2);
    }
   return ans; 
}
int main(){
    int even[10] = {1,2,3,3,3,3,3,3,4,5};
    
    
    cout<<"The index of frist Occurence of 3 is "<<firstOccurance(even,10,3)<<endl;
    cout<<"The index of frist Occurence of 3 is "<<lastOccurance(even,10,3)<<endl;

}