//This code is written bu Muhammed Gorunen
// 
//adding library
#include <iostream>


//Creating a macro for printing
#define LOG(x) std::cout<< x << std::endl;

//This function provides us with two return values by using pass by reference
void MathOperations(int a, int b, int& addition, int& subtraction)
{
    addition = a + b;
    subtraction = a - b;
}

// Driver code
int main()
{
    int addition, subtraction, x, y;

    LOG("Enter two numbers: ");
    std::cin >> x >> y;

    // The last arguments are passed
    // by giving addresses of memory locations
    MathOperations(x, y, addition, subtraction);
    LOG("The addition of x and y is " << addition );
    LOG("The subtraction of y from x is " << subtraction);

    return 0;
}
