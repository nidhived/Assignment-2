#include <iostream>
using namespace std;
 // main program will take up to ten integers
int main(int argc, char **argv){
  int i = 0;
  int numberArray[10];

  cout << "Enter ten non-negative numbers" << endl;
  for(int i = 0; i < 10; ++ i){
    int number;
    cin >> number;
    if(number >= 0){
      numberArray[i] = number;
      //cin >> numberArray[i];
    }
    else{
      cout << "this is a negative number. Please enter a positive number." <<endl;
      cin >> number;
      numberArray[i] = number;
    }

  }
// adds user input into an array ^
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i];
  }
// outputs the array
  cout << endl;
}
