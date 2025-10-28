#include <iostream>
#include <stdexcept> 

using namespace std;
int factorial_recursive(int n) {
    if (n < 0) {
        cerr << "Error: Factorial not defined for negative numbers." << endl;
        return -1; 
    }
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int factorial_iterative(int n) {
    if (n < 0) {
        cerr << "Error: Factorial not defined for negative numbers." << endl;
        return -1;
    }
    
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int test_num = 7;

    cout << "--- Factorial Results (n = " << test_num << ") ---\n";
    
    cout << "Recursive Factorial: " << factorial_recursive(test_num) << endl;
    
    cout << "Iterative Factorial: " << factorial_iterative(test_num) << endl;

    return 0;
}