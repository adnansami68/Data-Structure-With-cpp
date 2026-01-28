#include<iostream>
using namespace std;

int main(){
    string t;
    cout << "enter a text" << endl;
    cin >> t;

    string p;
    cout << "enter a pattern" << endl;
    cin >> p;

    int count = 0;
    int m = t.length();
    int n = p.length();

    for(int k=0; k<m; k++){
        t[k] = toupper(t[k]);
    }
    for(int k=0; k<n; k++){
        p[k] = toupper(p[k]);
    }

    int max = m - n + 1;
    int ans = -1;

    for(int i=0; i<max; i++){
        bool flag = true;
        for(int j=0; j<n&&flag==true; j++){
            if(t[i+j]!=p[j]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            ans = i + 1;
            count++;
        }
    }
    cout << count << endl;
}
