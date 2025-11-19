#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product products[5];
    float totalValue = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nhap thong tin san pham thu %d:\n", i + 1);

        printf("Ten san pham: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);

        printf("Gia: ");
        scanf("%f", &products[i].price);

        printf("So luong: ");
        scanf("%d", &products[i].quantity);

        getchar(); 

        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        totalValue += products[i].price * products[i].quantity;
    }

    printf("Tong gia tri tat ca san pham la: %.2f\n", totalValue);

    return 0;
}

