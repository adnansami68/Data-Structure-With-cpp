#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime=true;

    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=2; i<=n-1;i++){
        if(n%i==0){ //non-prime
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Non-Primme Number"<<endl;
    }

    return 0;
}
