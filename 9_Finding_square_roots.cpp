#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        int result=sqrt(a);
        cout<<round(result)<<endl;
    }
}