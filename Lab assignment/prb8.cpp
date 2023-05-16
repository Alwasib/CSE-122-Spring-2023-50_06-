#include<iostream>
using namespace std;
class ErictenHag
{
public:
    virtual void showDegea()=0;
};
class Varane:public ErictenHag
{
public:
    void showDegea()override
    {

        cout<<"saves goal"<<endl;
    }
};
class Maguire:public ErictenHag
{
public:
    void showDegea()override
    {
        cout<<"saves no goal"<<endl;
    }
};

int main()
{
    ErictenHag *player1;//=new Varane();
    ErictenHag *player2;//=new Maguire();
    player1=new Varane();
    player2=new Maguire();
    player1->showDegea();
    player2->showDegea();
    delete player1;
    delete player2;


}
