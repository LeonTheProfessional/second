//Example:String sort
#include<stdio.h>
#include<string.h>
#define limmite 5
#define litter 80
void sort(char*[]);
int main(void)
{
	char ptr[limmite][litter];
	char *after[limmite];
	int count;
	puts("Please enter 5 sentence.I will help you sort them.");
	for (count = 0; count < limmite; count++)
		gets(ptr[count]);
	after[0] = ptr[0];
	sort(after);
	while (count--)
		puts(after[count]);
	return 0;
}
void sort(char*after[])
{
	char*temp;
	int top, seek;
	for(top =0; top<limmite-1; top++)
		for(seek=top+1;seek<=limmite;seek++)
			if (strcmp(after[seek], after[top]))
			{
				temp = after[seek];
				after[top] = after[seek];
				after[seek] = temp;
			}
}