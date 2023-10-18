//Personal project
#include <iostream>
using namespace std;

class Account{
    private:
        int pwd;
        long int balance=0;                
    public:
        string Acc_holder_name;
        int Acc_no;


        void set_pwd(int p){
            pwd = p;
        }

        bool check_pwd(int p){
            if(p == pwd){
                return true;
            }
            else{
                return false;
            }
        }

        void deposit(int amount){
            balance += amount;
        }

        void withdraw(int amount){
            if(amount <= balance){
                balance -= amount;
            }
        }

        void transfer(Account &other, int amount){
            if(amount <= balance){
                balance -= amount;
                other.balance += amount;
            }
            else{
                cout<<"insufficient balance";
            }
        }

        void display_balance(){
            cout<<balance<<endl;
        }
};

int main(){
    Account a1,a2;
    int pw;
    cin>>a1.Acc_holder_name>>a1.Acc_no>>pw;
    cin>>a2.Acc_holder_name>>a2.Acc_no;
    a1.set_pwd(pw);

    bool authorised= false;
    int pwd;
    cout<<"enter pwd ";
    cin>>pwd;
    if(a1.check_pwd(pwd)){ 
        
        authorised = true;
        cout<<"authorised";
    }
    else{
        cout<<"unauthorised";
    }
    while(authorised){
        int choice;
        cout<<"press 1 to check balance | 2 - deposit | 3 - widraw | 4 - transfer";
        cin>>choice;
        switch (choice){
            case 1:
                a1.display_balance();
                break;
            case 2:
                int amount;
                cin>>amount;
                a1.deposit(amount);
                break;
            case 3:
                cin>>amount;
                a1.withdraw(amount);
                break;
            case 4:
                int amt;
                cin>>amt;
                a1.transfer(a2,amt);
                break;
            default:
                return 0;
                break;
        }
    }
}
