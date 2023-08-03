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
    

    // sắp xếp lại mảng
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n;j++){
            if(a[i] > a[j]){
                r = a[i];
                a[i] = a[j];
                a[j] = r;
            }
        }
    }

    int b[a[n-1]][2];
    
    // biến count để đếm số lần xuất hiện
    // biến k để lưu vị trí của giá trị a[i] và count
    int count, k;
    k = 0;
    
    /*
    dãy: 2 2 4 4 5 6 6
    i = 0, a[0] = 2, count = 2 --> bước nhảy = 0 + 2
    i = 2 , a[2] = 4, count = 2 --> bước nhảy = 2 + 2
    i = 4, a[4] = 5, count = 1 --> bước nhảy = 4 + 1
    i = 5, a[5] = 5, count = 2 --> bước nhảy = 5 + 2 --> thoát khỏi vòng lặp

    b có dạng: 
        0 1 2 3 
    0   2 2 1 2
    1   2 4 5 6 
    */
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