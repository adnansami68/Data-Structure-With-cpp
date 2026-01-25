#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"Enter a Number :";
    cin>>n;

        if(n>0){
            cout<<"Positive Number"<<endl;
        }else if (n<0){
            cout<<"Negative Number"<<endl;
        }else{
            cout<<"Zero"<<endl;
        }
        if(n%2==0){
            cout<<"Even Number"<<endl;
        }else{
            cout<<"Odd Number"<<endl;
        }
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"Total Digits:"<<count<<endl;
    return 0;

}
