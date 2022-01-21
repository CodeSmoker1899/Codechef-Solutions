#include<iostream>
#include<iomanip> 
//#include<iomanip> is used to used fixed and setprecision
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;

    if((x%5==0) && (y>=(x+0.5))){
        y -= (x+0.5);
    }
    cout<<fixed<<setprecision(2)<<y; //it is used to show two numbers after point.
    return 0;
}