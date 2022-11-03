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
            cout<<"Enter Employee Details::"<<endl;
            cout<<"Enter Employee No:";cin>>emp_no;
            cout<<"Enter Employee Date of Birth:"<<endl;
            cout<<"DD:";cin>>dd;
            cout<<"MM:";cin>>mm;
            cout<<"YYYY:";cin>>yyyy;
            cout<<"Enter Employee Rank:";cin>>rank;
            cout<<"Enter Employee Salary:";cin>>salary;
        }
        void Promotion(){
            rank++;
            salary=salary+salary*0.25;
        }
        void Display(){
            cout<<"Employee No:"<<emp_no<<endl;
            cout<<"Employee Date of Birth:"<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
            cout<<"Employee Rank:"<<rank<<endl;
            cout<<"Employee Salary:"<<salary<<endl;
        }
        int get_e_no(){
            int eno;
            eno=emp_no;
            return eno;
        }
};

int main(){
    Employee *e;
    int n,temp,choice;
    cout<<"Enter no of employees:";cin>>n;
    e=new Employee[n];
    for(int i=0; i<n; i++){
        e[i].Enter();
    }
    char option='y';
    while(option=='y'){
        cout<<"Enter Employee No to proceed:";cin>>temp;
        for(int i=0; i<n; i++){
            if(temp==e[i].get_e_no()){
                cout<<"1. Promote"<<endl;
                cout<<"2. Details"<<endl;
                cout<<"Enter your choice:";cin>>choice;
                switch(choice){
                    case 1:
                        e[i].Promotion();
                        break;
                    case 2:
                        e[i].Display();
                        break;
                    default:
                        cout<<"Enter choice is incorrect!"<<endl;
                }
            }
        }
        cout<<"Enter 'y' if you want to continue or 'n' to Exit:";cin>>option;
    }
}