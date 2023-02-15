#include<iostream>
using namespace std;
int getMin (int num[], int n){
    int min = 0;
    for(int i =0; i<n;i++){
        if(num[i]==min){
            min = num[i];
        }
    }
    return min;
}
int getMax (int num[], int n){
    int max = 100;
    for(int i =0; i<n;i++){
        if(num[i]==max){
            max = num[i];
        }
    }
    return max;
}
int main() {
    int size;
    cin >> size;
    
    int num[100];
    for(int i = 0;i<size;i++){
        cin >> num[i];
    }
    cout<< "The max Number is "<< getMax(num,size) << endl;
    cout<< "The min Number is "<< getMin(num,size) << endl;

}