#include <iostream>

using namespace std;

int main()
{
    string A;
    string B;
    string C;

    cin >> A;
    cin >> B;
    cin >> C;

    if (A=="vertebrado" && B=="ave" && C=="carnivoro")
    {
        cout << "aguia" << endl;
    }
    else if (A=="vertebrado" && B=="ave" && C=="onivoro")
    {
        cout << "pomba" << endl;
    }
    else if (A=="vertebrado" && B=="mamifero" && C=="onivoro")
    {
        cout << "homem" << endl;
    }
    else if (A=="vertebrado" && B=="mamifero" && C=="herbivoro")
    {
        cout << "vaca" << endl;
    }
    else if (A=="invertebrado" && B=="inseto" && C=="hematofago")
    {
        cout << "pulga" << endl;
    }
    else if (A=="invertebrado" && B=="inseto" && C=="herbivoro")
    {
        cout << "lagarta" << endl;
    }
    else if (A=="invertebrado" && B=="anelideo" && C=="hematofago")
    {
        cout << "sanguessuga" << endl;
    }
    else if (A=="invertebrado" && B=="anelideo" && C=="onivoro")
    {
        cout << "minhoca" << endl;
    }
    return 0;
}
