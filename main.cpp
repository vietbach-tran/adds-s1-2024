#include "Truckloads.h"
#include "Reverser.h"
#include "EfficientTruckloads.h"
#include <iostream>

int main()
{
  Truckloads t;
  Reverser r;
  EfficientTruckloads e;
  // std::cout << t.numTrucks(1024, 5) << std::endl;
  std::cout << r.reverseDigit(12345) << std::endl;
  std::cout << r.reverseString("abcde") << std::endl;
  std::cout << e.numTrucks(1024, 5) << std::endl;
}