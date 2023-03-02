#include<iostream>
using namespace std;
int Search(int arr[], int size , int key){
    for(int i = 0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main() {
    int size;
    cin>>size;
    int arr[5];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cout<<"Enter the Key you want to search"<<endl;
    int key;
    cin>>key;
    int found = Search(arr,5,key);
    if(found){
            cout<<"Key is Present"<<endl;
        }else{
            cout<<"Key is Absent"<<endl;
        }

}