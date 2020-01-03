#include <iostream>
//#include <typeinfo>
#include <string.h>
using namespace std;
int main() {

  // type conversion
  auto i = 3.0 / 2; // with auto we can't use i{3.0/2} initialization
  std::cout << "type of i = " << typeid(i).name() << '\n';
  std::cout << "i = 3/2 =  " << i << '\n';

  i = static_cast<int>(3.2);
  i = static_cast<int>(2.9);
  i = -1;
  std::cout << "i = " << i << '\n';
  double d{2.7};

  std::cout << " d = " << d << '\n';

  i = static_cast<int>(d);
  d = i;

  unsigned int u(0);
  u = -2;

  bool flag{true};
  flag = false;
  flag = static_cast<bool>(7);
  std::cout << " flag = " << flag << '\n';

  // Strings
  // char isAString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char isNotAString[5] = {'H', 'e', 'l', 'l', 'o'};
  char isAString[6] = "Hello";
  char isAnotherString[] = "Array size is inferred";
  // using string class
  string myString = "Hello!";
  std::string myNewString = "Less typing";

  cout << isAString << endl;
  cout << isNotAString << endl;
  cout << isAnotherString << endl;
  std::cout << myString << '\n';
  std::cout << myNewString << '\n';

  // Structures
  struct coffeeBean {
    string name;
    string country;
    int strength;
  };

  coffeeBean myBean = {"Strata", "Colombia", 10};
  coffeeBean newBean;
  newBean.name = "Flora";
  newBean.country = "Mexico";
  newBean.strength = 9;
  cout << "Coffee bean " + myBean.name + " is from " + myBean.country
       << " it's strength is " << myBean.strength << endl;
  cout << "Coffee bean " + newBean.name + " is from " + newBean.country
       << " it's strength is " << newBean.strength << endl;

  // Unions
  union numericUnion {
    int intValue;
    long longValue;
    double doubleValue;
  };
  numericUnion myUnion;
  myUnion.intValue = 3;
  cout << myUnion.intValue << endl;
  myUnion.doubleValue = 4.5;
  cout << myUnion.doubleValue << endl;
  cout << myUnion.intValue;
  cout << endl;

  // enumeration
  enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
  //{0,1,2,3,4,5,6}
  Day payDay;
  payDay = Thursday;
  cout << " enum Thursday : " << payDay << endl;
  enum Month {
    Jan = 1,
    Feb,
    March,
    April,
    May,
    June,
    July,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
  };
  Month myMonth;
  myMonth = Nov;
  std::cout << "myMonth = " << myMonth << '\n';

  return 0;
}
