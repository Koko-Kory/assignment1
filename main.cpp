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


  cout << leftOverTbsp << " Tablespoon(s)" << endl << leftOverTsp << " tsp" << endl;
  cout << cup << " cups" << endl << leftOverTbsp << " leftovertbsp" << endl;

}