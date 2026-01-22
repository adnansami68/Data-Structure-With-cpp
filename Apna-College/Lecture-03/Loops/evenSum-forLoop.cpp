#include<iostream>
using namespace std;

int main(){
    int n;
    int evenSum=0;

    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=0; i<=n;i++){
        if(i%2==0){
            evenSum +=i;
        }
    }
    cout<<"EvenSum = "<<evenSum<<endl;
    return 0;
}
