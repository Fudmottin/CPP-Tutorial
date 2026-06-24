// numbers.cpp

#include <iostream>
#include <typeinfo>
#include <vector>

int sum(const std::vector<int>& values) {
   int the_sum{0};

   for (auto n : values) {
      the_sum += n;
   }

   return the_sum;
}

int main() {
   std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   std::cout << "numbers: ";

   for (auto n : numbers) {
      std::cout << n << " ";
   }

   std::cout << "\nsum = " << sum(numbers) << "\n";

   // typeinfo stuff
   auto a = 42;
   auto b = 42.0;
   auto c = "hello";

   std::cout << typeid(a).name() << "\n";
   std::cout << typeid(b).name() << "\n";
   std::cout << typeid(c).name() << "\n";
}

