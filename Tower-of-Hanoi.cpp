#include<iostream>
using namespace std;
void twrofhnoi(int n,char starting,char to, char ending)
{
    if(n==0)
    {
        return;
    }
    twrofhnoi(n-1,starting,ending,to);
    cout<<" Move disk "<<n<<" starting "<<starting<<" ending "<<ending<<endl;
    twrofhnoi(n-1,ending,to,starting);
}
int main()
{
    int N;
    cin>>N;
    twrofhnoi(N,'A','B','C');
}
