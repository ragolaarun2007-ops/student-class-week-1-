#include <iostream>
#include <map>
using namespace std;
int main () {
    map<string,string>students;
    students["25881A05EX"]="Ragola Arun";
    students["25881A05FA"]="Baddhu Nayak";
    students["25881A05EW"]="Ankith yadav suraj";
    students["25881A05EU"]="Anil";
    students["25881A05FC"]="Dhanush";
    cout << "Student Details:\n";
    for(auto &s:students) {
cout << "ID:"<<s.first<<"\nName:"<<s.second<<endl;
    }
    return 0;
}