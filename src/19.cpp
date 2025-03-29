#include <iostream>

int main() {
    // Example problem: Given an array of integers, find the sum of all even numbers in the array.
    
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sum = 0;
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    
    std::cout << "The sum of all even numbers in the array is: " << sum << std::endl;
    
    return 0;
}
