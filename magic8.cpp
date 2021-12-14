#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "MAGIC 8-BALL:\n";

    int answer = std::rand();

    std::cout << answer;
}