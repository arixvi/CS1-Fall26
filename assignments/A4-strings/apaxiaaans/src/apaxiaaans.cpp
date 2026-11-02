#include "apaxiaaans.hpp"

string compact(string name) {
    string answer = "";
    for (size_t i = 0; i < name.length(); i++) {
        
        if (i == 0 || name[i] != name[i - 1]) {
            answer += name[i];
        }
    }
    return answer;
}