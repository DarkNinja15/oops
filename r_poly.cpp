#include<iostream>
using namespace std;
class Vehicle{
    public:
        // adding virtual will make sure that if the vehicle object is pointed
        // to car then print of car will be executed else this print will execute
        // run time polymorphism
        virtual void print(){
            cout<<"This is a Vehicle"<<endl;
        }
};
class Car:public Vehicle{
    public:
        void print(){
            cout<<"This is a car"<<endl;
        }
};
int main(){
    Vehicle *v = new Vehicle;
    Car c;
    v=&c;
    v->print();
}