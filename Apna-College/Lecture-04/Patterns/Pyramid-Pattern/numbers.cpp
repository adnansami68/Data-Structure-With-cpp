#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n ; i++){

        //Space : n-i-1
        
        for(int j=0 ; j<n-i-1 ; j++){
            cout<<" ";
        }

        //Num-1 : i+1

        for(int j=1; j<=i+1 ; j++){
            cout<<j ;
        }

        //Num-2 : i times

        for(int j=i; j>0 ; j--){
            cout<<j ;
        }
        cout<<endl;
    }

}
