#ifndef ENCRYPTION_MANAGER_H
#define ENCRYPTION_MANAGER_H

#include <string>

class EncryptionManager {
public:
    std::string encrypt(const std::string &data);
    std::string decrypt(const std::string &data);
};

#endif // ENCRYPTION_MANAGER_H
