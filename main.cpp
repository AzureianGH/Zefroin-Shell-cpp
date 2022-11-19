#include <iostream>
#include "func.hpp"
#include <math.h>  
int main() {
  std::cout << "Warning, this version of Zefroin is unstable. DO NOT TYPE AN ALPHA FOR MATH, IT WILL INFINITLY LOOP!\n";
  std::string error1 = "Expected INPUT: Got Illegal Character: 1";
  std::cout << "Zefroin C++ Version: 1.0\n";
  while (true) {
    while (true) {
    std::string zinput;
    zinput.clear();
    std::cout << "Zefroin >> ";
    
    std::cin >> zinput;
    
    if (zinput == "help") {
      help();
    }
    else if (zinput == "print") {
      std::string prinr;
      std::cout << "Print >> ";
      std::cin >> prinr;
      printe(prinr);
    }
    else if (zinput == "loop") {
      std::string lop;
      int tiem;
      std::cout << "What to loop?\nLoop >> ";
      std::cin >> lop;
      std::cout << "How many times?\nLoop >> ";
      std::cin >> tiem;
      loops(lop,tiem);
      
    }
    else if (zinput == "math") {
      double nm1;
      double nm2;
      
      std::string error2 = "Expected NUMERIC: Got Alpha: 2";
      std::cout << "First Number?\nMath >> ";
      std::cin >> nm1;
      std::cout << "Second Number?\nMath >> ";
      std::cin >> nm2;
      
      
      if (isalpha(nm1)) {
        std::cout << error2 << "\n";
      }
    
      else {
        if (!isnan(nm2)) {
          std::cout << error2 << "\n";
        }
        else {
          zmath(nm1,nm2);
        }
      
    }
      }
    else if (zinput == "clear") {
      clearc();
    }
    else {
      std::cout << error1 << "\n";
      zinput.clear();
    }
    
  }
  }
  
}