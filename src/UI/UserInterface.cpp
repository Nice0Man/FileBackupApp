#include "UI/UserInterface.h"
#include ""
#include "RestoreManager.h"
#include <iostream>
#include <string>

void UserInterface::run() {
    while (true) {
        std::cout << "1. Backup\n2. Restore\n3. Exit\nChoose an option: ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string source, destination;
            std::cout << "Enter source directory: ";
            std::cin >> source;
            std::cout << "Enter destination directory: ";
            std::cin >> destination;
            BackupManager().performBackup(source, destination);
        } else if (choice == 2) {
            std::string backup, destination;
            std::cout << "Enter backup file: ";
            std::cin >> backup;
            std::cout << "Enter destination directory: ";
            std::cin >> destination;
            RestoreManager().performRestore(backup, destination);
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
