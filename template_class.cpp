#include <print>
#include <string>
#include <concepts>
#include <iostream>

//concept Number = int
template <typename Y>
class Yoyo {
public:
    Y name;
    Yoyo(Y name) : name(name) {
        std::print("Name: {}\n", name);
    }
};

struct Derick {
    std::string name;
    void say() {
    }
};

int main() {
    std::string name = "Yoyo";
    Yoyo y = Yoyo(name);
    return 0;
}
