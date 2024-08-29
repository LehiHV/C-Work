#include <iostream>
#include <string>
#include <stdio.h> // Necesario para usar scanf y printf

bool anagram(const std::string& fra1, const std::string& fra2) {
    if (fra1.length() != fra2.length()) {
        return false;
    }

    int charCount[256] = {0};

    for (std::size_t i = 0; i < fra1.length(); ++i) {
        charCount[static_cast<unsigned char>(fra1[i])]++;
    }

    for (std::size_t i = 0; i < fra2.length(); ++i) {
        charCount[static_cast<unsigned char>(fra2[i])]--;
        if (charCount[static_cast<unsigned char>(fra2[i])] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Ingresa la primera cadena: ");
    scanf("%99s", str1);  // Lee hasta 99 caracteres, evitando desbordamiento

    printf("Ingresa la segunda cadena: ");
    scanf("%99s", str2);  // Lee hasta 99 caracteres, evitando desbordamiento

    std::string fra1(str1);
    std::string fra2(str2);

    if (anagram(fra1, fra2)) {
        printf("Son anagramas!\n");
    } else {
        printf("No son anagramas.\n");
    }

    return 0;
}

