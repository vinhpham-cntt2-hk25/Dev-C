 #include <stdio.h>
 #include <string.h>
 
 int main(){
    char str[] = "Hello World";
    printf("The declared string is :%s\n");
    printf("The characters in the string are:");
    for (int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
        }
    return 0;
 }
