//
// Created by someone on 2019/8/21.
//

#include <string>
#include <regex>

class regex {
private:
    std::string pattern;
    const std::string FULL_STOP = ".";
    const std::string ASTERISK = "*";
public:
    bool matches(const std::string &input) {
        return input == pattern;
    }
};