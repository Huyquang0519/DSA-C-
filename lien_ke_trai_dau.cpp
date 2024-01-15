#include <iostream>
using namespace std;



int main(){
    
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i=0; i<n; i++){
        if((i>0 && (1ll*a[i]*a[i-1]<0)) || (i<n-1 && (1ll*a[i]*a[i+1]<0))){
            cout << a[i] <<" ";
        }
    }   
}

