#include <iostream>
#include <cstring>
using namespace std;
int state[4][3];
int F(int SK,int TK);
int main()
{
    char P[80];
    char T[80];
    int N,S=0,K=0,I,INDEX;
    cout << "Enter string P: "<<endl;
    cin.getline(P, 80);
    cout << "Enter string T: "<<endl;
    cin.getline(T, 80);
    state[0][0] = 1;
    state[0][1] = 0;
    state[0][2] = 0;
    state[1][0] = 2;
    state[1][1] = 0;
    state[1][2] = 0;
    state[2][0] = 2;
    state[2][1] = 3;
    state[2][2] = 0;
    state[3][0] = -1;
    state[3][1] = 0;
    state[3][2] = 0;
    N = strlen(T);
    while (K < N && S != -1)
    {
        if (T[K] == 'a')
            I = 0;
        else if (T[K] == 'b')
            I = 1;
        else if (T[K] == 'x')
            I = 2;
        S=F(S,I);
        K=K+1;
    }
    if (S==-1)
        INDEX=K-strlen(P);
    else
        INDEX=-1;
    cout <<"P="<<P<<endl;
    cout <<"T="<<T<<endl;
    if(INDEX!=-1)
        cout<<"Index of P in T is "<<INDEX<<endl;
    else
        cout <<"P does not exist in T"<<endl;
    cin.get();
    return 0;
}
int F(int SK, int TK)
{
    return state[SK][TK];
}
