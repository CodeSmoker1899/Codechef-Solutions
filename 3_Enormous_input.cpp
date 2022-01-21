#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int count=0;
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        if(x%y==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}