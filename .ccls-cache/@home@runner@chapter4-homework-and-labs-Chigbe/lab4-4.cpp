//Lab4-4.cpp -displays the volume of a cylinder
//Created/revised by <Philip> on <current date>
#include <iostream>
using namespace std;
int main()
{
  //declare named constant and variables
  const double PI = 3.14159;
  double radius = 0.0;
  double height = 0.0;
  double volume = 0.0;
  // input data
  cout<< "Height: ";
  cin>> height;
  cout<< "Radius: ";
  cin>> radius;
  // calculate volume of cylinder
  volume = PI * radius * radius * height;
  // display volume
  cout<< "Volume: " << volume << endl;
  return 0;
} //end of main function
