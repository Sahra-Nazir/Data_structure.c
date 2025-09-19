#include <iostream>
#include <cmath> // Required for sqrt() function

// Function to check if a number is prime
bool isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return false;
    }

    // Check for divisibility from 2 up to the square root of num
    // We only need to check up to sqrt(num) because if a number has a factor
    // greater than its square root, it must also have a factor smaller than its square root.
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            // If num is divisible by any number other than 1 and itself, it's not prime
            return false;
        }
    }

    // If no divisors are found, the number is prime
    return true;
}

int main() {
    int number;

    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}