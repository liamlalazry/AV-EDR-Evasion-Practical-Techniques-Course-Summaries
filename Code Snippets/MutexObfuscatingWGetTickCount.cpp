#include <windows.h>
#include <iostream>
#include <sstream>
#include <ctime>

std::string generate_mutex_name() {
    std::stringstream ss;
    ss << "Global\\" << GetTickCount();
    return ss.str();
}

int main() {
    std::string mutexName = generate_mutex_name();
    HANDLE hMutex = CreateMutexA(NULL, FALSE, mutexName.c_str());
    if (hMutex) {
        std::cout << "Mutex created: " << mutexName << std::endl;
    }
    return 0;
}
// GetTickCount used for generating a diffrent string as it gives the time past since the last boot in seconds 
