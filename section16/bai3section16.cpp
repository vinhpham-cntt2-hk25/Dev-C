#include <stdio.h>
#include <string.h>

int main(){
   char str[] = "Hello World";
   printf("Initial string :%s\n", str);
   printf("chain has been reversed :");
   for (int i = strlen(str) - 1; i >= 0; i--){
       printf("%c", str[i]);
   }
   return 0;
}
