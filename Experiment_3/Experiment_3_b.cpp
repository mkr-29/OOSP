#include<iostream>
using namespace std;

class Students{
    private:
        int roll,year,sem;
        string dept;
    public:
        Students(){
            roll=0;
            year=0;
            sem=0;
            dept="";
        }
        void Enter(){
            cout<<"Enter Student's Details::"<<endl;
            cout<<"Enter Student's Roll No:";cin>>roll;
            cout<<"Enter Student's Department:";cin>>dept;
            cout<<"Enter Student's Year:";cin>>year;
            cout<<"Enter Student's Semester:";cin>>sem;
        }
        void Promote_Year(){
            year++;
        }
        void Promote_Semester(){
            sem++;
            switch(sem){
                case 3:
                    Promote_Year();
                    break;
                case 5:
                    Promote_Year();
                    break;
                case 7:
                    Promote_Year();
                    break;
            }
        }
        void Change_Dept(){
            cout<<"Enter Dept(to change):";cin>>dept;
        }
        int get_roll(){
            int r;
            r=roll;
            return r;
        }
        void Display(){
            cout<<"Student's Roll No:"<<roll<<endl;
            cout<<"Student's Year:"<<year<<endl;
            cout<<"Student's Semester:"<<sem<<endl;
            cout<<"Student's Department:"<<dept<<endl;
        }
};

int main(){
    Students *s;
    int n,temp,choice;
    cout<<"Enter no of students:";cin>>n;
    s=new Students[n];
    for(int i=0; i<n; i++){
        s[i].Enter();
    }
    char option='y';
    while(option=='y'){
        cout<<"Enter Student's Roll No to proceed:";cin>>temp;
        for(int i=0; i<n; i++){
            if(temp==s[i].get_roll()){
                cout<<"1. Promoter Student(Semester):"<<endl;
                cout<<"2. Change Department"<<endl;
                cout<<"3. Details"<<endl;
                cout<<"Enter your choice:";cin>>choice;
                switch(choice){
                    case 1:
                        s[i].Promote_Semester();
                        break;
                    case 2:
                        s[i].Change_Dept();
                        break;
                    case 3:
                        s[i].Display();
                        break;
                    default:
                        cout<<"Entered Choice is incorrect !"<<endl;
                }
            }
        }
        cout<<"Enter 'y' to continue or 'n' to Exit:";cin>>option;
    }
}