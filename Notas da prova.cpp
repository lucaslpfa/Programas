#include <iostream>
 
using namespace std;
 
int main() 
{
    int N = 0;
    string Nletra;
    
    cin>>N;
    
    if(N==0)
    {
        Nletra = "E";
    }
    else if(N>=1 && N<=35)
    {
        Nletra = "D";
    }
    else if(N>=36 && N<=60)
    {
        Nletra = "C";
    }
    else if(N>=61 && N<=85)
    {
        Nletra = "B";
    }
    else if(N>=86 && N<=100)
    {
        Nletra = "A";
    }

 cout << Nletra << endl;
 
 
}