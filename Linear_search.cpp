#include<iostream>
using namespace std;
bool Search(int arr[],int size, int key){
    for(int i = 0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]= {2,3,4,5,6,7,8,9,-2,-1};
    int key;
    cout<< "Enter the key yoy want to search"<< endl;
    cin>>key;
    bool found = Search(arr,10,key);
    if (found){
        cout<<"Key is Present "<< endl;
    }else{
        cout<<"Key is Absent"<< endl;
    }

}