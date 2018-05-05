// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
bool myfunction (int i,int j) { return (i<j); }

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  vector <int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

  // using default comparison (operator <):
  sort (myvector.begin(), myvector.end());           //(12 32 45 71)26 80 53 33

  cout << "myvector contains:";
  for (iterator it = myvector.iterator(); it!=myvector.end(); ++it)
        cout << ' ' << *it;
  cout << '\n';

  return 0;
}
