#ifndef VERSION.H
#define VERSION.H

#include <string>

const char* projectName();
int major();
int minor();
int patch();
std::string fullVersion();

#endif
