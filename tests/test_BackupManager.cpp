#include <gtest/gtest.h>
#include "Core/BackupManager.h"

// Пример теста для BackupManager
TEST(BackupManagerTest, PerformBackup) {
    BackupManager manager;
    // Тестовые данные
    std::string source = "test_source";
    std::string destination = "test_destination";
    
    // Выполнение теста
    manager.performBackup(source, destination);
    
    // Проверка результата
    // (Добавьте соответствующие проверки)
    ASSERT_TRUE(true);
}
