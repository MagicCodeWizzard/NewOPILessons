#include "utils.hpp"

#include <fstream>

bool loadConfiration(const std::string& path)
{
    int fieldSize = 3;
    std::string userName1 = "User1";
    std::string userName2 = "User2";

    std::ifstream file(path);
    if (file.is_open() == false) {
        return false;
    }

    std::string data;
    file >> data;
    if (!data.empty()) {
        try {
            fieldSize = std::stoi(data);
        } catch(...) {
            file.close();
            return false;
        }
    } else {
        file.close();
        return false;
    }

    data.clear();

    file >> data;
    if (!data.empty()) {
        userName1 = data;
    } else {
        file.close();
        return false;
    }

    data.clear();

    file >> data;
    if (!data.empty()) {
        userName2 = data;
    } else {
        file.close();
        return false;
    }

    file.close();
    return true;
}
