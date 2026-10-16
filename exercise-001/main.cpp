#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    int globalVar = 1;
    fmt::println("[main] Var1: {}[{}]", globalVar, fmt::ptr(globalVar));

    return 0; /* exit gracefully*/
}
