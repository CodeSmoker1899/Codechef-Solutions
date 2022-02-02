#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int count=0;
        cin>>n;
        string str = to_string(n);
        //to_string converts the integer in string
        int len = str.length(); //It will gives the length of string
        for(int j=0;j<len;j++){
            if(str[j]=='4'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}