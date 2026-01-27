#include<iostream>
using namespace std;

void insertionsort(int n , int arr[]){

    for(int i=1; i<n; i++){

        int currentValue= arr[i];
        int previousValue= i-1;

        while(previousValue>=0 && arr[previousValue]>currentValue){
            arr[previousValue + 1]= arr[previousValue];

            previousValue --;
        }

        arr[previousValue + 1]=currentValue;

    }

}

void printinsertionsort(int n , int arr[]){
    for(int i=0; i<n ; i++){
          cout<<arr[i]<< " ";
    }
    
    cout<<endl;
}

int main(){
    int n=5;
    int arr[]={4, 1, 5, 2, 3};

    insertionsort(n , arr);
    printinsertionsort(n , arr);
    return 0;

}
