#include <print>
#include <iostream>
#include <string>

using namespace std;

int main () {
    //int number = 100;
    const int number = 100;
    ///number += 1;

    //int* numberPointer = &number;
    float fraction = 10.01234;
    double bigger_fraction = 100000.0123456789;
    char letter = 'A';
    string name = "4200";
    std::size_t raw_index;
    int i = stoi(name, &raw_index);

    printf(" 1d -> %1d\n", i);

    println("stoi: {}", i);
    println("raw_index: {}", raw_index);
    println("{}", name);
    println("{}", fraction);
    println("{}", bigger_fraction);
    println("{}", letter);

    std::cout << name << endl;
    std::cout << number << endl;

    println("{}", bigger_fraction / fraction);

    println("{} {}", sizeof(bigger_fraction), sizeof(bigger_fraction) * 8);

    return 0;
}
