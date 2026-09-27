///For now, our Repository class will be responsible for repository operations.

#ifndef REPOSITORY_HPP
#define REPOSITORY_HPP

#include <string>
using namespace std;

class Repository {
public:
    Repository(const string& path);

    void init();

private:
    string path;
};

#endif