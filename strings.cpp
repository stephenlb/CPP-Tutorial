#include <print>
#include <string>
#include <vector>
#include <array>
#include <map>


int main() {
    std::string name = "OriginalDragon";
    std::string name2 = "Elias";
    std::string name3 = "Gnomeskytarg";
    std::string greating = "Hello, ";

    std::string message = greating + name2;
    println("message: {}", message);

    int length = message.size();
    std::println("message length: {}", length);

    // Subscripts
    std::println("First letter of message: {}", message[0]);
    std::println("Elias exists: {}", message.contains("Elias"));
    std::println("Elias position: {}", message.find("Elias"));


    return 0;
}


