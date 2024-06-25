#include <gtest/gtest.h>
#include "Core/EncryptionManager.h"

// Пример теста для EncryptionManager
TEST(EncryptionManagerTest, EncryptDecrypt) {
    EncryptionManager manager;
    std::string data = "Hello, World!";
    
    std::string encrypted = manager.encrypt(data);
    std::string decrypted = manager.decrypt(encrypted);
    
    ASSERT_EQ(data, decrypted);
}
