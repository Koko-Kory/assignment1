#include <iostream>

using namespace std;

int main() {
  int NumTsp;
  cout << "number of teaspoons:";
  cin >> NumTsp;
  
  //measurments
  int tbsp = NumTsp / 3;
  cout << tbsp << " Tablespoon(s)" << endl;

  int cup = tbsp / 16;
  cout << cup << " Cup(s)" << endl;
  tbsp = tbsp
  int quart = cup / 4;
  cout << quart << " Quart(s)" << endl;
}