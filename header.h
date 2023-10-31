/*Saya Arya Aydin Margono NIM 2203484 mengerjakan
soal Tes Mesin 6 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
    char judul[50];
    int harga;
}buku;

typedef struct elmt *alamatelmt;
typedef struct elmt{
    buku container;
    alamatelmt next;
}element;

typedef struct{
    element* top;
}stack;

void createEmpty(stack*);
int isEmpty(stack);
int countElement(stack);
void push(buku, stack*);
void pop(stack*);
void popMove(stack*, stack*);
void printStack(stack, int);