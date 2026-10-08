#include <iostream>
using namespace std;
class character
{
public:
    string name;
    int health;
    character(string n, int h)
    {
        name = n;
        health = h;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<endl;
    }
};
int main()
{
    character character1("Eliza",95);
    character character2("Rose",80);
    character1.display();
    character2.display();
    return 0;
}
