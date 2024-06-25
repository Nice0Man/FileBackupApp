#ifndef FILE_SCANNER_H
#define FILE_SCANNER_H

#include <vector>
#include <string>

class FileScanner {
public:
    std::vector<std::string> scanDirectory(const std::string &directory);
};

#endif // FILE_SCANNER_H
