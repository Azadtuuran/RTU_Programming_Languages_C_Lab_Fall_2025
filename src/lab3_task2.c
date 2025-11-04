/*
 * Lab 3, Task 2
 * Student Name: [İsmini Yaz]
 * Student ID: [Numaranı Yaz]
 *
 * Pointers as function parameters:
 *   - swap values of two integers
 *   - modify integer value by doubling it
 *
 * Rules:
 *   - Use pointers to modify values in place.
 *   - No return values, only pointer parameters.
 *
 * Example:
 *   int a = 3, b = 7;
 *   swap(&a, &b); // a=7, b=3
 *   modify_value(&a); // a=14
 */

#include <stdio.h>

// Function prototypes
void swap(int *x, int *y);
void modify_value(int *x);

int main(void) {
    int a = 3, b = 7;

    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    modify_value(&a);
    printf("After modify_value: a=%d\n", a);

    return 0;
}

// İki tam sayının değerlerini yer değiştir
void swap(int *x, int *y) {
    // *x, x'in gösterdiği adresteki *değeri* alır
    // *y, y'nin gösterdiği adresteki *değeri* alır
    
    int temp = *x; // x'in gösterdiği değeri (a'nın değeri) geçici değişkene kaydet
    *x = *y;       // y'nin gösterdiği değeri (b'nin değeri) x'in gösterdiği yere (a) ata
    *y = temp;     // Geçici değişkendeki (eski a'nın değeri) y'nin gösterdiği yere (b) ata
}

// Değeri 2 ile çarp
void modify_value(int *x) {
    // x'in gösterdiği adresteki değeri al, 2 ile çarp ve sonucu aynı adrese geri yaz.
    *x = *x * 2;
    // Veya daha kısa haliyle:
    // *x *= 2;
}
