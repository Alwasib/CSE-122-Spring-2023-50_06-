
#include<iostream>
using namespace std;
class publication
{
public:
 string s;
 float p;
 void getData()
 {
 cout<<"Enter your book Title:"<<endl;
 cin>>s;
 cout<<"Enter your book Price:"<<endl;
 cin>>p;
 }
 void putData()
 {
 cout<<"Name of book is:"<<s<<endl;
 cout<<"Price of book is:"<<p<<endl;
 }
};
class book:public publication
{
public:
 int n;
 void getData()
 {
 cout<<"Enter your page count number:"<<endl;
 cin>>n;
 }
 void putData()
 {
 cout<<"Number of page count:"<<n<<endl;
 }
};
class tape: public publication
{
 public:
 float f;
 void getData()
 {
     publication::getData();
 cout<<"enter your playing time:"<<endl;
 cin>>f;
 }
 void putData()
 {
     publication::putData();
 cout<<"Playing time of tape is:"<<f<<endl;
 }
};
int main()
{
 book obj;
 obj.getData();
 tape obj1;
 obj1.getData();
 obj.putData();
 obj1.putData();
}
