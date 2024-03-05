#include<iostream>
using namespace std;
class Student{
    public:
        char *name;
        Student(char* name){
            // shallow copy
            this->name=name;
        }
};
int main(){
    char name[5]="abcd";
    Student s1(name);
    cout<<s1.name<<endl;
    name[3]='e';
    Student s2(name);
    cout<<s1.name<<" "<<s2.name<<endl;
}