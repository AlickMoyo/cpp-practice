#include <iostream>
using namespace std;

int main () {
  int* pPointer = nullptr;
  int integervar = 5;
  pPointer = &integervar;
  cout << "integervar:" << integervar << endl;
  cout << "address of integervar:" << &integervar << endl;
  cout << "address of the pointer:" << pPointer << endl;
  return 0;
  
    
}
