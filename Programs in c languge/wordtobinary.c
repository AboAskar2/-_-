#include <stdio.h>
#include <string.h>

void toBinary(char text[]) {
    for (int i = 0; i < strlen(text); i++) {
        unsigned char ch = text[i]; // تحويل الحرف إلى عدده العشري
        for (int j = 7; j >= 0; j--) { // تحويله إلى 8 بت
            printf("%d", (ch >> j) & 1);
        }
        printf(" "); // مسافة بين الحروف
    }
    printf("\n");
}

int main() {
    char word[100];

    printf("input the text:");
    fgets(word, sizeof(word), stdin); // قراءة السطر بالكامل

    // إزالة حرف السطر الجديد \n إن وجد
    word[strcspn(word, "\n")] = 0;

    printf("in binary code : ");
    toBinary(word);

    return 0;
}
