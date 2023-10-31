/*Saya Arya Aydin Margono NIM 2203484 mengerjakan
soal Tes Mesin 6 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"

int main(){
    stack S1, S2;
    createEmpty(&S1);
    createEmpty(&S2);
    
    buku temp[6];
    for(int i = 0; i < 6; i++){
        scanf("%s%d", temp[i].judul, &temp[i].harga);
    }

    printf("==========================\n");
    printStack(S1, 1);
    printf("\n");
    printStack(S2, 2);
    printf("==========================\n");
    push(temp[0], &S1);
    push(temp[1], &S2);
    push(temp[2], &S2);
    printStack(S1, 1);
    printf("\n");
    printStack(S2, 2);
    printf("==========================\n");
    pop(&S1);
    popMove(&S2, &S1);
    push(temp[3], &S1);
    push(temp[4], &S2);
    push(temp[5], &S1);
    pop(&S2);
    popMove(&S1, &S2);
    printStack(S1, 1);
    printf("\n");
    printStack(S2, 2);
    printf("==========================\n");

    return 0;
}