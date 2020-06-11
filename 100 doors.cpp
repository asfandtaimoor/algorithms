#include <iostream>

using namespace std;
 
int main()
{
	int numberOfDoors = 100;
  bool is_open[numberOfDoors] = { false };
 
  // do the 100 passes
  for (int pass = 0; pass < numberOfDoors; ++pass)
    for (int door = pass; door < numberOfDoors; door += pass+1)
      is_open[door] = !is_open[door];
 
  // output the result
  for (int door = 0; door < numberOfDoors; ++door)
    cout << "door #" << door+1 << (is_open[door]? " is open." : " is closed.") <<endl;
  return 0;
}
