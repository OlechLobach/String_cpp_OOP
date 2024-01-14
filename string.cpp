#include "String.h"

String::String() : str(nullptr) {}

String::String(const char* s) {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
}

String::String(const String& other) {
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
}

String::~String() {
    delete[] str;
}

String String::operator*(const String& other) const {
    int len1 = strlen(str);
    int len2 = strlen(other.str);
    char* result = new char[len1 < len2 ? len1 : len2];

    int k = 0;
    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            if (str[i] == other.str[j]) {
                result[k++] = str[i];
                break;  // Break to avoid duplicate characters in the result
            }
        }
    }

    result[k] = '\0';  // Null-terminate the result string
    String intersection(result);
    delete[] result;

    return intersection;
}

void String::display() const {
    cout << str << endl;
}
