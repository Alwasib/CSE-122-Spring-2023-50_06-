#include<iostream>
using namespace std;
class zimbabwe
{
public:
    int chatara1;
protected:
    int raza2;
private:
    int ervine3;
};
class pakistan:public zimbabwe
{
protected :
    int getchatara1()
    {
        chatara1=1;
        return chatara1;
    }
    int getraza2()
    {
        raza2=2;
        return raza2;
    }
};
int main()
{
    pakistan obj;
   cout<< obj.getchatara1()<<endl;
    cout<<obj.getraza2()<<endl;
}
