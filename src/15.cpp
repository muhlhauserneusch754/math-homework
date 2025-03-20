#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x = 5;
  int y = 10;
  double z = 2.5;
  
  // calculate the sum of x and y
  int sum = x + y;
  
  // calculate the product of x and y
  int product = x * y;
  
  // calculate the quotient of x and y
  double quotient = (double)x / y;
  
  // calculate the remainder of dividing x by y
  int remainder = x % y;
  
  // calculate the cube root of z
  double cubeRoot = cbrt(z);
  
  // print the results
  cout << "Sum: " << sum << endl;
  cout << "Product: " << product << endl;
  cout << "Quotient: " << quotient << endl;
  cout << "Remainder: " << remainder << endl;
  cout << "Cube Root: " << cubeRoot << endl;
  
  return 0;
}
