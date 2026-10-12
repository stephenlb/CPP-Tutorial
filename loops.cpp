#include <print> 
#include <vector>
#include <iostream>

int main() {
    // For loop
    int i = 0;
    for (;;) {
        if (i++ < 1) continue;
        std::println("O_O 0_0 i = {}", i);
        if (i >= 3) break;
    }

    // While
    int j = 0;
    while (true) {
        if (j++ < 1) continue;
        std::println("while j = {}", j);
        if (j >= 3) break;
    }

    // range-for for-each ( for in )
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    for (int number : numbers) {
        std::println("for each number = {}", number);
    }

    return 0;
}
