#include <iostream>

using namespace std;

int main() {
  int NumTsp;
  cout << "number of teaspoons:";
  cin >> NumTsp;
  
  //measurments
  int tbsp = NumTsp / 3;


  int cup = tbsp / 16;
  
  tbsp = NumTsp % 16;
  cout << tbsp << " Tablespoon(s)" << endl;
  cout << cup << " Cup(s)" << endl;
  //int quart = cup / 4;
  //cout << quart << " Quart(s)" << endl;
}