#include<iostream>
using namespace std;

class Bank_Account{
    private:
        string d_name;
        int d_amt,w_amt;
        string type_ac;
        int bal_amt;
    protected:
        int ac_no;
    public:
        void Enter(){
            cout<<"Enter Account Details::"<<endl;
            cout<<"Enter Account Holder Name:";cin>>d_name;
            cout<<"Enter Account Number:";cin>>ac_no;
            cout<<"Enter Account Type:";cin>>type_ac;
            cout<<"Enter Balance Amount:";cin>>bal_amt;
        }
        void Deposit(){
            cout<<"Enter the Amount to be Deposited:";cin>>d_amt;
            bal_amt=bal_amt+d_amt;
        }
        void Withdraw(){
            cout<<"Current Balance is:"<<bal_amt<<endl;
            cout<<"Enter the Amount to be Withdrawn:";cin>>w_amt;
            bal_amt=bal_amt-w_amt;
        }
        void Display(){
            cout<<"Account Holder Name:"<<d_name<<endl;
            cout<<"Balance:"<<bal_amt<<endl;
        }
        int get_ac(){
            int ac;
            ac=ac_no;
            return ac;
        }
};

int main(){
    Bank_Account *b1;
    int n,t_ac,choice;
    cout<<"Enter the number of account holders:";cin>>n;
    b1=new Bank_Account[n];
    for(int i=0; i<n; i++){
        b1[i].Enter();
    }
    char option='y';
    while(option=='y'){
        cout<<"Enter Account Number to Proceed:";cin>>t_ac;
        for(int i=0; i<n; i++){
            if(t_ac==b1[i].get_ac()){
                cout<<"1. Deposition"<<endl;
                cout<<"2. Withdrawl"<<endl;
                cout<<"3. Details"<<endl;
                cout<<"Enter Your Choice:";cin>>choice;
                switch(choice){
                    case 1:
                        b1[i].Deposit();
                        break;
                    case 2:
                        b1[i].Withdraw();
                        break;
                    case 3:
                        b1[i].Display();
                        break;
                    default:
                        cout<<"Entered Choice is Incorrect!"<<endl;
                }
            }
        }
        cout<<"Enter 'y' if you want to continue or 'n' to end:";cin>>option;
    }
}