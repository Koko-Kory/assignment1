#include <iostream>

using namespace std;

int main() {
  int NumTsp;
  cout << "number of teaspoons:";
  cin >> NumTsp;
  
  //measurments
  int tbsp = NumTsp / 3;
  int leftOverTsp = NumTsp % 3;

  int cup = tbsp / 16;
  int leftOverTbsp = tbsp % 16;

  int quart = cup / 4;
  int leftOverCup = cup % 4;

  
  cout << leftOverTsp << " teaspoon(s)" << endl;
  cout << leftOverTbsp << " Tablespoon(s)" << endl;
  cout << leftOverCup << " cup(s)" << endl;
  cout << quart << " quart(s)";
  

}