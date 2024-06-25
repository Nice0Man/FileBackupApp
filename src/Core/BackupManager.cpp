#include "Core/BackupManager.h"
#include "Core/FileScanner.h"
#include "Core/EncryptionManager.h"
#include <iostream>
#include <fstream>

void BackupManager::performBackup(const std::string &source, const std::string &destination) {
    FileScanner scanner;
    EncryptionManager encryptor;
    auto files = scanner.scanDirectory(source);

    for (const auto &file : files) {
        std::ifstream inFile(file, std::ios::binary);
        std::ofstream outFile(destination + "/" + file, std::ios::binary);
        std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
        outFile << encryptor.encrypt(content);
        inFile.close();
        outFile.close();
    }

    std::cout << "Backup completed.\n";
}
