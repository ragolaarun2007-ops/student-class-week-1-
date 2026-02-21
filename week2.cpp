#include <iostream>
#include <string>
using namespace std;
int add (int a,int b){
return a+b;
}
float add (float a,float b){
    return a+b;
}
template <class T>
void swapvalues(T &x,T &y){
   T temp=x;
    x=y;
    y=temp;
}
int main () {
    int i1=10 ,i2=20;
    float f1=2.5,f2=4.5;
    string s1="hello",s2="world";
    cout <<"addition of integers:"<<add(i1,i2)<<endl;
    cout <<"addition of floats:"<<add(f1,f2)<<endl;
    cout <<"\n before swapping integers:";
    cout <<i1 <<""<<i2<<""<<endl;
    swapvalues(i1,i2);
    cout <<"\n after swapping integers:";
    cout <<i1 <<""<<i2<<""<<endl;
    cout <<"\n before swapping floats:";
    cout <<f1 <<""<<f2<<""<<endl;
    swapvalues(f1,f2);
    cout <<"\n after swapping floats:";
    cout <<f1 <<""<<f2<<""<<endl;
    cout <<"\n before swapping strings:";
    cout <<s1 <<""<<s2<<""<<endl;
    swapvalues(s1,s2);
    cout <<"\n after swapping strings:";
    cout <<s1 <<""<<s2<<""<<endl;
    return 0;
}
