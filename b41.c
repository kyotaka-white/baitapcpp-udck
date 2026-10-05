#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SongNode {
    int maBai;             
    char tenBai[50];       
    char caSi[50];         
    int thoiLuong;         
    struct SongNode *next;
} SongNode;

typedef struct {
    SongNode *head;        
    int soBaiHat;          
} Playlist;

void initPlaylist(Playlist *pl) {
    pl->head = NULL;
    pl->soBaiHat = 0;
}

SongNode* createNode(int maBai, const char *tenBai, const char *caSi, int thoiLuong) {
    SongNode *newNode = (SongNode*)malloc(sizeof(SongNode));
    newNode->maBai = maBai;
    strcpy(newNode->tenBai, tenBai);
    strcpy(newNode->caSi, caSi);
    newNode->thoiLuong = thoiLuong;
    newNode->next = NULL;
    return newNode;
}

void insertHead(Playlist *pl, SongNode *newNode) {
    newNode->next = pl->head;
    pl->head = newNode;
    pl->soBaiHat++;
}

void insertTail(Playlist *pl, SongNode *newNode) {
    if (pl->head == NULL) {
        pl->head = newNode;
    } else {
        SongNode *temp = pl->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    pl->soBaiHat++;
}

void insertAfter(Playlist *pl, int k, SongNode *newNode) {
    SongNode *p = pl->head;
    while (p != NULL && p->maBai != k) {
        p = p->next;
    }
    if (p != NULL) {
        newNode->next = p->next;
        p->next = newNode;
        pl->soBaiHat++;
    } else {
        printf("Khong tim thay bai hat co ma %d de chen sau!\n", k);
        free(newNode);
    }
}

void deleteByValue(Playlist *pl, int k) {
    SongNode *p = pl->head;
    SongNode *prev = NULL;

    while (p != NULL && p->maBai != k) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) return; 

    if (prev == NULL) { 
        pl->head = p->next;
    } else { 
        prev->next = p->next;
    }
    free(p);
    pl->soBaiHat--;
}

void searchSong(Playlist *pl, char keyword[]) {
    SongNode *p = pl->head;
    int found = 0;
    printf("Ket qua tim kiem cho '%s':\n", keyword);
    while (p != NULL) {
        if (strstr(p->tenBai, keyword) != NULL || strstr(p->caSi, keyword) != NULL) {
            printf("  [%d] %s - %s (%d:%02d)\n", 
                   p->maBai, p->tenBai, p->caSi, p->thoiLuong / 60, p->thoiLuong % 60);
            found = 1;
        }
        p = p->next;
    }
    if (!found) printf("  Khong tim thay!\n");
}

void displayPlaylist(Playlist *pl) {
    SongNode *p = pl->head;
    int tongThoiLuong = 0;
    
    printf("\n--- DANH SACH PLAYLIST (%d bai) ---\n", pl->soBaiHat);
    while (p != NULL) {
        printf("[%d] %s - %s (%d:%02d)\n", 
               p->maBai, p->tenBai, p->caSi, p->thoiLuong / 60, p->thoiLuong % 60);
        tongThoiLuong += p->thoiLuong;
        p = p->next;
    }
    printf(">> Tong thoi luong: %d:%02d\n", tongThoiLuong / 60, tongThoiLuong % 60);
}

void reversePlaylist(Playlist *pl) {
    SongNode *prev = NULL, *curr = pl->head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    pl->head = prev;
    printf("\n>> Da dao nguoc playlist!\n");
}

void moveSong(Playlist *pl, int i, int j) {
    if (i == j || i < 1 || j < 1 || i > pl->soBaiHat) return;

    SongNode *curr = pl->head, *prevI = NULL;
    int pos = 1;
    
    while (curr != NULL && pos < i) {
        prevI = curr;
        curr = curr->next;
        pos++;
    }
    if (curr == NULL) return; 

    if (prevI == NULL) pl->head = curr->next;
    else prevI->next = curr->next;

    if (j == 1) {
        curr->next = pl->head;
        pl->head = curr;
    } else {
        SongNode *q = pl->head;
        pos = 1;
        while (q != NULL && q->next != NULL && pos < j - 1) {
            q = q->next;
            pos++;
        }
        curr->next = q->next;
        q->next = curr;
    }
    printf("\n>> Da di chuyen bai hat tu vi tri %d sang vi tri %d.\n", i, j);
}

int main() {
    Playlist myPlaylist;
    initPlaylist(&myPlaylist);

    insertTail(&myPlaylist, createNode(101, "Bo Xi Bo", "Hoang Thuy Linh", 195)); 
    insertTail(&myPlaylist, createNode(102, "See Tinh", "Hoang Thuy Linh", 185)); 
    insertHead(&myPlaylist, createNode(103, "Waiting For You", "MONO", 265));     

    insertAfter(&myPlaylist, 101, createNode(104, "Chuyen Doi Ta", "Emcee L", 210)); 

    displayPlaylist(&myPlaylist);

    printf("\n>> Xoa bai hat co ma 102...");
    deleteByValue(&myPlaylist, 102);
    displayPlaylist(&myPlaylist);

    printf("\n");
    searchSong(&myPlaylist, "Hoang");

    reversePlaylist(&myPlaylist);
    displayPlaylist(&myPlaylist);

    moveSong(&myPlaylist, 3, 1);
    displayPlaylist(&myPlaylist);

    return 0;
}