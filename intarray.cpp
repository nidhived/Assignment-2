#include <iostream>
using namespace std;
 // main program will take up to ten integers
int main(int argc, char **argv){
  int i = 0;
  int numberArray[10];

  cout << "Enter ten non-negative numbers" << endl;
  for(int i = 0; i < 10; ++ i){
    cin >> numberArray[i];
  }
// adds user input into an array ^
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i];
  }
// outputs the array 
  cout << endl;
}
