#include<iostream>
using namespace std;

void selectionsort(int n , int arr[]){

    for(int i=0 ; i<n-1 ; i++){
        int smallestIndex=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void printselectionsort(int n , int arr[]){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    
    cout<<endl;
}

int main(){

    int n=5;
    int arr[]={ 4, 1, 5, 2, 3};

    selectionsort(n , arr);
    printselectionsort(n , arr);

}
