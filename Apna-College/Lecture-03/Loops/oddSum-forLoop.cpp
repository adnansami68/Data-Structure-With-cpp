#include<iostream>
using namespace std;

int main(){
    int n;
    int oddSum=0;
    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=1; i<=n;i++){
        if(i%2!=0){
        oddSum +=i;
        }
    }
    cout<<"oddSum = "<<oddSum<<endl;
    return 0;
}
