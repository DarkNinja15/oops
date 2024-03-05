#include<iostream>
using namespace std;
class Student{
    private:
        int age;
        int roll;    
    public:
        static int totalStudents;
        Student(int age,int roll){
            this->age=age;
            this->roll=roll;
            totalStudents++;
        }
};
int Student::totalStudents=0;
int main(){
    Student s1(1,2);
    Student s2(1,4);
    cout<<Student::totalStudents<<endl;

}
