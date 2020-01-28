#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMaxTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMax(inputs), 4);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMaxTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, -1};
  EXPECT_EQ(solution.FindMax(inputs), 4);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMaxTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMax(inputs), 2);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 2);
}

TEST(FindMaxTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMax(inputs), -1);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), -1);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<double> inputs = {};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1.0);
}

TEST(FindMedianTest, HandlesSizeOne) {
  Solution solution;
  std::vector<double> inputs = {2.0};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 2.0);
}

TEST(FindMedianTest, HandlesNegativeValue) {
  Solution solution;
  std::vector<double> inputs = {9.0, 0.33, -9.9, 1.0};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1.0);
}

TEST(FindMedianTest, HandlesOddSize) {
  Solution solution;
  std::vector<double> inputs = {100.0, 1.0, 10.0};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 10.0);
}

TEST(FindMedianTest, HandlesEvenSize) {
  Solution solution;
  std::vector<double> inputs = {100.0, 1.0, 10.0, 11.2};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 10.6);
}