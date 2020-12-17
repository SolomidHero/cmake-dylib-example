#include "main.h"

int main(){
  
  std::cout << "processing in main.cpp..." << std::endl;
  
  std::cout
    << "using lib_A:" << std::endl  
    << "\t 5 + 10 is " << add(5, 10) << std::endl;

  std::cout
    << "using lib_B:" << std::endl  
    << "\t 5 + 3 is " << add_three(5) << std::endl
    << "\t -7 + 3 is " << add_three(-7) << std::endl;

  std::cout << "end of main.cpp" << std::endl;

  return 0;
}