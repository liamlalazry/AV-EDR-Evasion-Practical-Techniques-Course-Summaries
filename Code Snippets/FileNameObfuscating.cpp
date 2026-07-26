char tempPath[MAX_PATH];
GetTempPathA(MAX_PATH, tempPath);

std::string filePath = std::string(tempPath) + "hidden.dat";
