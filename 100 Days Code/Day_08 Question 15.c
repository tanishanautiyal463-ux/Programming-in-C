// WAP TO INPUT A CH AND CHECK WHETHER IT IS AN UPPERCASE ALPHABET , LOWERCASE ALPHABET , DIGIT, OR SPECIAL CHAARACTER..

#include<stdio.h>
int main ()
{
	char ch;
	printf("Enter a Character : ");
	scanf("%c", &ch);
	
	if( ch >= 'A' && ch <= 'Z'){
		printf("%c is an UpperCase Alphabet \n", ch);
	}
	else if ( ch >= 'a' && ch <= 'z')
	{
		printf("%c is a LowerCase Alphabet\n", ch);
	}
	else if ( ch >= '0' && ch <= '9')
	{
		printf("%c is a digit");
	}
	else
	{
		printf("%c is a special Character\n", ch);
	}
	return 0;
}
