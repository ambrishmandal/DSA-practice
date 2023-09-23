#include<iostream>
using namespace std;

string reverseWord(string str)
{
        // Your code goes here
        int len=str.length();
        for(int i=0;i<len/2;i++){
            int temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
        return str;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string s;
        cin >> s;
        cout << reverseWord(s) << endl;
    }
    return 0;
}