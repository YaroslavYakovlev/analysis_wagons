#include <iostream>
#include <vector>
#define SMALL_PASS "The number of passengers cannot be less than 0"
#define MAX_PASS "The number of passengers cannot be more than 20 people in one car"
#define ZERO_PASS "In the wagon there are no passengers"
#define COUNT_CARRIAGE 10

#define LOOP for (int i = 0; i < COUNT_CARRIAGE; ++i)

int main() {
  std::cout << "Analysis wagons" << std::endl;
  const int max_pass = 20;
  int count_pass = 0;
  int total_pass = 0;
  std::vector<int> count_pass_carriage;
  LOOP {
    std::cout << "Enter the number of passengers in the carriage" << std::endl;
    std::cin >> count_pass;
    count_pass_carriage.push_back(count_pass);
  }
  LOOP {
    if (count_pass_carriage[i] > max_pass) {
      std::cout << "Carriage number " << i << std::endl;
      std::cout << MAX_PASS << std::endl;
    }
  }
  LOOP {
    if (count_pass_carriage[i] == 0) {
      std::cout << "Carriage number " << i << std::endl;
      std::cout << ZERO_PASS << std::endl;
    }
  }
  LOOP total_pass += count_pass_carriage[i];
  std::cout << "The total number of passengers on the train - " << total_pass << std::endl;
  return 0;
}
