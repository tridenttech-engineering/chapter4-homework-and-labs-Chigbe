// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int small, medium, large, family;
  // Input
  cout << "Enter number of small pizzas sold: ";
  cin >> small;
  cout << "Enter number of medium pizzas sold: ";
  cin >> medium;
  cout << "Enter number of large pizzas sold: ";
  cin >> large;
  cout << "Enter number of family pizzas sold: ";
  cin >> family;
  // Processing
  int total = small + medium + large + family;
  double smallPercent = small / (double)total * 100; 
  double mediumPercent = medium / (double)total * 100;
  double largePercent = large / (double)total * 100;
  double familyPercent = family / (double)total * 100;
  // Output
  cout << "Total pizzas sold: " << total << endl;
  cout << "Small pizzas sold: " << smallPercent << "%" << endl;
    cout << "Medium pizzas sold: " << mediumPercent << "%" << endl;
    cout << "Large pizzas sold: " << largePercent << "%" << endl;
    cout << "Family pizzas sold: " << familyPercent << "%" << endl;
  
  return 0;
} // end of main function