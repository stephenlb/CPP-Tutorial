#include <print>
#include <vector>
#include <memory>

struct Button {
    std::string name;
    int size;

    Button(std::string n, int s) : name(n), size(s) {
        std::print("button created: '{}'\n", name);
    }

    ~Button() {
        std::print("button destroyed: '{}'\n", name);
    }

    void update_name(std::string n) {
        name = n;
    }
};

int main() {
    auto a = '5';
    char* b = &a;
    *b = 10;
    std::print("{}\n", a);

    auto button = std::make_unique<Button>("Blyrz", 42);
    //auto button3 = button;
    auto button_shared = std::make_shared<Button>("Blyrz", 42);
    std::print("button_shared.use_count: {}\n", button_shared.use_count());
    auto button2 = button_shared;
    std::print("button_shared.use_count: {}\n", button_shared.use_count());
    auto button3 = button_shared;
    std::print("button_shared.use_count: {}\n", button_shared.use_count());
    button3.reset();
    std::print("button_shared.use_count: {}\n", button_shared.use_count());
    button2.reset();
    std::print("button_shared.use_count: {}\n", button_shared.use_count());

    button->update_name("DavidEnache");
    return 0;

    // Thank you Abhishek
    auto abhishek = std::make_unique<int>(42);

    std::print("{}\n", *abhishek);
    //std::make_unique()
    std::unique_ptr<int> uniquevar;
    std::shared_ptr<int> sharedptr;
    std::weak_ptr<int> weakptr;
}
