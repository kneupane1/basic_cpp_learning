// classes example
#include <iostream>
#include <math.h>
using namespace std;

class four_vector {
  float x, y, z, mass;

public:
  void set_values(float, float, float, float);
  float magnitude() { return sqrt(abs(x * x + y * y + z * z - mass * mass)); }
};

void four_vector::set_values(float x1, float y1, float z1, float mass1) {
  x = x1;
  y = y1;
  z = z1;
  mass = mass1;
}

int main() {
  four_vector x_mu;
  four_vector y_mu;
  four_vector *p_mu;
  p_mu = &y_mu;
  four_vector z_mu;
  x_mu.set_values(2.0, 3.0, 2.0, 10.6);

  (*p_mu).set_values(0.0, 0.0, 0.0, 0.98);

  cout << "mag(x_mu) : " << x_mu.magnitude() << '\n';
  cout << "mag(y_mu) : " << p_mu->magnitude() << '\n';

  return 0;
}
