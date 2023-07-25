#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    
    cin >> m;
    int b[m];

    for(int i = 0; i<m; i++){
        cin >> b[i];
    }

    int i=0 , j = 0, s = 0;
    int c[m+n];
    while (i < n && j < m)
    {
        if(a[i] < b[j]){
            c[s] = a[i];
            i++;
            s++; 
        }
        else{
            c[s] = b[j];
            j++;
            s++;
        }
    }

    while (i<n)
    {
        c[s] = a[i];
        i++;
        s++;
    }
    
    while (j < m)
    {
        c[s] = b[j];
        j++;
        s++;
    }

    for(int i = 0; i<m+n; i++){
        cout << c[i] << ' ';
    }
}