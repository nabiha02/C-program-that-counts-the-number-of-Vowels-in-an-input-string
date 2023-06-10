#include <stdio.h>


int main(void){

char str[100] , ch;

int i,vowels,others,words;

printf("Input your string : ");
gets(str);

i=vowels=words=others=0;

while((ch=str[i])!= '\0') {

if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I')

 vowels++;

 else

 others++;

 i++;
}

words++;

 printf("The number of vowels = %d\n", vowels);
 printf("Without vowels or we can write as others = %d\n", others);

}
