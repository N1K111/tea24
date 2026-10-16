#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

void foo();

int globalVar1 = 1;
int globalVar2 = 0;
int globalVar3;

int const constVar1 = 20;
int static staticVar1 = 10;

int main(int argc, char **argv) {
    
    int localVar1 = 2;
    int static localStatic = 3;
    int const localConst = 4;

    fmt::println("[global] Var1: {}[{}], Var2: {}[{}], Var3: {}[{}]", globalVar1, fmt::ptr(&globalVar1), globalVar2, fmt::ptr(&globalVar2), globalVar3, fmt::ptr(&globalVar3));
    fmt::println("[global] StaticVar: {}[{}], ConstVar: {}[{}]", staticVar1, fmt::ptr(&staticVar1), constVar1, fmt::ptr(&constVar1));
    fmt::println("[main] Normal: {}[{}], Static: {}[{}], Const: {}[{}]", localVar1, fmt::ptr(&localVar1), localStatic, fmt::ptr(&localStatic), localConst, fmt::ptr(&localConst));

    int* heapVar = new int(3);
    fmt::println("[main] heapVar: {}[{}] {}", *heapVar, fmt::ptr(&heapVar), fmt::ptr(heapVar));
    delete(heapVar);

    foo();
    fmt::println("[main] Foo: {}", fmt::ptr(&foo));

    return 0; /* exit gracefully*/
}

void foo() {
    fmt::println("[foo] Hello from foo!");
}