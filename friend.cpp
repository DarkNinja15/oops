#include<iostream>
using namespace std;
class Complex{
    private:
        int a;
    public:
        Complex(){
            a=2;
        }
    friend int getA();
    friend class Real;
};
class Real{
    public:
        Real(){
            Complex c;
            cout<<c.a<<endl;
        }
};
int getA(){
    Complex c;
    cout<<c.a<<endl;
}
int main(){
    getA();
    Real r;
}
