int main() {
    // generate a random number between 1 and 10
    int num = rand() % 10 + 1;

    // prompt user for input
    std::cout << "Guess a number between 1 and 10: ";

    // read user's guess from standard input
    int guess;
    std::cin >> guess;

    // check if the user's guess is correct
    if (guess == num) {
        std::cout << "Correct! You win!";
    } else {
        std::cout << "Incorrect. The number was " << num << ".";
    }

    return 0;
}
