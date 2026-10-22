#include <map>
#include <print>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    map<string, int> mymap = {
        {"gnomesky", 1},
        {"ehbzvz", 2},
        {"Elephant", 3},
    };
    println("{}", mymap);

    mymap["RESTAR.exe1"] = 4;
    println("{}", mymap);

    mymap["gablefin1"] = 5;
    for (const auto& [name, val] : mymap) {
        println("Name: {}: {}", name, val);
    }
}

