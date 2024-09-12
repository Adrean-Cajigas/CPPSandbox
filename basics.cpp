#include <iostream>


// A function
int AddTwoNumbers(int a, int b) {
    int sum = a + b;
    return sum; 
}

// Make sure to return 0 for main
int main() {
    int num1 = 5;
    int num2 = 6;
    int sum = AddTwoNumbers(num1, num2);
    
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum; 
    return 0;

}

