#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
        char *name;
        Student(char* name){
            // deep copy
            this->name=new char[strlen(name)+1];
            for(int i=0;i<=strlen(name);i++){
                this->name[i]=name[i];
            }
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