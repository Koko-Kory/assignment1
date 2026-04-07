#include <iostream>

using namespace std;

int main() {
  int NumTsp;
  cout << "number of teaspoons:";
  cin >> NumTsp;
  
  //measurments
  int tbsp = NumTsp / 3;


  int cup = tbsp / 16;
  
  int leftOverTsp = NumTsp % 16;

  cout << tbsp << " Tablespoon(s)" << endl;
  cout << cup << " Cup(s)" << endl;
  cout << leftOverTsp << "leftovertsp"
  //int quart = cup / 4;
  //cout << quart << " Quart(s)" << endl;
}