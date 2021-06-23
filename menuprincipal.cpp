#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int iOpcao;
  double iValor1 = 0;
  double iValor2 = 0;

  cout << fixed << setprecision(2);

  cout << "Valor 1: ";
  cin >> iValor1;

  cout << "Valor 2: ";
  cin >> iValor2;

  cout << "          Menu Principal" << endl;
  cout << "-----------------------------------" << endl;

  cout << "1 Média entre os números digitados" << endl;
  cout << "2 Diferença do maior pelo menor" << endl;
  cout << "3 Produto entre os números digitados" << endl;
  cout << "4 Divisão do primeiro pelo segundo" << endl;

  cout << "-----------------------------------" << endl;

  cout << "Opção: ";
  cin >> iOpcao;

  switch(toupper(iOpcao))
  {
    case 1:
    {
      cout << "Média = " << (iValor1 + iValor2) / 2 << endl;
      break;
    }
    case 2:
    {
      if (iValor1 > iValor2)
      {
        cout << "Diferença = " << (iValor1 - iValor2) << endl;
      }
      else
      {
        cout << "Diferença = " << (iValor2 - iValor1) << endl;
      }
      break;
    }
    case 3:
    {
      cout << "Produto = " << (iValor1 * iValor2) << endl;
      break;
    }
    case 4:
    {
      if (iValor2 != 0)
      {
        cout << "Divisão = " << (iValor1 / iValor2) << endl;
      }
      else
      {
        cout << "Divisão por Zero!" << endl;
      }
      break;
    }
    default:
      cout << "Opção inválida!" << endl;
  }
}