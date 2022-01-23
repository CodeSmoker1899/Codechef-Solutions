#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count=0;
        while(n!=0){
            count=count+n%10;
            n=n/10;
        }
        cout<<count<<"\n";
    }
    return 0;
}