#include <iostream>
using namespace std;
// using & so it doesnt output the memory locationbut rather the value
void inputFunction(double& feet, double& inches, double& meters , double& centimeters)
{
//  double totalinches;
  cout << "please enter feet" << endl;
  cin >> feet;
  cout << "please enter inches" << endl;
  cin >> inches;
  //totalinches = (feet  * 12) + inches;

}
// converting the inputed feet and and inches to meters and centimeters
double convert(double& feet, double& inches, double& meters , double& centimeters){
//  double total;
  meters = feet * 0.3048;
  centimeters = inches * 2.54;
  return meters;
  return centimeters;
}
//outputting the results
void outputFunction(double feet, double inches, double meters, double centimeters){
  // cout << call function COnvert ft to meters
  // cout << call function convert inch to centimeters
  cout << feet << " Feet is equal to " << meters << " meters." << endl;
  cout << inches << " Inches is equal to " << centimeters << " centimeters." << endl;
}

int main(int argc, char **argv){
  double feet, inches, meters, centimeters;
  string choice = "Yes";
  while (choice == "Yes"){
    //calling the functions with the parameters
    inputFunction(feet, inches, meters, centimeters);
    convert(feet, inches, meters, centimeters);
    outputFunction(feet, inches, meters, centimeters);
//asking the user if they want to enter another set of values
    cout << "Would you like to enter a new set of measurements? (Yes/exit)" <<endl;
    cin >> choice;
//break the loop if they type exit
    if(choice == "exit"){
      break;
    }
    else{
      continue;
    }
  }
}
