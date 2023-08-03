/*
Nhập và một số nguyên dương n, 
tiếp theo là n số nguyên dương lần lượt là các phần tử của một dãy số,
hãy đếm tần số (số lần xuất hiện) của các số trong dãy 
và in nó ra màn hình dưới dạng sau: "a1 - t1; a2 - t2; ... an - tn; ", 
trong đó t1 là số lần xuất hiện của số a1, t2 là số lần xuất hiện của a2, ... a1, a2, .. an không trùng nhau và được sắp xếp tăng dần (xem ví dụ để rõ hơn).
*/

#include<iostream>

using namespace std;

int a[100001], b[100001];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int Max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > Max){
            Max = a[i];
        }
    }
    for (int i = 0; i <= Max; i++){
        b[i] = 0;
    }
    for (int i = 0; i < n; i++){
        b[a[i]] += 1;
    }
    for (int i = 0; i <= Max; i++){
        if (b[i] > 0){
            cout << i << " - " << b[i] << "; ";
        }
    }
    return 0;
}