#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
} List;

void init(List *L) {
    L->head = NULL;
}

Node* createNode(int x) {
    Node* p = (Node*)malloc(sizeof(Node));
    if (p != NULL) {
        p->data = x;
        p->next = NULL;
    }
    return p;
}

void insertHead(List *L, int x) {
    Node* p = createNode(x);
    if (p == NULL) return;
    p->next = L->head;
    L->head = p;
}

void insertTail(List *L, int x) {
    Node* p = createNode(x);
    if (p == NULL) return;
    
    if (L->head == NULL) {
        L->head = p;
        return;
    }
    
    Node* temp = L->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
}

void deleteHead(List *L) {
    if (L->head == NULL) return;
    Node* temp = L->head;
    L->head = L->head->next;
    free(temp);
}

void deleteTail(List *L) {
    if (L->head == NULL) return;
    
    if (L->head->next == NULL) {
        deleteHead(L);
        return;
    }
    
    Node* temp = L->head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteByValue(List *L, int x) {
    if (L->head == NULL) return;
    
    if (L->head->data == x) {
        deleteHead(L);
        return;
    }
    
    Node* temp = L->head;
    while (temp->next != NULL && temp->next->data != x) {
        temp = temp->next;
    }
    
    if (temp->next != NULL) {
        Node* delNode = temp->next;
        temp->next = delNode->next;
        free(delNode);
    }
}

Node* search(List L, int x) {
    Node* temp = L.head;
    while (temp != NULL) {
        if (temp->data == x) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void display(List L) {
    Node* temp = L.head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int countNodes(List L) {
    int count = 0;
    Node* temp = L.head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    List L;
    init(&L);

    printf("1. Them vao dau (10, 20): \n");
    insertHead(&L, 10);
    insertHead(&L, 20);
    display(L);

    printf("\n2. Them vao cuoi (30, 40): \n");
    insertTail(&L, 30);
    insertTail(&L, 40);
    display(L);

    printf("\n3. So luong node hien tai: %d\n", countNodes(L));

    printf("\n4. Xoa node dau: \n");
    deleteHead(&L);
    display(L);

    printf("\n5. Xoa node cuoi: \n");
    deleteTail(&L);
    display(L);

    printf("\n6. Them phan tu de test xoa theo gia tri (Them 50 vao cuoi): \n");
    insertTail(&L, 50);
    display(L);
    
    printf("\n   Xoa node co gia tri 30: \n");
    deleteByValue(&L, 30);
    display(L);

    printf("\n7. Tim kiem node co gia tri 50: \n");
    Node* kq = search(L, 50);
    if (kq != NULL) {
        printf("   -> Tim thay %d trong danh sach!\n", kq->data);
    } else {
        printf("   -> Khong tim thay!\n");
    }

    return 0;
}
