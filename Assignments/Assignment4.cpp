#include <iostream>
using namespace std;

long mapValue(long v, long in0, long in1, long out0, long out1) {
  return (v - in0) * (out1 - out0) / (in1 - in0) + out0;
}

int main() {
  std::cout << mapValue(512, 0, 1023, 0, 255) << '\n';
  return 0;
}