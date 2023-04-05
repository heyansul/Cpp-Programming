#include<iostream>
using namespace std;
int power(){
    int a, b;
    cin>>a>>b;
    
    int ans = 1;
    for(int i= 1;i<=b;i++){
        ans = ans *a;
    }
    return ans;
}
int main(){
    /*int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"Answer "<<answer<< endl;
    int c,d;
    cin>>c>>d;
    int answer1 = power(c,d);
    cout<<"Answer "<<answer<< endl;
    int e,f;
    cin>>e>>f;
    int answer2 = power(e,f);
    cout<<"Answer "<<answer<< endl; */
    int answer = power();
    cout<<"Answer is "<<answer << endl;
    answer = power();
    cout<<"Answer is "<<answer << endl;
    answer = power();
    cout<<"Answer is "<<answer << endl;

    return 0;
}
