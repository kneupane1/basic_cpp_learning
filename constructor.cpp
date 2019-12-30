// example: class constructor
#include <iostream>
#include <math.h>
using namespace std;

class four_vector {
  float x, y, z, mass;

public:
  four_vector(); // Overloading constructors
  four_vector(float, float, float, float);
  float magnitude() { return sqrt(abs(x * x + y * y + z * z - mass * mass)); }
};
four_vector::four_vector() { // Overloading constructors
  x = 1.0, y = 2.0, z = 0.5, mass = 0.981;
}
four_vector::four_vector(float x1, float y1, float z1, float mass1) {

  x = x1, y = y1, z = z1, mass = mass1;
}
int main() {
  four_vector p_mu;
  four_vector e_mu(2.0, 3.0, 2.0, 10.6);
  cout << "mag(p_mu) : " << p_mu.magnitude() << '\n';
  cout << "mag(e_mu) : " << e_mu.magnitude() << '\n';

  return 0;
}
