#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindMax(inputs)
            << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMax(inputs) << std::endl;

  std::vector<double> doubleInput = {1.0, 2.0, 3.0, 4.0};
  std::cout << "inputs: {1.0, 2.0, 3.0, 4.0}, median: " << solution.FindMedian(doubleInput)
            << std::endl;

  return 0;
}

/*
cd
ls
mkdir
rmdir
pwd

top: gives all the running processes on this computer

help whatis man:

*/