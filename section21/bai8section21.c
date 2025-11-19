#include <stdio.h>
#include <string.h>

struct Product {
    char id[20];
    char name[100];
    float importPrice;
    float sellPrice;
    int quantity;
};

void inputProductList(struct Product products[], int *size) {
    printf("Nhap so luong san pham ban dau: ");
    scanf("%d", size);
    getchar();

    for (int i = 0; i < *size; i++) {
        printf("\nNhap san pham %d:\n", i + 1);

        printf("Ma san pham: ");
        fgets(products[i].id, sizeof(products[i].id), stdin);

        printf("Ten san pham: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);

        printf("Gia nhap: ");
        scanf("%f", &products[i].importPrice);

        printf("Gia ban: ");
        scanf("%f", &products[i].sellPrice);

        printf("So luong: ");
        scanf("%d", &products[i].quantity);
        getchar();
    }
}

void displayProducts(struct Product products[], int size) {
    printf("\n===== DANH SACH SAN PHAM =====\n");
    for (int i = 0; i < size; i++) {
        printf("\nSan pham %d:\n", i + 1);
        printf("Ma: %s", products[i].id);
        printf("Ten: %s", products[i].name);
        printf("Gia nhap: %.2f\n", products[i].importPrice);
        printf("Gia ban: %.2f\n", products[i].sellPrice);
        printf("So luong: %d\n", products[i].quantity);
    }
}

int findByID(struct Product products[], int size, char idSearch[]) {
    for (int i = 0; i < size; i++) {
        if (strncmp(products[i].id, idSearch, strlen(idSearch) - 1) == 0)
            return i;
    }
    return -1;
}

void importProduct(struct Product products[], int *size, float *revenue) {
    char idInput[20];
    struct Product temp;

    getchar();
    printf("Nhap ma san pham: ");
    fgets(idInput, sizeof(idInput), stdin);

    int pos = findByID(products, *size, idInput);

    if (pos != -1) {
        int addQty;
        printf("San pham da ton tai. Nhap so luong can them: ");
        scanf("%d", &addQty);

        products[pos].quantity += addQty;

        *revenue -= addQty * products[pos].importPrice;
        printf("Da nhap them. Doanh thu giam: %.2f\n", addQty * products[pos].importPrice);

    } else {
        strcpy(temp.id, idInput);

        printf("Ten san pham: ");
        fgets(temp.name, sizeof(temp.name), stdin);

        printf("Gia nhap: ");
        scanf("%f", &temp.importPrice);

        printf("Gia ban: ");
        scanf("%f", &temp.sellPrice);

        printf("So luong: ");
        scanf("%d", &temp.quantity);

        products[*size] = temp;
        (*size)++;

        *revenue -= temp.quantity * temp.importPrice;
        printf("Da them san pham moi. Doanh thu giam: %.2f\n", temp.quantity * temp.importPrice);
    }
}

void updateProduct(struct Product products[], int size) {
    char idInput[20];
    getchar();

    printf("Nhap ma san pham muon cap nhat: ");
    fgets(idInput, sizeof(idInput), stdin);

    int pos = findByID(products, size, idInput);

    if (pos == -1) {
        printf("Khong tim thay san pham!\n");
        return;
    }

    printf("Ten moi: ");
    fgets(products[pos].name, sizeof(products[pos].name), stdin);

    printf("Gia nhap moi: ");
    scanf("%f", &products[pos].importPrice);

    printf("Gia ban moi: ");
    scanf("%f", &products[pos].sellPrice);

    printf("So luong moi: ");
    scanf("%d", &products[pos].quantity);

    printf("Cap nhat thanh cong!\n");
}

void sortProducts(struct Product products[], int size) {
    int choice;
    printf("1. Sap xep tang theo gia ban\n");
    printf("2. Sap xep giam theo gia ban\n");
    printf("Chon: ");
    scanf("%d", &choice);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int cond = (choice == 1 && products[i].sellPrice > products[j].sellPrice) ||
                       (choice == 2 && products[i].sellPrice < products[j].sellPrice);

            if (cond) {
                struct Product temp = products[i];
                products[i] = products[j];
                products[j] = temp;
            }
        }
    }

    printf("Da sap xep!\n");
}

void searchProduct(struct Product products[], int size) {
    char nameSearch[100];
    getchar();

    printf("Nhap ten san pham can tim: ");
    fgets(nameSearch, sizeof(nameSearch), stdin);

    for (int i = 0; i < size; i++) {
        if (strstr(products[i].name, nameSearch) != NULL) {
            printf("\nTim thay san pham:\n");
            printf("Ma: %s", products[i].id);
            printf("Ten: %s", products[i].name);
            printf("Gia nhap: %.2f\n", products[i].importPrice);
            printf("Gia ban: %.2f\n", products[i].sellPrice);
            printf("So luong: %d\n", products[i].quantity);
            return;
        }
    }

    printf("Khong tim thay san pham!\n");
}

void sellProduct(struct Product products[], int size, float *revenue) {
    char idInput[20];
    int sellQty;

    getchar();
    printf("Nhap ma san pham can ban: ");
    fgets(idInput, sizeof(idInput), stdin);

    int pos = findByID(products, size, idInput);

    if (pos == -1) {
        printf("Khong tim thay san pham!\n");
        return;
    }

    if (products[pos].quantity == 0) {
        printf("Het hang!\n");
        return;
    }

    printf("Nhap so luong can ban: ");
    scanf("%d", &sellQty);

    if (sellQty > products[pos].quantity) {
        printf("Khong du hang!\n");
        return;
    }

    products[pos].quantity -= sellQty;

    float money = sellQty * products[pos].sellPrice;
    *revenue += money;

    printf("Ban thanh cong! Doanh thu tang: %.2f\n", money);
}

int main() {
    struct Product products[100];
    int size = 0;
    float revenue = 0;
    int choice;

    while (1) {
        printf("\n=========== MENU ===========\n");
        printf("1. Nhap danh sach san pham ban dau\n");
        printf("2. Hien thi danh sach san pham\n");
        printf("3. Nhap them san pham\n");
        printf("4. Cap nhat san pham\n");
        printf("5. Sap xep san pham theo gia\n");
        printf("6. Tim kiem san pham\n");
        printf("7. Ban san pham\n");
        printf("8. Xem doanh thu\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputProductList(products, &size); break;
            case 2: displayProducts(products, size); break;
            case 3: importProduct(products, &size, &revenue); break;
            case 4: updateProduct(products, size); break;
            case 5: sortProducts(products, size); break;
            case 6: searchProduct(products, size); break;
            case 7: sellProduct(products, size, &revenue); break;
            case 8: printf("Doanh thu hien tai: %.2f\n", revenue); break;
            case 0: return 0;
            default: printf("Lua chon khong hop le!\n");
        }
    }
}

