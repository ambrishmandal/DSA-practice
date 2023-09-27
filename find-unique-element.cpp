#include<iostream>
using namespace std;

class solution{
    public:
    int findOnce(int arr[],int n){
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        return ans;
    }
};

int main(){
    int t;
    cout<<"Enter the value of test case: ";
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        solution obj;
        int res=obj.findOnce(arr,n);
        cout<<res<<endl;
    }
    return 0;
}