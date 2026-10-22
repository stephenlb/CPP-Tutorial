#include <print>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec {1,2,3,4};
    println("{}", vec);

    vec.push_back(5);
    println("{}", vec);

    vec.pop_back();
    println("{}", vec);

    vec.insert(vec.begin(), 77);
    println("{}", vec);

    vec.insert(vec.begin(), 10, 5);
    println("{}", vec);

    vector<int> vec2 {2,2,2,2,2};

        
    // Concatenation
    vec.insert(vec.end(), vec2.begin(), vec2.end());
    println("Concatenation added = {}", vec);

    // Capacity
    println("capacity = {}", vec.capacity());

    // Size
    println("size = {}", vec.size());
    vec.insert(vec.begin(), 13, 5);

    println("size = {}", vec.size());
    println("capacity = {}", vec.capacity());

    println("back: {}", vec.back());
    println("front: {}", vec.front());
    println("at(2): {}", vec.at(2));

    // VERVSE std::reverse()
    reverse(vec.begin(), vec.end());
    println("Reverse: {}", vec);

    std::vector<int> revVec(vec.rbegin(), vec.rend());
    println("revVec: {}", revVec);
    return 0;
}
