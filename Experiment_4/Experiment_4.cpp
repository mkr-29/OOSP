#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;

class User{
    private:
        string name,pwd,access_rights;
    public:
        User(){
            name="";
            pwd="hello123";
            access_rights="ALL";
        }
        int check_len(string s){
            int i = 0;
            while (s[i])
                i++;
            return i;
        }
        void Enter(){
            cout<<"Enter User Details::"<<endl;
            cout<<"Enter User Name:";cin>>name;
            cout<<"Enter User Password:";cin>>pwd;
            while(check_len(pwd)<8){
                cout<<"Password should be of 8 or more digits!"<<endl;
                cout<<"Enter User Password:";cin>>pwd;
            }
            cout<<"Enter User Access Rights:";cin>>access_rights;
            while(access_rights!="X" && access_rights!="R" && access_rights!="W" && access_rights!="ALL"){
                cout<<"User Access Rights can only be 'X','R','W' or 'ALL'!"<<endl;
                cout<<"Enter User Access Rights:";cin>>access_rights;
            }
        }
        void Change_Pwd(){
            string temp,temp1,temp2;
            cout<<"Enter Old Password:";cin>>temp;
            if(temp==pwd){
                cout<<"Enter New Password:";cin>>temp1;
                while(check_len(temp1)<8){
                    cout<<"Password should be of 8 or more digits!"<<endl;
                    cout<<"Enter New Password:";cin>>temp1;
                }
                cout<<"Confirm New Password:";cin>>temp2;
                if(temp1==temp2){
                    pwd=temp1;
                    cout<<"The Password has been successfully changed!"<<endl;
                }
                else{
                    cout<<"New Password Doesn't Match!"<<endl;
                }
            }
            else{
                cout<<"Incorrect Password!"<<endl;
            }
        }
        void Change_AccessR(){
            string temp;
            int temp1;
            cout<<"Enter Password to Proceed:";cin>>temp;
            if(temp==pwd){
                cout<<"Change Access Rights::"<<endl;
                cout<<"1. X"<<endl;
                cout<<"2. R"<<endl;
                cout<<"3. W"<<endl;
                cout<<"4. ALL"<<endl;
                cout<<"Enter Choice:";cin>>temp1;
                while(temp1<1 || temp1>4){
                    switch(temp1){
                        case 1:
                            access_rights="X";
                            break;
                        case 2:
                            access_rights="R";
                            break;
                        case 3:
                            access_rights="W";
                            break;
                        case 4:
                            access_rights="ALL";
                            break;
                        default:
                            cout<<"Entered Choice is incorrect!"<<endl;
                    }
                }
            }
        }
        string get_uname(){
            string temp;
            temp=name;
            return name;
        }
        void Display(){
            cout<<"User Name:"<<name<<endl;
            cout<<"User Access Rights:"<<access_rights<<endl;
        }
};

int main(){
    User *u;
    char option='y';
    string temp;
    int n,choice;
    cout<<"Enter no of Users:";cin>>n;
    u=new User[n];
    for(int i=0; i<n; i++){
        u[i].Enter();
    }
    while(option=='y'){
        cout<<"Enter User Name to Continue:";cin>>temp;
        for(int i=0; i<n; i++){
            if(temp==u[i].get_uname()){
                cout<<"1. Change Password"<<endl;
                cout<<"2. Change Access Rights"<<endl;
                cout<<"3. Details"<<endl;
                cout<<"Enter Choice:";cin>>choice;
                switch(choice){
                    case 1:
                        u[i].Change_Pwd();
                        break;
                    case 2:
                        u[i].Change_AccessR();
                        break;
                    case 3:
                        u[i].Display();
                        break;
                    default:
                        cout<<"Entered Chocie is incorrect!"<<endl;
                }
            }
            else{
                cout<<"User not found!"<<endl;
            }
        }
        cout<<"Enter 'y' to continue or 'n' to Exit:";cin>>option;
    }
}