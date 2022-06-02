#include <unistd.h>

#include <iostream>

char data[] = "Very secret important data\n";

int main() {
    std::cout << "pid: " << getpid() << "\nData address: " << (void *)data << "\nData size: " << sizeof(data) << "\n";
    std::cin.get();

    return 0;
}