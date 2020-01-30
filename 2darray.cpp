#include <iostream>
using namespace std;
//creates a 2d array
int main(int argc, char **argv){
  int numdouble[4][5];
  int i,n;
  //int numdouble[4][5];
//two loops to account for the 2d array
  for(i=0; i<4;++i){
    for(n = 0; n < 5; ++ n){
      cin >> numdouble[i][n];
    }
  }
// two loops to output 
  for(int i=0; i<4;++i){
    for(int n = 0; n < 5; ++ n){
      cout << numdouble[i][n];
    }
  }
  cout << endl;
  return 0;

}
