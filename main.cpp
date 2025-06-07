#include <iostream>
#include <filesystem>
#include <fstream>
#include <unordered_set>

using namespace std;
using namespace std::filesystem;

string getAvailableFileName(const path& destDir, const string& filename) {
    path filePath = destDir / filename;
    if (!exists(filePath)) {
        return filename;
    }

    string stem = path(filename).stem().string();
    string extension = path(filename).extension().string();
    int counter = 1;

    while (true) {
        string newName = stem + "_" + to_string(counter) + extension;
        filePath = destDir / newName;
        if (!exists(filePath)) {
            return newName;
        }
        counter++;
    }
}

int main() {
    string sourcePath, destinationPath;

    // Input source and destination paths
    cout << "Enter source directory path: ";
    cin >> sourcePath;

    cout << "Enter destination directory path: ";
    cin >> destinationPath;

    if (!exists(sourcePath) || !is_directory(sourcePath)) {
        cerr << "Invalid source directory." << endl;
        return 1;
    }

    // Create destination directory if it doesn't exist
    create_directories(destinationPath);

    // Log file in the destination folder
    ofstream logFile(destinationPath + "/copied_files.txt");

    try {
        for (const auto& entry : recursive_directory_iterator(sourcePath)) {
            if (is_regular_file(entry)) {
                string originalName = entry.path().filename().string();
                string availableName = getAvailableFileName(destinationPath, originalName);
                path destFilePath = path(destinationPath) / availableName;

                copy_file(entry.path(), destFilePath, copy_options::overwrite_existing);
                logFile << destFilePath.string() << endl;
            }
        }

        cout << "Files copied successfully. Log saved to: "
             << destinationPath + "/copied_files.txt" << endl;

    } catch (const filesystem_error& e) {
        cerr << "Filesystem error: " << e.what() << endl;
        return 2;
    } catch (const exception& e) {
        cerr << "General error: " << e.what() << endl;
        return 3;
    }

    return 0;
}
