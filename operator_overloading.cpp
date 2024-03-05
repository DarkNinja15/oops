#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int complex;
    public:
        Complex(int real,int complex){
            this->real=real;
            this->complex=complex;
        }
        void print(){
            cout<<this->real<<"+i"<<this->complex;
        }
        Complex operator+(Complex c2){
            int r=this->real+c2.real;
            int c=this->complex+c2.complex;
            Complex res(r,c);
            return res;
        }
};
int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3=c1+c2;
    c3.print();
}
