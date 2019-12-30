// example about structures
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct particles_t {
  float mass;
  string spin;
  int charge;
  int lepton_no;
  int baryon_no;
  int strangeness;
} electron, proton, pion, neutron, kaon, sigma, delta;

struct student_t {
  string major;
  string gender;
  int roll_no;
  particles_t fevorite_particle;
} ram, shyam, gita, sita;
void printparticles(particles_t properties);
void printparticles_pointer(particles_t *properties);

int main() {

  string mystr;

  particles_t aparticle;
  particles_t *pparticle;
  pparticle = &aparticle;
  particles_t pim;
  particles_t *ppim; // pointer pim
  ppim = &pim;
  std::cout << "electron : " << '\n';
  electron.mass = 0.511;
  electron.spin = "1/2";
  electron.charge = -1;
  electron.lepton_no = 1;
  electron.baryon_no = 0;
  electron.strangeness = 0;
  printparticles(electron);
  std::cout << "proton : " << '\n';
  proton.mass = 938;
  proton.spin = "1/2";
  proton.charge = +1;
  proton.lepton_no = 0;
  proton.baryon_no = 1;
  proton.strangeness = 0;
  printparticles(proton);

  cout << "Enter mass: ";
  std::cin >> pparticle->mass;
  std::cout << "you have entered mass =  " << pparticle->mass << '\n';
  std::cout << "negative pion : " << '\n';
  (*ppim).mass = 139;
  // ppim->mass = 139;
  ppim->spin = "0";
  ppim->charge = -1;
  ppim->lepton_no = 0;
  ppim->baryon_no = 0;
  ppim->strangeness = 0;
  printparticles_pointer(ppim);

  ram.fevorite_particle.mass = 139;
  std::cout << "ram's fevourite particle's mass = "
            << ram.fevorite_particle.mass << '\n';
  return 0;
}
void printparticles(particles_t properties) {
  std::cout << "mass : " << properties.mass << '\n';
  std::cout << "spin : " << properties.spin << '\n';
  std::cout << "charge : " << properties.charge << '\n';
  std::cout << "lepton_no : " << properties.lepton_no << '\n';
  std::cout << "baryon_no: " << properties.baryon_no << '\n';
}
void printparticles_pointer(particles_t *properties) {
  std::cout << "mass : " << properties->mass << '\n';
  std::cout << "spin : " << properties->spin << '\n';
  std::cout << "charge : " << properties->charge << '\n';
  std::cout << "lepton_no : " << properties->lepton_no << '\n';
  std::cout << "baryon_no: " << properties->baryon_no << '\n';
}
