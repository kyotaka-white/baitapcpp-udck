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

void display(List L) {
    Node* temp = L.head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int sumList(List L) {
    int sum = 0;
    Node* temp = L.head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int findMax(List L) {
    if (L.head == NULL) return 0;
    int max = L.head->data;
    Node* temp = L.head->next;
    while (temp != NULL) {
        if (temp->data > max) {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

int findMin(List L) {
    if (L.head == NULL) return 0;
    int min = L.head->data;
    Node* temp = L.head->next;
    while (temp != NULL) {
        if (temp->data < min) {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

void countEvenOdd(List L, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    Node* temp = L.head;
    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
        temp = temp->next;
    }
}

void removeDuplicates(List *L) {
    if (L->head == NULL) return;

    Node *current = L->head;
    while (current != NULL) {
        Node *runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                Node *duplicate = runner->next;
                runner->next = duplicate->next;
                free(duplicate);
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void insertSorted(List *L, int x) {
    Node* p = createNode(x);
    if (p == NULL) return;

    if (L->head == NULL || L->head->data >= x) {
        p->next = L->head;
        L->head = p;
        return;
    }

    Node* current = L->head;
    while (current->next != NULL && current->next->data < x) {
        current = current->next;
    }
    
    p->next = current->next;
    current->next = p;
}

int main() {
    List L;
    init(&L);

    printf("--- TEST CAC HAM TINH TOAN VA XOA TRUNG ---\n");
    insertTail(&L, 10);
    insertTail(&L, 5);
    insertTail(&L, 20);
    insertTail(&L, 10);
    insertTail(&L, 7);
    insertTail(&L, 5);

    printf("Danh sach ban dau: \n");
    display(L);

    printf("\n1. Tong cac phan tu: %d\n", sumList(L));
    printf("2. Gia tri lon nhat: %d\n", findMax(L));
    printf("3. Gia tri nho nhat: %d\n", findMin(L));

    int chan, le;
    countEvenOdd(L, &chan, &le);
    printf("4. So phan tu chan: %d, le: %d\n", chan, le);

    printf("\n5. Xoa cac node trung nhau:\n");
    removeDuplicates(&L);
    display(L);

    printf("\n--- TEST HAM CHEN VAO DANH SACH DA SAP XEP ---\n");
    List L_Sorted;
    init(&L_Sorted);
    
    insertTail(&L_Sorted, 2);
    insertTail(&L_Sorted, 5);
    insertTail(&L_Sorted, 9);
    insertTail(&L_Sorted, 14);
    
    printf("Danh sach sap xep ban dau: \n");
    display(L_Sorted);

    printf("\n6. Chen x = 7 vao danh sach tren:\n");
    insertSorted(&L_Sorted, 7);
    display(L_Sorted);

    printf("\n   Chen x = 1:\n");
    insertSorted(&L_Sorted, 1);
    display(L_Sorted);

    printf("\n   Chen x = 20:\n");
    insertSorted(&L_Sorted, 20);
    display(L_Sorted);

    return 0;
}
