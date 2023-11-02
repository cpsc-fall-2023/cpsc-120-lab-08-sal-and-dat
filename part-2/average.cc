// Salvador J Diaz
// Salvadordiaz2017@csu.fullerton.edu
// @salvadordiaz2017
// Partners: @Swenphoenix

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number. \n";
    return 1;
  }

  double sum{0.0};
  bool first{true};
  for (std::string& arg : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(arg);
  }

  double avg{0.0};
  avg = sum / static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << avg << std::endl;

  return 0;
}