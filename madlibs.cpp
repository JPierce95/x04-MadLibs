//Joshua E. Pierce: 
#include <iostream>
#include <string>

int main(){
  int input1;
  std::string input2;
  std::string input3;
  int input4;
  std::string input5;
  std::string input6;
  std::string input7;
  double input8;
  std::cout << "Give me an integer number." << std::endl;
  std::cin >> input1;
  std::cout << "Give me a plural noun." << std::endl;
  std::cin >> input2;
  std::cout << "Give me another plural noun." << std::endl;
  std::cin >> input3;
  std::cout << "Give me another integer number." << std::endl;
  std::cin >> input4;
  std::cout << "Give me an adjective." << std::endl;
  std::cin >> input5;
  std::cout << "Give me a plural noun." << std::endl;
  std::cin >> input6;
  std::cout << "Give me yet another plural noun." << std::endl;
  std::cin >> input7;
  std::cout << "Give me a number with a decimal." << std::endl;
  std::cin >> input8;

  std::cout << "One day there was " << input1 << " " << input2 << " these " << input3 << " had " << input4 << " " << input5 << " " << input6 << "." << std::endl;
  std::cout << "They had decided to sell " << input7 << " for " << input8 << "." << std::endl;
  return 0;
}
