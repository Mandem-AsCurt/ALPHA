#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "*****BMI CALCULATOR*****" << endl;
  cout << "How many people BMI do you want to calculate? ";
  cin >> n;
  double height[n];
  double weight[n];
  double BMI[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter height (in meters) for immediate person " << i+1 << ": ";
    cin >> height[i];
    cout << "Enter weight (in kilograms) for immediate person " << i+1 << ": ";
    cin >> weight[i];
    BMI[i] = weight[i] / (height[i] * height[i]);
  }
  cout << "*****BMI values:*****\n";
  for (int i = 0; i < n; i++) {
    cout << "\nPerson " << i+1 << ": " << BMI[i] << endl;
    if (BMI[i] < 18.5) {
            std::cout << "\t\t*****Underweight*****\n";
        }
        else if (BMI[i] >= 18.5 && BMI[i] <= 24.9) {
            std::cout << "\t\t*****Normal weight*****\n";
        } 
        else if (BMI[i] >= 25.0 && BMI[i] <= 29.9) {
            std::cout << "\t\t*****Overweight*****\n";
        } 
        else {
            std::cout << "\t\t*****Obese*****\n";
        }
  }
  return 0;
}
