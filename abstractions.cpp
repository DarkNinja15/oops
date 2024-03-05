#include<iostream>
using namespace std;
class Animal{
    public:
        Animal(){
            cout<<"Animal created"<<endl;
        }
        virtual void eat()=0;
};
class Cow:public Animal{
    public:
        Cow(){
            cout<<"Cow created"<<endl;
        }
        void eat(){
            cout<<"Cow eats grass"<<endl;
        }
};
int main(){
    Cow c;
    c.eat();
}