#include "String.h"
#include <iostream>

int main() {
    String str1("sdqcg");
    String str2("rgfas34");

    String intersection = str1 * str2;

    std::cout << "Intersection of strings: ";
    intersection.display();

    return 0;
}