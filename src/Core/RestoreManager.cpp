#include "Core/RestoreManager.h"
#include "Core/EncryptionManager.h"
#include <iostream>
#include <fstream>

void RestoreManager::performRestore(const std::string &backup, const std::string &destination) {
    EncryptionManager decryptor;
    std::ifstream inFile(backup, std::ios::binary);
    std::ofstream outFile(destination, std::ios::binary);
    std::string encryptedContent((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    outFile << decryptor.decrypt(encryptedContent);
    inFile.close();
    outFile.close();

    std::cout << "Restore completed.\n";
}
