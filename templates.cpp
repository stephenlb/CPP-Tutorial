#include <print>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename GG, typename K>
GG add(GG a, K b) {
    return a + b;
}

template <typename STR>
STR concat(STR a, STR b) {
    return a + b;
}

int addNormal(int a, int b) {
    return a + b;
}
float addNormal(float a, float b) {
    return a + b;
}

int main() {
    cout << "hello!!!\n";
    float val = add(2.f, 1.5f);
    //std::string out = concat("1 ", "2");
    string out = (string)"1 " + (string)"2";
    print("{}\n", out);
    //std::print("{}\n", val);
    ////std::print("{}\n", sizeof(2.f) * 8);
    ////std::print("{}\n", sizeof(2.0) * 8);
}
