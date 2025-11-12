#include <stdio.h>
#include <string.h>

int main(){
   char str[] = "Hello World";
   char ch;
   int count = 0;
   printf("The declared string is: %s\n", str);
   printf("Enter any character :");
   scanf("%c", &ch);
   for (int i = 0; i < strlen(str); i++) {
       	if (str[i] == ch) {
       		count++;
       	}
   }
   printf("Character '%c'appear %d number of times in the sequence");
   return 0;
}
