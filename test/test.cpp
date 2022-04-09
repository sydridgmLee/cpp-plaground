#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>

int main() {
  double num = 1234567890.001;

  // Create an outputstring stream
  std::ostringstream streamObj3;
  // Set Fixed -Point Notation
  streamObj3 << std::fixed;
  // Set precision to 2 digits
  streamObj3 << std::setprecision(0);
  // Add double to stream
  streamObj3 << num * 1000;
  // Get string from output string stream
  std::string strObj3 = streamObj3.str();

  std::cout << strObj3 << std::endl;
}