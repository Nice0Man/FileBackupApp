#include "Core/FileScanner.h"
#include <filesystem>

std::vector<std::string> FileScanner::scanDirectory(const std::string &directory) {
    std::vector<std::string> files;
    for (const auto &entry : std::filesystem::recursive_directory_iterator(directory)) {
        if (entry.is_regular_file()) {
            files.push_back(entry.path().string());
        }
    }
    return files;
}
