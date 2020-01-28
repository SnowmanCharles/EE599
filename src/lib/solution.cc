#include "solution.h"
#include <iostream>

double Solution::FindMedian(std::vector<double> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  std::sort(inputs.begin(), inputs.end());
  if (inputs[0] < 0) {
    return -1;
  }
  int n = inputs.size();
  return n % 2 == 0 ? (inputs[n / 2] + inputs[n / 2 - 1]) / 2 : inputs[n / 2];
}

int Solution::FindMax(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  int result = INT32_MIN;
  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}

int Solution::FindMaxRecursive(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  return FindMaxRecursiveAux(inputs, 0, inputs.size());
}

int Solution::FindMaxRecursiveAux(std::vector<int> &inputs, int left,
                                  int right) {
  if (right == left + 1) {
    return inputs[left];
  }

  int mid = (right + left) / 2;

  return std::max(FindMaxRecursiveAux(inputs, left, mid),
                  FindMaxRecursiveAux(inputs, mid, right));
}
