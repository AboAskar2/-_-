#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);  // الانتقال إلى نهاية الملف
    long size = ftell(file);   // الحصول على حجم الملف
    printf("File size: %ld bytes\n", size);

    fclose(file);
    return 0;
}
