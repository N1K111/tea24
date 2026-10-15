#include <fmt/chrono.h>
#include <fmt/format.h>
#include "config.h"


void changeValueByParameter(int value) {
    value = 99;
    fmt::println("Variable IN Funktion: {}", value);
}

void changeValueByPointer(int* value) {
    *value = 99;
}

int main(int argc, char **argv) {


    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    
    int i = 0;
    /*for (size_t i = 0; i < argc; i++)
    {
        fmt::println("Argument: {}, Adresse: {}", argv[i], fmt::ptr(&argv[i]));
    }
    */

    /* INSERT YOUR CODE HERE */

    /*Teil 1 Zeiger-Grundlagen*/

    int x = 10;
    int* p = &x;

    fmt::println("Variable x: Wert: {}, Adresse: {}", x, fmt::ptr(&x));
    fmt::println("Variable p: Wert: {}, Adresse: {}", *p, fmt::ptr(&p));

    *p = 42;

    fmt::println("Variable x: Wert: {}, Adresse: {}", x, fmt::ptr(&x));
    fmt::println("Variable p: Wert: {}, Adresse: {}", *p, fmt::ptr(&p));

    /*Teil 2 Speicherverwaltung*/

    double* p_double;
    p_double = new double{3.1415};

    fmt::println("Pointer_Double: Wert {}, Adresse {}", *p_double, fmt::ptr(&p_double));

    delete p_double;
    /*Teil 3 Funktionen mit Zeigern*/

    int test_val = 10;
    fmt::println("Variable vor Funktion: {}", test_val);
    changeValueByParameter(test_val);
    fmt::println("Variable nach Funktion: {}", test_val);

    fmt::println("Variable vor Funktion_P: {}", test_val);
    changeValueByPointer(&test_val);
    fmt::println("Variable nach Funktion_P: {}", test_val);
    
    
    return 0; /* exit gracefully*/
}

