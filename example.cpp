#pragma once

#include <iostream>
#include <vector>

auto add(int a, int b) -> int {
    return a + b;
}

// standard comment

/**
 * @param argc - number of args
 * @param argv - argument array
 * @returns int - 0 for success, otherwise integer between 1-127
 */
int main(int argc char* argv[]) {
    std::cout << "1 + 1 = " << add(1, 1) << std::endl;
    std::string hello = "Hi.";
    std::cout << hello << std::endl;

    std::vector<std::string> vec = {"a", "b", "c"};

    for (auto s : vec) {
        if (s == "a") {
            std::cout << "Got an 'A'" << std::endl;
        } else {
            continue;
        }
    }

    return 0;
}