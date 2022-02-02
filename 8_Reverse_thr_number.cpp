#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,reverse_number=0;
        cin>>n;
        
        while(n!=0){
            int remainder = n%10;
            reverse_number = reverse_number*10 + remainder;
            n=n/10;
        }
        cout<<reverse_number<<endl;
    }
}