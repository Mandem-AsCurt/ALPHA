#include <iostream>
#include <cmath>

using namespace std;

// Function to compute the quadratic formula
void computeQuadraticFormula(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "No real roots" << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
}

// Function to compute the factorial of a number
long long computeFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    // Quadratic formula
    double a, b, c;
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    computeQuadraticFormula(a, b, c);

    // Factorial
    int num;
    cout << "Enter a number to compute its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << computeFactorial(num) << endl;

    return 0;
}