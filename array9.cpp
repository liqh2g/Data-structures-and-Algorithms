/*
Cho dãy a gồm n số nguyên, và dãy b gồm m số nguyên, cả hai dãy đều được sắp xếp không giảm.
Hãy gộp hai dãy thành một dãy c, sao cho dãy c cũng là dãy không giảm. 
In dãy c ra màn hình, sau mỗi phần tử có đúng một dấy cách.
*/


#include <iostream>
using namespace std;


int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for(int i = 0; i<m; i++){
        cin >> b[i];
    }
    
    int c[m+n];
    
    int j = 0; 
    for(int i = 0; i<(m+n); i++){
        if(i < n){
            c[i] = a[i];
        }
        else
        {
            c[i] = b[j];
            j++;
        }
    }

    int r;
    for(int  i = 0; i<m+n;i++){
        for(int j = i + 1; j < m+n; j++){
            if(c[i] > c[j]){
                r = c[i];
                c[i] = c[j];
                c[j] = r;
            }
        }
    }
    for(int i = 0; i< m+n ; i++){
        cout << c[i] << " ";
    }
}