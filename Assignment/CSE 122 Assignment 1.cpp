
#include<iostream>
#include<utility>
using namespace std;
class Animal
{
protected:
    int age;
    bool alive;
    long id;
    pair<double,double>location;
public:
    Animal()
    {
        age=0;
        alive=true;
        id=122;
        location=(make_pair(0.0,0.0));
    }



    Animal(int m,double p,double q )
    {
        age=0;
        alive=true;
        id=122;
        location=(make_pair(p,q));
    }
    virtual void move(double p,double q)
    {
        location.first=p;
        location.second=q;
    }
   virtual void eat()
   {
       cout<<"Animal is Eating"<<endl;
   }
   virtual void sleep()
   {
       cout<<"Animal is Sleeping"<<endl;
   }
   void setalive(bool value)
   {
       alive =true;
   }
   virtual ~Animal()
   {

   }
   friend ostream& operator<<(ostream& os, const Animal &Z);

};
class Bird: public Animal
{
public:
    Bird():Animal()
    {}
    Bird(int m,double p, double q):Animal(m,p,q)
    {}
    void fly(double p,double q)
    {
        cout<<"Bird are flying in the sky to"<<p<<" , "<<q<<endl;
        move(p,q);
    }
    void eat()
    {
        cout<<"Bird is eating to much"<<endl;
    }
};
class Canine:public Animal
{
public:
    Canine():Animal(){}
    Canine(int m, double p, double q):Animal(m,p,q){}
    void run(double p, double q)
    {
        cout<<"Canine is running to"<<p<<" ,"<<q<<endl;
        move(p,q);
    }
    void eat()
    {
        cout<<"canine eating meet"<<endl;
    }
};
ostream& operator<<(ostream& os, const Animal& z)
{
    os<<"Animal"<<z.id<<"(age"<<z.age<<",alive:"<<boolalpha<<z.alive<<")is at location("<<z.location.first<<","<<z.location.second<<")";
    return os;
}
int main()
{
    Bird b(3,7.0,8.0);
    Canine c(2,3.0,4.0);
    cout<<b<<endl;
    cout<<c<<endl;
    b.fly(20.0,30.0);
    c.run(30.0,40.0);
    b.eat();
    c.eat();
    b.setalive(false);
    c.setalive(false);
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
