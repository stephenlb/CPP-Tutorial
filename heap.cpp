#include <print>

using namespace std;

int main() {
    // pointer to memeory 64 int
    // actual memory 1
    int* heap = new int{1};
    println("{}", *heap);
    free(heap);
    //delete heap;
    heap = nullptr;
}
