#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "MAGIC 8-BALL:\n\n";
    srand(time(NULL));
    int answer = std::rand() % 10;

    std::cout << answer;
}