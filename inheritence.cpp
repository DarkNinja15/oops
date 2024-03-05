#include<iostream>
using namespace std;
class Vehicle{
    public:
        Vehicle(int x){
            cout<<"Vehicle "<<x<<" created"<<endl;
        }
        Vehicle(){
            cout<<"Vehicle called"<<endl;
        }
};
// adding virtual keyword remove ambiguity
class Car:virtual public Vehicle{
    public:
        Car():Vehicle(1){
            cout<<"Car created"<<endl;
        }
};
class Truck:virtual public Vehicle{
    public:
        Truck():Vehicle(2){
            cout<<"Truck Created"<<endl;
        }
};
class Bus:public Car,public Truck{
    public:
        Bus(){
            cout<<"Bus Created"<<endl;
        }
};

int main(){
    Car c;
}