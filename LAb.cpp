#include <iostream>
#include <stdexcept> 

using namespace std;

long long factorial_recursive(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    }
    // Base Case: 0! = 1 and 1! = 1
    if (n <= 1) {
        return 1;
    }
    // Recursive Step: n * (n-1)!
    return (long long)n * factorial_recursive(n - 1);
}


long long factorial_iterative(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    }
    
    long long result = 1;
    
    // Loop from 1 up to n
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int test_num = 5;

    cout << "--- Factorial Results (n = " << test_num << ") ---\n";
    try {
        cout << "Recursive Factorial: " << factorial_recursive(test_num) << endl;
        cout << "Iterative Factorial: " << factorial_iterative(test_num) << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

