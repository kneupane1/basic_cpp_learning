// my first pointer
#include <iostream>
using namespace std;

void increment_all(int *start, int *stop) {
  int *current = start;
  while (current != stop) {
    ++(*current); // increment value pointed
    cout << " increment_all's output : " << *current << '\n';
    ++current; // increment pointer
  }
}

void print_all(const int *start, const int *stop) {
  const int *current = start;
  while (current != stop) {
    cout << " print_all's output : " << *current << '\n';
    ++current; // increment pointer
  }
}
int main() {
  // int firstvalue, secondvalue;
  // int *mypointer; // declearation of pointer
  //
  // mypointer = &firstvalue;  // mypointer points to the address of firstvalue
  // *mypointer = 10;          // value pointed by mypointer = 10
  // mypointer = &secondvalue; // mypointer points to the address of secondvalue
  // // a pointer may point to different variables during its lifetime in a
  // // program,
  // *mypointer = 20; // value pointed by mypointer = 20
  // cout << "firstvalue is " << firstvalue << '\n';
  // cout << "secondvalue is " << secondvalue << '\n';
  //
  // int *p1, *p2;
  // firstvalue = 5, secondvalue = 15;
  //
  // p1 = &firstvalue;  // p1 = address of firstvalue
  // p2 = &secondvalue; // p2 = address of secondvalue
  // //*p1 = 10;          // value pointed to by p1 = 10
  // //*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  // // p1 = p2;           // p1 = p2 (value of pointer is copied)
  // //*p1 = 20;          // value pointed to by p1 = 20
  // cout << "firstvalue is " << firstvalue << " whose address is " << p1 <<
  // '\n'; cout << "secondvalue is " << secondvalue << '\n';
  //
  // // pointers and arrays
  // // Remember that if an array, its name can be used just like a pointer to
  // its
  // // first element.
  // int numbers[5];
  // int *p;
  //
  // p = numbers;
  // *p = 10;         // pointer p assign 10 as a first element of array numbers
  //                  // ie numbers[0]
  // p++;             // now second element of array
  // *p = 20;         // assinging value to second element of array
  // p = &numbers[2]; // p is address of numbers[2]
  // *p = 30;         // assign value to numbers[2]
  // p = numbers + 3; // pointer p is equal to address of numbers {which takes
  // it
  //                  // to address of first element of array},
  //                  // then + 3 takes it to the address of forth element
  // *p = 40;         // assigning value to numbers[3]
  // p = numbers;     // to the 1st element
  // *(p + 4) = 50;   // p+4 takes it to 4th element
  // for (int n = 0; n < 5; n++)
  //   cout << numbers[n] << ", ";
  //
  // int x;
  // int y = 10;
  // const int *p_1 = &y;
  // x = *p_1; // ok: reading p_1
  //           //  *p_1 = x; // error: modifying p_1, which is const-qualified
  // cout << " p_1 = " << *p_1 << " x = " << x << endl;

  int numbers[] = {10, 20, 30};
  increment_all(numbers, numbers + 3);
  print_all(numbers, numbers + 3);
  // dynamic pointer
  int i, n;
  int *p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p = new (nothrow) int[i];
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else {
    for (n = 0; n < i; n++) {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n = 0; n < i; n++)
      cout << p[n] << ", ";
    delete[] p;
  }

  return 0;
}
