#include "Core/EncryptionManager.h"
#include <algorithm>

std::string EncryptionManager::encrypt(const std::string &data) {
    std::string encrypted = data;
    std::transform(encrypted.begin(), encrypted.end(), encrypted.begin(), [](unsigned char c) { return c + 1; });
    return encrypted;
}

std::string EncryptionManager::decrypt(const std::string &data) {
    std::string decrypted = data;
    std::transform(decrypted.begin(), decrypted.end(), decrypted.begin(), [](unsigned char c) { return c - 1; });
    return decrypted;
}
