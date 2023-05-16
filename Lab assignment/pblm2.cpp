#include<iostream>
using namespace std;
class ManchesterUnited
{
private:
    int coach;
    int player;
public:
    void getData(int x, int y)
    {
        coach=x;
        player=y;
    }
    void operator++(int)
    {
        coach++;
        player++;
    }
    void show()
    {
        cout<<"coach:"<<coach<<endl;
        cout<<"player:"<<player<<endl;
    }
    bool operator<(const ManchesterUnited &z)
    const
    {
        return(coach+player)<(z.coach+z.player);
    }
};
int main()
{
    ManchesterUnited ronaldo;
    ManchesterUnited fernandes;
    cout<<"ronaldo values"<<endl;
    ronaldo.getData(4,5);
    ronaldo.show();
    cout<<"fernandes values"<<endl;
    fernandes.getData(5,6);
    fernandes.show();
    cout<<"ronaldo less than fernandes"<<endl;
    cout<<"Now increement ronaldo"<<endl;
    ronaldo++;
    ronaldo.show();
    fernandes.show();
    cout<<"After inreement ronaldo by one.... Ronaldo==fernandes"<<endl;


}
