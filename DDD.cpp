#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int D = 0;
    string Local;
    
    cin>>D;
    
    if (D==61)
    {
        Local = "Brasilia";
    }
    
    else if (D==71)
    {
        Local = "Salvador";
    }
    
    else if (D==11)
    {
        Local = "Sao Paulo";
    }
    
    else if (D==21)
    {
        Local = "Rio de Janeiro";
    }
    
    else if (D==32)
    {
        Local = "Juiz de Fora";
    }
    
    else if (D==19)
    {
        Local = "Campinas";
    }
    
    else if (D==27)
    {
        Local = "Vitoria";
    }
    
    else if (D==31)
    {
        Local = "Belo Horizonte";
    }
    
    else
    {
        Local = "DDD nao cadastrado";
    }
    
    
    cout << Local << endl;
}