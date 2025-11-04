/*
 * Lab 3, Task 3
 * Student Name: [İsmini Yaz]
 * Student ID: [Numaranı Yaz]
 *
 * Manual string handling:
 *   - count string length (without using strlen)
 *   - copy string from src to dest (without using strcpy)
 *
 * Rules:
 *   - Do not use <string.h>
 *   - Use loops or pointer arithmetic
 *
 * Example:
 *   char text[] = "hello";
 *   int len = my_strlen(text); // 5
 *   char buffer[100];
 *   my_strcpy(buffer, text);
 *   printf("%s\n", buffer); // hello
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    char text[] = "hello";
    
    int len = my_strlen(text);
    printf("Length: %d\n", len);

    char buffer[100];
    my_strcpy(buffer, text);
    printf("Copied string: %s\n", buffer);

    return 0;
}

// Karakter dizisinin uzunluğunu döndür
int my_strlen(const char *str) {
    int len = 0;
    
    // str[len] 'null' karakteri ('\0') olmadığı sürece
    // sayacı (len) artırarak döngüye devam et.
    while (str[len] != '\0') {
        len++;
    }
    
    // Döngü bittiğinde, len bize karakter sayısını (uzunluğu) verir.
    return len;
}

// src dizisini dest'e kopyala
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    
    // Kaynak (src) dizedeki karakter '\0' olmadığı sürece kopyala.
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    
    // Döngü bittikten sonra, kopyalanan dizeyi (dest)
    // sonlandırmak için 'null' karakterini en sona ekle.
    // Bu çok önemlidir!
    dest[i] = '\0';
}
