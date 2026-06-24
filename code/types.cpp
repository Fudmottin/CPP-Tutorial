// types.cpp

#include <iostream>

int main() {
   int x{42};
   int& r{x};

   std::cout << "x = " << x << "\n";
   std::cout << "r = " << r << "\n";

   ++r;

   std::cout << "x = " << x << "\n";
   std::cout << "r = " << r << "\n";
}

