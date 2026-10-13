#include <print>
#include <string>
#include <vector>

using StringList = std::vector<std::string>; 

int stringLength(const std::string_view& str) {
    return str.size();
}

int add(int a, int b);
int add(int a, int b) { return a + b; }

int addByPointer(int* a, int* b) {
    *a = 10;
    return *a + *b;
}

int addByReferene(const int& a, const int& b) {
    //a = 10;
    return a + b;
}

constexpr int cube(int& a) {
    return a * a * a;
}

int main() {
    long long bignumber = 10;
    int result = add(1, 2);
    std::println("Result = {}", result);
    int a = 1;
    int b = 2;
    result = addByPointer(&a, &b);
    std::println("Result addByPointer = {}", result);
    std::println("a = {}", a);
    result = addByReferene(a, b);
    std::println("Result addByReferene = {}", result);

    // String Length
    int len = stringLength("12345");
    std::println("stringLength: {}", len);


    // Const Expr
    int d3 = cube(b);
    std::println("cube: {}", d3);

    // XOR
    int xоr = 100;
    std::println("xоr: {}", xоr);
    xоr = xоr ^ 8110001;
    std::println("xоr: {}", xоr);


    std::println("\n\n");
    std::println("a: {}", a);
    std::println("b: {}", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::println("a: {}", a);
    std::println("b: {}", b);

    return 0;
}
