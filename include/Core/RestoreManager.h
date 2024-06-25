#ifndef RESTORE_MANAGER_H
#define RESTORE_MANAGER_H

#include <string>

class RestoreManager {
public:
    void performRestore(const std::string &backup, const std::string &destination);
};

#endif // RESTORE_MANAGER_H
