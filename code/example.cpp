#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;

#include <iomanip>
#include <map>
#include <random>

int main(void)
{
  cout << "Exponential Distri Calcs (C++11):\n---------------------\n";
  std::random_device rd;
  std::mt19937 gen(rd());
  std::exponential_distribution<> d(1);

  std::map<int, int> hist;
  for (int n=0; n<10000; ++n) {
    ++hist[2*d(gen)];
  }
  for (auto p : hist) {
    std::cout << std::fixed << std::setprecision(1)
	      << p.first/2.0 << '-' << (p.first+1)/2.0 <<
      ' ' << std::string(p.second/200, '*') << '\n';
  }

  
  return 0;
}

/** Adding a test message just as a diff **/

/** Adding a second test message **/
