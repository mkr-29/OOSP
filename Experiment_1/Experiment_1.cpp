#include<iostream>
using namespace std;

class Complex{
    private:
        double r1,r2,i1,i2;
    public:
        void Enter(){
            cout<<"Enter the Real part of first number:";cin>>r1;
            cout<<"Enter the Non Real part of first number:";cin>>i1;
            cout<<"Enter the Real part of second number:";cin>>r2;
            cout<<"Enter the Non Real part of second number:";cin>>i2;
        }
        void Addition(){
            if(i1+i2>0){
                cout<<"Addition: "<<r1+r2<<"+"<<i1+i2<<"i"<<endl;
            }
            else if(i1+i2==0){
                cout<<"Addition: "<<r1+r2<<endl;
            }
            else{
                cout<<"Addition: "<<r1+r2<<i1+i2<<"i"<<endl;
            }
        }
        void Subtraction(){
            if(i1-i2>0){
                cout<<"Subtraction: "<<r1-r2<<"+"<<i1-i2<<"i"<<endl;
            }
            else if(i1-i2==0){
                cout<<"Subtraction: "<<r1-r2<<endl;
            }
            else{
                cout<<"Subtraction: "<<r1-r2<<i1-i2<<"i"<<endl;
            }
        }
        void Display(){
            if(i1>0){
                cout<<"First Number: "<<r1<<"+"<<i1<<"i"<<endl;
            }
            else if(i1==0){
                cout<<"First Number: "<<r1<<endl;
            }
            else{
                cout<<"First Number: "<<r1<<i1<<"i"<<endl;
            }
            if(i2>0){
                cout<<"Second Number: "<<r2<<"+"<<i2<<"i"<<endl;
            }
            else if(i2==0){
                cout<<"Second Number: "<<r2<<endl;
            }
            else{
                cout<<"Second Number: "<<r2<<i2<<"i"<<endl;
            }
        }
};

int main(){
    Complex obj1;
    obj1.Enter();
    obj1.Addition();
    obj1.Subtraction();
    obj1.Display();
}