//Example:String sort
#include<stdio.h>
#include<string.h>
#define limmite 5
char*sort(char*);
int main(void)
{
	char *ptr[limmite];
	char *after[limmite];
	int count;
	puts("Please enter some sentence.I will help you sort them.\n");
	for (count = 0; count < limmite; count++)
		gets(ptr[count]);
	after[0] = sort(ptr);
	while (count--)
		puts(after[count]);
	return 0;
}
char*sort(char*ptr)
{
	char*temp;
	int top,seat,count;
	for(seat =0; seat<limmite-1; seat++)
		for(count=1,top=0;count<=limmite;count++)
			if (strcmp(ptr[count], ptr[top]))
			{
				temp = ptr[count];
				ptr[top] = ptr[count];
				ptr[count] = temp;
			}
	return ptr;
}