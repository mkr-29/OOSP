#include<iostream>
using namespace std;

class Employee{
    private:
        int emp_no,dd,mm,yyyy,rank,salary;
    public:
        Employee(){
            emp_no=0;
            dd=0;
            mm=0;
            yyyy=0;
            rank=0;
            salary=0;
        }
        void Enter(){
            cout<<"Enter Employee No:";cin>>emp_no;
            cout<<"Enter Employee Date of Birth:"<<endl;
            cout<<"DD:";cin>>dd;
            cout<<"MM:";cin>>mm;
            cout<<"YYYY:";cin>>yyyy;
            cout<<"Enter Employee Rank:";cin>>rank;
            cout<<"Enter Employee Salary:";cin>>salary;
            
        }
};