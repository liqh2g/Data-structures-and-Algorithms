#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int r;
    int b[a[n-1]][2];
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n;j++){
            if(a[i] > a[j]){
                r = a[i];
                a[i] = a[j];
                a[j] = r;
            }
        }
    }
    int count, k;
    k = 0;
    for(int i = 0; i< n; i = count + i){
        count = 1;
        for(int j = i+1; j<n; j++){
            if(a[i] == a[j]){
                count ++;
            }
        }
        b[k][0] = count;
        b[k][1] = a[i];
        k++;
    }
    
    for(int i =0; i<k; i++){
        cout << b[k][1] << "-" << b[k][0] << "; ";
    }
    return 0;
}