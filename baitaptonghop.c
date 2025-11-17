#include <stdio.h>

#define MAX 100

void initArray(int arr[], int *n) {
    int i;

    printf("\n---------------------#1#------------------------\n");
    printf("Nhap so luong phan tu can khoi tao : ");
    scanf("%d", n);

    while (*n < 0 || *n > MAX) {
        printf("So luong khong hop le (0 - %d). Nhap lai: ", MAX);
        scanf("%d", n);
    }

    for (i = 0; i < *n; i++) {
        printf("\n----------------Phan tu %d-----------------------\n", i + 1);
        printf("Nhap gia tri phan tu : ");
        scanf("%d", &arr[i]);
    }

    printf("\n<<--- Nhap thanh cong %d phan tu vao mang --->>\n", *n);
    printf("\n---------------------###------------------------\n");
}

void displayArray(int arr[], int n) {
    int i;

    printf("\n---------------------#2#------------------------\n");
    printf("\n-------DANH SACH CAC PHAN TU TRONG MANG---------\n");

    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }
    printf("]\n");

    printf("---------------------###------------------------\n");
}

void insertAtPosition(int arr[], int *n) {
    int pos, value, i;

    printf("\n---------------------#3#------------------------\n");

    printf("Nhap vi tri can them phan tu : ");
    scanf("%d", &pos);

    if (pos < 0 || pos > *n || *n >= MAX) {
        printf("Vi tri khong hop le hoac mang da day!\n");
        return;
    }

    printf("Nhap gia tri can them tai vi tri %d : ", pos);
    scanf("%d", &value);

    for (i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;

    printf("\n<<--Them thanh cong so %d vao vi tri index %d-->>\n", value, pos);
    printf("---------------------###------------------------\n");
}

void deleteAtPosition(int arr[], int *n) {
    int pos, i;
    char c;

    printf("\n---------------------#4#------------------------\n");

    printf("Nhap vao vi tri can xoa phan tu : ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Ban co chac chan muon xoa phan tu nay khong (Y/N)?\n");
    scanf(" %c", &c);

    if (c == 'Y' || c == 'y') {
        for (i = pos; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("\n<<--Da xoa thanh cong phan tu tai vi tri %d!!-->>\n", pos);
    } else {
        printf("\nDa huy thao tac!\n");
    }

    printf("---------------------###------------------------\n");
}

void updateAtPosition(int arr[], int n) {
    int pos, value;

    printf("\n---------------------#5#------------------------\n");

    printf("Nhap vao vi tri phan tu can cap nhat : ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap vao gia tri moi (gia tri cu (%d)): ", arr[pos]);
    scanf("%d", &value);

    arr[pos] = value;

    printf("\n<<Da cap nhat thanh cong phan tu tai vi tri %d>>\n", pos);
    printf("---------------------###------------------------\n");
}

int main() {
    int arr[MAX], n = 0;
    int choice;

    while (1) {
        printf("\n+--- Chuong trinh quan ly danh sach so nguyen ---+\n");
        printf("|-------------------- MENU ----------------------|\n");
        printf("|1. Khoi tao mang ban dau                        |\n");
        printf("|2. Hien thi danh sach phan tu                   |\n");
        printf("|3. Chen them 1 so vao vi tri nhap vao           |\n");
        printf("|4. Xoa theo vi tri                              |\n");
        printf("|5. Cap nhat gia tri theo vi tri                 |\n");
        printf("|6. Thoat chuong trinh                           |\n");
        printf("+------------------------------------------------+\n");
        printf("->> Moi ban nhap chuc nang : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: initArray(arr, &n); break;
            case 2: displayArray(arr, n); break;
            case 3: insertAtPosition(arr, &n); break;
            case 4: deleteAtPosition(arr, &n); break;
            case 5: updateAtPosition(arr, n); break;
            case 6: return 0;
            default: printf("Chuc nang khong hop le!\n");
        }
    }
}
