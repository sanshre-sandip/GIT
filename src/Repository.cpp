#include "Repository.hpp"
#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = filesystem;

Repository::Repository(const string& path)
    : path(path)
{
}

void Repository::init() {
    fs::create_directory(path + "/.gitest");

    cout << "Initialized empty MyGit repository\n";
}