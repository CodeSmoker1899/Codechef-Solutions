#include<iostream>
using namespace std;

int firDigit(int n){
    while(n>=10){
        n=n/10;
    }  // this loop divides the number untill it becomes less than 10, so we get the first digit.
    return n;
}

int lasDigit(int n){
    return (n%10);  // It will return the remainder remain after dividing the numbr by 10
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p;
        cin>>p;
        int sum=0;
        int first,last;
        first=firDigit(p);  //firDigit(p) is a fuction
        last=lasDigit(p);  //lasDigit(p) is a function
        sum=first+last;
        cout<<sum<<"\n";
    }
    return 0;
}
