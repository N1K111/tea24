#include <fmt/format.h>
#include "version/version.h"

int main()
{
    fmt::println("Project: {}", projectName());
    fmt::println("Version: {}.{}.{}", major(), minor(), patch());
    fmt::println("Full: {}", fullVersion());

    return 0;
}