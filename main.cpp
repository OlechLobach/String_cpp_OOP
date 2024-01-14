#include "String.h"


int main() {
    String str1("sdqcg");
    String str2("rgfas34");

    String intersection = str1 * str2;

    cout << "Intersection of strings: ";
    intersection.display();

    return 0;
}