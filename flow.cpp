#include <print>
#include <iostream>

int main() {
    int score = 85;
    char grade = 'X';

    if      (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else                  grade = 'F';

    std::println("Grade: {}\nScore: {}", grade, score);

    std::string describe = "";
    switch (score / 10) {
        case 11:
        case 10:
        case 9: describe = "exellent"; break;
        case 8: describe = "good"; break;
        default: describe = "bad";
    }

    std::println("Description: {}", describe);
    std::println("C++++++");
    std::println("C++");
    std::println("C+++");
    std::println("C++++");

    return 0;
}
