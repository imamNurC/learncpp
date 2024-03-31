#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {

	// cout << k + sum(k - 1) << " ";
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(5);
  cout << result << "\n";
  return 0;
} 
