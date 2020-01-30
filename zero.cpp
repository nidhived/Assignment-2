#include <iostream>
using namespace std;
//a function that outputs the and sets both the variables to 0
void zeroboth(int a, int b){
  a = 0;
  b = 0;
  // pass by reference is a copy, does not have any access to original variables, just a copy 
  cout << "int #1 : " << a << endl;
  cout << "int #2: " << b << endl;
}

int main(int argc, char **argv){
  int c = 66;
  int d = 89;
//calling the function
  zeroboth(c,d);
//  cout << c << endl;
  return 0;

}
