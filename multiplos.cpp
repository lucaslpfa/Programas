#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;

    cin >> A;
    cin >> B;

    //if (A % B == 0 || B % A == 0)
    //{
    //    cout << "Sao Multiplos";
    //}
    //else
    //{
    //    cout << "Nao sao Multiplos";
    //}
    if (A>B)
    {
        if (A%B==0)
        {
            cout << "Sao Multiplos" << endl;
        }
        else
        {
            cout << "Nao sao Multiplos" << endl;
        }
    }
    else if (A<B)
    {
        if (B%A==0)
        {
            cout << "Sao Multiplos" << endl;
        }
        else
        {
            cout << "Nao sao Multiplos" << endl;
        }
    }
    else if (A==B)
        {
            cout << "Sao Multiplos" << endl;
        }

    return 0;
}
