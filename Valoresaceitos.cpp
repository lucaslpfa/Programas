#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && A%2==0)
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }
    
}
