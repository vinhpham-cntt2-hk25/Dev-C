#include <stdio.h>
#include <string.h>

struct Book {
    char id[20];
    char name[100];
    char author[50];
    float price;
    char category[50];
};

void nhapSach(struct Book books[], int *n) {
    printf("Nhap so luong sach: ");
    scanf("%d", n);
    getchar();

    for (int i = 0; i < *n; i++) {
        printf("\nNhap thong tin sach thu %d:\n", i + 1);

        printf("Ma sach: ");
        fgets(books[i].id, sizeof(books[i].id), stdin);

        printf("Ten sach: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);

        printf("Tac gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Gia tien: ");
        scanf("%f", &books[i].price);
        getchar();

        printf("The loai: ");
        fgets(books[i].category, sizeof(books[i].category), stdin);
    }
}

void hienThi(struct Book books[], int n) {
    printf("\n===== DANH SACH SACH =====\n");
    for (int i = 0; i < n; i++) {
        printf("Sach %d:\n", i + 1);
        printf("Ma sach: %s", books[i].id);
        printf("Ten sach: %s", books[i].name);
        printf("Tac gia: %s", books[i].author);
        printf("Gia: %.2f\n", books[i].price);
        printf("The loai: %s\n", books[i].category);
    }
}

void themSach(struct Book books[], int *n) {
    int pos;
    printf("Nhap vi tri muon them (0 - %d): ", *n);
    scanf("%d", &pos);
    getchar();

    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = *n; i > pos; i--) {
        books[i] = books[i-1];
    }

    printf("Nhap thong tin sach moi:\n");

    printf("Ma sach: ");
    fgets(books[pos].id, sizeof(books[pos].id), stdin);

    printf("Ten sach: ");
    fgets(books[pos].name, sizeof(books[pos].name), stdin);

    printf("Tac gia: ");
    fgets(books[pos].author, sizeof(books[pos].author), stdin);

    printf("Gia tien: ");
    scanf("%f", &books[pos].price);
    getchar();

    printf("The loai: ");
    fgets(books[pos].category, sizeof(books[pos].category), stdin);

    (*n)++;
}

void xoaSachTheoMa(struct Book books[], int *n) {
    char idDel[20];
    printf("Nhap ma sach can xoa: ");
    getchar();
    fgets(idDel, sizeof(idDel), stdin);

    for (int i = 0; i < *n; i++) {
        if (strncmp(books[i].id, idDel, strlen(idDel)-1) == 0) {
            for (int j = i; j < *n - 1; j++) {
                books[j] = books[j + 1];
            }
            (*n)--;
            printf("Da xoa sach!\n");
            return;
        }
    }

    printf("Khong tim thay sach!\n");
}

void capNhatSach(struct Book books[], int n) {
    char idUpdate[20];
    printf("Nhap ma sach muon cap nhat: ");
    getchar();
    fgets(idUpdate, sizeof(idUpdate), stdin);

    for (int i = 0; i < n; i++) {
        if (strncmp(books[i].id, idUpdate, strlen(idUpdate)-1) == 0) {

            printf("Cap nhat thong tin sach:\n");

            printf("Ten sach: ");
            fgets(books[i].name, sizeof(books[i].name), stdin);

            printf("Tac gia: ");
            fgets(books[i].author, sizeof(books[i].author), stdin);

            printf("Gia tien: ");
            scanf("%f", &books[i].price);
            getchar();

            printf("The loai: ");
            fgets(books[i].category, sizeof(books[i].category), stdin);

            printf("Cap nhat thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay sach!\n");
}

void sapXepSach(struct Book books[], int n) {
    int choice;
    printf("1. Sap xep tang\n");
    printf("2. Sap xep giam\n");
    printf("Chon: ");
    scanf("%d", &choice);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int dk = (choice == 1 && books[i].price > books[j].price) ||
                     (choice == 2 && books[i].price < books[j].price);

            if (dk) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("Da sap xep xong!\n");
}

void timKiemTheoTen(struct Book books[], int n) {
    char nameSearch[100];
    printf("Nhap ten sach muon tim: ");
    getchar();
    fgets(nameSearch, sizeof(nameSearch), stdin);

    for (int i = 0; i < n; i++) {
        if (strstr(books[i].name, nameSearch) != NULL) {
            printf("\nTim thay sach:\n");
            printf("Ma sach: %s", books[i].id);
            printf("Ten sach: %s", books[i].name);
            printf("Tac gia: %s", books[i].author);
            printf("Gia: %.2f\n", books[i].price);
            printf("The loai: %s\n", books[i].category);
            return;
        }
    }

    printf("Khong tim thay sach!\n");
}

int main() {
    struct Book books[100];
    int n = 0;
    int choice;

    while (1) {
        printf("\n========= MENU =========\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma\n");
        printf("5. Cap nhat sach theo ma\n");
        printf("6. Sap xep sach theo gia\n");
        printf("7. Tim kiem sach theo ten\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: nhapSach(books, &n); break;
            case 2: hienThi(books, n); break;
            case 3: themSach(books, &n); break;
            case 4: xoaSachTheoMa(books, &n); break;
            case 5: capNhatSach(books, n); break;
            case 6: sapXepSach(books, n); break;
            case 7: timKiemTheoTen(books, n); break;
            case 0: return 0;
            default: printf("Lua chon khong hop le!\n");
        }
    }
}

