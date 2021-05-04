#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;
int main() {

    // 1. Get current path - sets current working directory
    std::cout << '\n';
    std::filesystem::path mainPath = fs::current_path(); // Cache main path for later use
    std::cout << fs::current_path() << '\n';

    // 2. Loop through main directory
    for (auto& p: fs::directory_iterator(mainPath)) { // TODO: This only explores the current directory, use fs::recursive_directory_iterator to look through all of the subdirectories there are!

        bool lookingInDir{true};

        // TODO: Needs to be given an order so the loop returns an organized output
        // 2.a - Find subdirectories of the current main directory
        if (p.is_directory()) {
            std::cout << "|----" << p.path().filename() << std::endl;
        }
        // 2.b - List every file that can be found within the subdirectory
        while(lookingInDir) {
            // FIXME: This also applies to the directory we are currently in, which we dont want
            if (p.is_regular_file()) {
                std::cout << "         |----" << p.path().filename() << std::endl;
            }
            lookingInDir = false;
        }

    }

    std::cout << '\n';
    return 0;
}