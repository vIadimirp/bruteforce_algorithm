// Made on February 10th, 2025
// Just a nice little BruteForce algorithm on C++

#include <iostream>
#include <vector>


#define number_t unsigned


int main() {
    std::string symbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const number_t symbols_length = symbols.length();
    const number_t last_symbol_index = symbols_length - 1;

    number_t length = 1;
    number_t count = 1;
    number_t iterations = symbols_length;
    std::vector<number_t> cur;
    cur.push_back(0);

    while (true) {
        for (number_t i = 0; i < iterations; i++) {
            std::cout << count << ") ";
            for (number_t k = 0; k < length; k++) {
                std::cout << symbols[cur[k]];
            }
            std::cout << std::endl;
            count++;

            for (number_t j = length; j > 0; j--) {
                if (cur[j-1] != last_symbol_index) {
                    cur[j-1]++;
                    break;
                }
                cur[j-1] = 0;
            }
        }

        length++;
        iterations *= symbols_length;
        cur.push_back(0);
    }
    
    return 0;
}
