#ifndef BACKUP_MANAGER_H
#define BACKUP_MANAGER_H

#include <string>

class BackupManager {
public:
    void performBackup(const std::string &source, const std::string &destination);
};

#endif // BACKUP_MANAGER_H
