#include <bits/stdc++.h>
using namespace std;
class student{
    private:
     int rollNumber;
     string name;
     float marks;
     public:
     student(){                            //constructor
        rollNumber=0;
        name="";
        marks=0.00;
 }
 void input(){                             //function to input details
   cout<<"Enter Roll Number: ";
   cin>>rollNumber;
   cin.ignore();
   cout<<"Enter Name";
   getline(cin,name);
   cout<<"Enter marks:";
   cin>>marks;
 }
 void display(){                           //function to display details
   cout<<rollNumber<<"\t"<<name<<"\t"<<marks<<endl;
 }
 ~student(){                               //Destructor
   cout<<"Student object with roll number "<<rollNumber<<"is destroyed";
 }
};
int main(){
   int n;
   cout<<"Enter number of students: ";
   cin>>n;
   student *students=new student[n];       //Dynamic Allocation of student objects
   for(int i=0;i<n;i++){                   //Input Details
    cout<<"\nEnter details of student "<<i+1<<endl;
    students[i].input();
   }
   cout<<"\nRollNo\tName\tMarks\n";        //Output details
   for(int i=0;i<n;i++){
      students[i].display();
   }
    delete[]students;                      //Release allocated memory
    return 0;                   
}