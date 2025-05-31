//to check whether the number is autobiographical
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isAutobiographical(int num) {
    std::string s = std::to_string(num);
    int n = s.length();
    std::vector<int> counts(n, 0);

    for (char c : s) {
        int digit = c - '0';
        if (digit < n) {
            counts[digit]++;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (counts[i] != (s[i] - '0')) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isAutobiographical(num)) {
        std::cout << num << " is an autobiographical number." << std::endl;
    } else {
        std::cout << num << " is not an autobiographical number." << std::endl;
    }

    return 0;
}

