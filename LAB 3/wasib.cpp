#include<iostream>
#include<string>
using namespace std;
int main()
{
      int i,n;
      string name;
      cout << "please enter your input number ";
      cin >> n;
      for(i=1;i<=n;i++){
        cin >> name;
        int s= name.length();
        if(s>10){
            cout << name[0]<<s-2<<name[s-1]<<endl;
        }
        else {
            cout << name;
        }
      }
      return 0;
}

