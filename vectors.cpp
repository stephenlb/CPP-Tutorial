#include <print>
#include <string>
#include <vector>
#include <array>
#include <map>


int main() {
    std::string name = "OriginalDragon";
    std::string name2 = "elias";
    std::string name3 = "Gnomeskytarg";
    std::string greating = "Hello, ";

    std::string message = greating + name3;
    println("message: {}", message);

    return 0;
}


