FARPROC get_api(const char* lib, const char* func) {
    HMODULE hMod = LoadLibraryA(lib);  // Load the DLL
    return GetProcAddress(hMod, func); // Resolve function address
}
typedef LPVOID(WINAPI* pVirtualAlloc)(LPVOID, SIZE_T, DWORD, DWORD);

int main() {
    pVirtualAlloc myVA = (pVirtualAlloc)get_api("kernel32.dll", "VirtualAlloc");
    void* mem = myVA(NULL, 4096, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    return 0;
}
// Avoiding detection based on imports and api name 
