#include<iostream>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    
        //prefix sum and suffix sum 
        long long sum = 0;
        long long left = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        for(int i=0;i<n;i++){
            sum -= a[i];
            if(sum == left){
                return i+1;
            }
            left += a[i];
        }
        return -1;
        
}
int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
         cin >> a[i];
        }
        cout << equilibriumPoint(a,n);
    }
    return 0;
}