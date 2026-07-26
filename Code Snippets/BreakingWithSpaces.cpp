#define OBF(x) #x

const char* cmd = OBF(c m d . e x e);  // Breaks static parsers
