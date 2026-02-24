#include <iostream>
#include <list>
using namespace std;
int main () {
    list<string> l;
    l.push_back("c++");
    l.push_back("Java");
    l.push_back("Python");
    cout<<"Initial List:\n";
    for(list<string>::iterator it =l.begin();it!=l.end();it++)
    cout<<*it<<" ";
    l.push_front("DS");
    l.pop_back();
    cout <<"\nAfterinsertion and deletion:\n";
    for(list<string>::iterator it=l.begin();it!=l.end();it++)
    cout<<*it<<" ";
    return 0;
}