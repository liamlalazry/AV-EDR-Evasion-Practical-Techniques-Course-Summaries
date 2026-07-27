std::map<std::string, std::string> api_map = {
    {"netconn", "192.168.1.1"},
    {"agent", "hidden.localdomain"},
};

std::string fetch_api(const std::string& key) {
    return api_map[key];
}
