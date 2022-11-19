#include <iostream>
#include "func.hpp" 
#include <unistd.h>
void zmath(double num1,double num2) {
  
  
    
      std::cout << "\nAddition: " << num1 + num2 << "\n";
      std::cout << "Subtraction: "  << num1 - num2 << "\n";
      std::cout << "Multiplication: "  << num1 * num2 << "\n";
      if (num2 != 0){
        std::cout << "Division: "  << num1 / num2 << "\n\n";
    }
      else {
      std::cout << "Division: "  << "Not possible\n\n";
    }  
}
  
      

void printe(std::string printout) {
  std::cout << printout << "\n";
  
}
void loops(std::string wordtl,int ltimes) {
  for (int i=1; i <= ltimes; i++) {
    std::cout << wordtl << "\n";
    
  }
}
void help() {
  std::cout << "\n\nhelp - Opens Help\nprint - Prints a line\nloop - Loops a word for a certain amount\nmath - Simple Mathmatics\nclear - Clears console\n\n";
}
void kcal(double kcalm) {
  std::cout << "Producers: " << kcalm << "\n";
  kcalm = kcalm * .10;
  std::cout << "Primary Consumers: " << kcalm << "\n";
  kcalm = kcalm * .10;
  std::cout << "Secondary Consumers: " << kcalm << "\n";
  kcalm = kcalm * .10;
  std::cout << "Tertiary Consumers: " << kcalm << "\n";
  kcalm = kcalm * .10;
  std::cout << "Apex Predators: " << kcalm << "\n";
}

void github() {
  std::cout << "https://github.com/AzureianGH/Zefroin-Shell-cpp\n";
}
void clearc() {
  std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
void sleep(double sleeptime) {
  std::cout << "Sleeping for " << sleeptime << " Seconds.\n";
  sleep(sleeptime);
  std::cout << "Awaking...";
}