#include <iostream>
#include <math.h>
using namespace std;
// xoay mang sang phai/trai k vi tri
// void turn_Left(int n, int a[], int k){
//     while(k){
//         int center = a[0];
//         for(int i=0; i<n-1; i++){
//             a[i] = a[i+1];
//         }
//         a[n-1] = center;
//         --k;
//     }
// }

void turn_Right(int n, int a[], int k){
    while(k){
        int center = a[n-1];
        for(int i=n-1; i>0; i--){
            a[i] = a[i-1];
        }
        a[0] = center;
        --k;
    }
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    turn_Right(n,a,k);
    for(int i=0; i<n; i++) cout << a[i] <<" ";
}