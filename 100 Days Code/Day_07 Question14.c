//WAP TO INPUT A CHARACTER AND CHECK WHETHER IT IS A VOWEL OR CONSONENT USING IF ELSE....

#include<stdio.h>
int main ()
{
	char ch;
	printf("Enter a Character : ");
	scanf("%c", &ch);
	
	if(( ch >= 'a' || ch <= 'z') || ch <='A' || ch <= 'Z')
	{
		if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
		ch == 'A' || ch == 'E' || ch =='I' || ch== 'O' || ch =='U')
		printf(" %c is Vowel\n", ch);
		else 
		printf("%c is consonent \n", ch);
	}
	else 
	printf("Entered Character is not an alphabet ", ch);
	return 0;
}
