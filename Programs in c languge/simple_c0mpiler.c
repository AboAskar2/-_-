#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#define MAX_ROWS 10
#define MAX_COLS 20

int main() {
    char input[100];
    char array[MAX_ROWS][MAX_COLS];
    int rows = 0;
    int i = 0, j = 0;
    char ch;
    
    // طلب الإدخال  باستخدام getch
    printf("input text: ");
    ch= getch();
 // إيقاف عند وتجاوز حجم المصفوفة Enter
    while (ch != '\r' && i < sizeof(input) - 1) {
        ch= getch();
        if (ch == '\b') { //  زر المسح
            if (i > 0) {
                printf("\b \b");
                i--;
            }
        } else {
            input[i++] = ch;//array خزنه بل 
            printf("%c", ch); // طباعة الحرف المدخل
        }
    }
    input[i] = '\0'; // إنهاء النص
    printf("\n");
    
    i = 0; // إعادة تعيين   العداد لاستخدامه في تقسيم النص
    
    // تقسيم النص إلى مصفوفة 
    while (input[i] != '\0' && rows < MAX_ROWS) {
        if (input[i] != ' ') {
            array[rows][j++] = input[i];
        } else {
            array[rows][j] = '\0'; // إنهاء النص
            rows++;
            j = 0; // تصفير كولوم
        }
        i++;
    }
    array[rows][j] = '\0';    // إنهاء آخر كلمة
    rows++;
    

   /*int numCount = 0;
    for (i = 0; i < rows; i++) {
        int isNumber = 1;
        for (j = 0; array[i][j] != '\0'; j++) {
            if (!isdigit(array[i][j])) {        // إذا وجد حرف غير رقمي، فهو ليس رقمًا
                isNumber = 0;
                break;
            }
        }
        if (isNumber) {
            numbers[numCount++] = atoi(array[i]);    // تحويل النص إلى رقم وتخزينه
        }
    }
        
     // طباعة الأرقام المحولة
    printf("\nالأرقام المحولة إلى أعداد صحيحة:\n");
    for (i = 0; i < numCount; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // التحقق مما إذا كان الإدخال يحتوي على الأمر "جمع" وأرقام
    if (rows > 2 && strcmp(array[0], "add") == 0 && numCount >= 2) {
        printf("result: %d\n", numbers[0] + numbers[1]);
    } else {
        printf("invlid input:\n");
    }*/ 

    // طباعة كل سطر بعد الإدخال باستخدام puts
    printf("\nthe text in array\n");
    for (i = 0; i < rows; i++) {
        puts(array[i]);
    }
    
    // التحقق مما إذا كان الإدخال يحتوي على الأمر add" وأرقام

    if (rows > 2 && strcmp(array[0], "add") == 0) {
        int num1 = atoi(array[1]);
        int num2 = atoi(array[2]);
        printf("result  %d\n", num1 + num2);
    } else {
        printf("invalid input!!!!.\n");
    }
    
    return 0;
}
