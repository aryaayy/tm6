/*Saya Arya Aydin Margono NIM 2203484 mengerjakan
soal Tes Mesin 6 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"

void createEmpty(stack *S){
    (*S).top = NULL;
}

int isEmpty(stack S){
    if(S.top == NULL){
        return 1;
    }
    return 0;
}

int countElement(stack S){
    int hasil = 0;
    if(S.top != NULL){
        element* cur = S.top;
        while(cur != NULL){
            hasil++;
            cur = cur->next;
        }
    }
    return hasil;
}

void push(buku new, stack *S){
    element* baru;
    baru = (element*) malloc (sizeof(element));
    baru->container = new;

    if((*S).top == NULL){
        baru->next = NULL;
    }
    else{
        baru->next = (*S).top;
    }
    (*S).top = baru;
    baru = NULL;
}

void pop(stack *S){
    if((*S).top != NULL){
        element *hapus = (*S).top;
        if(countElement(*S) == 1){
            (*S).top = NULL;
        }
        else{
            (*S).top = (*S).top->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
    else{
        printf("stack kosong\n");
    }
}

void popMove(stack *from, stack *to){
    if((*from).top != NULL){
        element* move = (*from).top;
        (*from).top = (*from).top->next;
        move->next = (*to).top;
        (*to).top = move;
        move = NULL;
    }
}

void printStack(stack S, int which){
    if(which == 1)
        printf("Buku di S1:\n");
    else
        printf("Buku di S2:\n");

    if(S.top != NULL){
        element* bantu = S.top;

        int i = 1;
        while(bantu != NULL){
            printf("%d. %s Rp.%d\n", i, bantu->container.judul, bantu->container.harga);
            
            bantu = bantu->next;
            i++;
        }
    }
    else{
        /* proses jika stack kosong */
        printf("- Kosong\n");
    }
}