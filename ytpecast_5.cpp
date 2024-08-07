//take float as a input and print the fractional part of the real number
#include<iostream>
using namespace std;
int main(){
    float x; //9.8
    cin>>x;
    int y=(int)x;  //9
    if(y<0)
    y=y-1; // to find greatest integer
    float z=(float)y; //9
    x=x-z;
    cout<<x;




}