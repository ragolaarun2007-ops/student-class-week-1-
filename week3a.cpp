#include <iostream>
#include <vector>
using namespace std; 
int main ()
{
    vector<int> v; //declaration of vector
    int n,x,y,i;
    cout << "Enter no of elements:"<<endl;
    cin >> n;
    for (int i=0; i<n ;i++)
    {
    cout << "Enter element :" << i+1 <<endl;
    cin >> x;
    v.push_back(x); //inserts the elements into vector
    }
    cout <<" Enter the position :"<<endl;
    cin >> y;
    v.insert(v.begin()+y,10);
    cout <<"Vector elements are:" <<endl;
    for(auto it=v.begin(); it<v.end(); it++)   
    {
    cout << *it <<""<<endl;
    }
    v.erase(v.begin());
    cout<<"Vector elements are:"<<endl;
    for (auto x:v)
    {
        cout<<x<<" ";
    }
    return 1;
}