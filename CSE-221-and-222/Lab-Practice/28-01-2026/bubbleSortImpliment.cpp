#include<iostream>
using namespace std;

void printArray(int n, int arr[]) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortDescending(int n, int arr[]) {
    int passCount = 0; 
    for(int i=0; i<n-1; i++) {
        bool swapped = false; 
        passCount++;

        for(int j=0; j<n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true; 
            }
        }

        cout << "Pass " << passCount << ": ";
        printArray(n, arr);

        if(swapped == false) {
            break;
        }
    }
    cout << "\nTotal number of passes required: " << passCount << endl;
}

int main() {
    int n = 5;
    int arr[] = {12, 5, 8, 3, 10};

    bubbleSortDescending(n, arr);

    cout << "Sorted array in asked order: ";
    printArray(n, arr);

    return 0;
}
