#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> passengers;
    int n;
    string name;
    cout<<"Enter number of passengers: ";
    cin>>n;
    for(int i=0; i<n; i++)
        {
        cout<<"Enter passenger name: ";
        cin>>name;
        passengers.push(name);
        }
    if(passengers.empty())
        {
        cout<<"\n Boarding passenger: "<<passengers.front()<<endl;
        passengers.pop();
        }
    else
        {
        cout<<"\n Queue is empty. No passenger to board.\n";
        }
    if(passengers.empty())
    {
        cout<<"No passengers remaining.\n";
    }
    else
        {
        cout<<"\n Remaining passengers:\n";
        while(passengers.empty())
        {
            cout<<passengers.front()<<endl;
            passengers.pop();
        }
    }
    return 0;
}
