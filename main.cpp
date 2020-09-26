#include <iostream>
#include <cmath> 
using namespace std;

int main() {
  double suma, perioada, procentDobanda;
  double sumaDobanda, sumaTotala;
  cout << "Introduceti suma imprumutata: ";
  cin >> suma;
  cout << "Introduceti perioada de returnare a sumei: ";
  cin >> perioada;
  cout << "Introduceti rata dobanzii anuale: ";
  cin >> procentDobanda;
  sumaDobanda = suma * procentDobanda /100 * perioada;
  sumaTotala = suma + sumaDobanda;
  cout << "Dobanda platita de " << procentDobanda << " % pe o perioada de " << perioada << " ani pentru o suma de " << suma << " este " << sumaDobanda << endl;
  cout << "Deci suma totala care se va plati in " << perioada << " ani este de " << sumaTotala << endl;
  cout << endl;
  return 0;  
}
//DOBANDA COMPUSA 