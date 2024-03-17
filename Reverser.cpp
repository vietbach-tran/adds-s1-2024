#include "Reverser.h"
#include <cmath>
#include <string>

int numDigits(int n)
{
  if (n == 0)
    return 1;
  int c = 0;
  while (n > 0)
  {
    n /= 10;
    c++;
  }
  return c;
}

int Reverser::reverseDigit(int value)
{
  if (numDigits(value) == 1)
    return value;
  int firstDigit = value;
  while (int(firstDigit / 10) > 0)
  {
    firstDigit /= 10;
  }
  value = value % int(std::pow(10, numDigits(value) - 1));
  return reverseDigit(value) * 10 + firstDigit;
}

std::string Reverser::reverseString(std::string characters)
{
  if (characters.length() <= 1)
  {
    return characters;
  }
  char c = characters[characters.size() - 1];
  characters.pop_back();
  std::string s = "";
  s += c;
  return s + reverseString(characters);
}