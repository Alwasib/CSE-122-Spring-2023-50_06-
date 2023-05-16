#include<iostream>
#include<string>
using namespace std;
class country
{
    public:
    string name;
    int student ;
    void show()
    {
        cout<<name<<endl;
        cout<<student<<endl;
    }
};
class Germany:public country
{
    public:
    string city;
       Germany()
       {
           name="Germany";
           student=543253246;
           city="berlin";
       }
       void show()
       {
           country::show();
           cout<<city<<endl;
       }

};
class Argentina:public country
{
    public:
    string city;
       Argentina()
       {
           name="Argentina";
           student=65758656;
           city="buenos Airs";
       }
       void show()
       {
           country::show();
           cout<<city<<endl;
       }

};
class Brasil:public country
{
    public:
    string city;
       Brasil()
       {
           name="Brasil";
           student=54378454;
           city="Brasila";
       }
       void show()
       {
           country::show();
           cout<<city<<endl;
       }

};
int main()
{
    country *p[3];
    int i;
    p[0]=new Germany();
    p[1]=new Argentina();
    p[2]=new Brasil();
    for(i=0;i<3;i++)
    {
        cout<<"country"<<i+1<<":"<<endl;
        p[i]->show();
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        delete p[i];
    }

}
