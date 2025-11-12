#include <stdio.h>
#include <string.h>

int main(){
char str[1000];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("The string just entered is: %s\n", str);
    printf("The length of the string is: %d\n", (int)strlen(str));
	return 0;
}
