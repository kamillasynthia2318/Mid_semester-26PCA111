#include <iostream>
using namespace std;
class BankAccount
{
public:
    int accNo;
    string name;
    double balance;
    void open(int n)
    {
        accNo=n;
        cout<<"Holder name: ";
        cin>>name;
        balance=0;
    }
};
int main()
{
    BankAccount a[25];
    int count=0,choice,from,to,i;
    double amount;
    do
        {
        cout<<"\n=====Bank Manager=====\n";
        cout<<"1.Open \n";
        cout<<"2.Deposit \n";
        cout<<"3.WithDraw \n";
        cout<<"4.Transfer \n";
        cout<<"5.Balance \n";;
        cout<<"7.Exit \n";
        cout<<"6.Display All \n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            if(count<25)
            {
                a[count].open(1001 + count);
                cout<<"Account opened.Account Number: "<<a[count].accNo<<endl;
                count++;
            }
            break;
        case 2:
            cout<<"Account Number: ";
            cin>>from;
            cout<<"Amount: ";
            cin>>amount;
            for(i=0;i<count;i++)
                if(a[i].accNo==from)
                    {
                    a[i].balance+=amount;
                    cout<<fixed<<setprecision(2)<<"Deposited.New balance: "<<a[i].balance<<endl;
                    }
            break;
        case 3:
            cout<<"Account Number: ";
            cin>>from;
            cout<<"Amount: ";
            cin>>amount;
            for(i=0;i<count;i++)
                if(a[i].accNo==from)
                    {
                    if(amount>a[i].balance)
                        cout<<"Insufficient balance\n";
                    else
                    {
                        a[i].balance-=amount;
                        cout<<"Withdraw successful.\n";
                    }
                }
            break;
        case 4:
            cout<<"From: ";
            cin>>from;
            cout<<"To: ";
            cin>>to;
            cout<<"Amount: ";
            cin >> amount;
            if(from == to)
                cout<<"Cannot transfer to the same account\n";
            else
            {
                int x=-1,y=-1;
                for(i=0;i<count;i++)
                {
                    if(a[i].accNo==from)x=i;
                    if(a[i].accNo==to)y=i;
                }
                if(y==-1)
                cout<<"Invalid destination account\n";
                else if(amount>a[x].balance)
                cout<<"Insufficient balance\n";
                else {
                    a[x].balance-=amount;
                    a[y].balance+=amount;
                    cout<<"Transfer successful.\n";
                }
            }
            break;
        case 5:
            cout<<"Account Number: ";
            cin >> from;
            for(i=0;i<count;i++)
                if(a[i].accNo==from)
                    cout<<fixed<<setprecision(2)<<"Balance: "<<a[i].balance<<endl;
            break;
        case 6:
            for(i=0;i<count;i++)
                cout<<a[i].accNo<<"  "<<a[i].name<<"  "<<fixed<<setprecision(2)<<a[i].balance<< endl;
            break;
        case 7:
            cout<<"Exiting...\n";
            break;
        }
    }
    while(choice!=7);
    return 0;
}
