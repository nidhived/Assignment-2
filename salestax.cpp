// //Implement a function called addTax.
// The function addTax has two formal parameters:
// taxRate, which is the amount of sales tax expressed
// as a percent; and cost, which is the cost of an item
// before tax. The function returns the value (float) of
// cost so that it includes sales tax.

#include <iostream>
using namespace std;
//function that returns the total with tax
float addTax(float taxRate, float cost){
  float tax;
  float fcost;
  tax = taxRate * 0.01;
  fcost = cost * (tax + 1);
  return fcost;
}

int main(int argc, char **argv){
//calls function with given values 
cout << addTax(10,15)<< endl;
return 0;

}
