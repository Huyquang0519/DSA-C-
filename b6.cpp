#include <iostream>
#include <math.h>
using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại
// bao nhiêu cặp số A[i], A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K
// cho trước

int main(){
    int n,k,cnt=0; cin >> n;
    int a[n];
    int d[1001] = {0};
    for(int &x:a) {
        cin >> x;
        d[x]++;
    }
    cin >> k;
    for(int i=0; i<=k/2; i++){
        if(i!=(k-i)) cnt += d[i]*d[k-i];
        else cnt += (d[i]*(d[i]-1)/2);
    }
    cout << cnt;
}