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
	for (count = 0; count < limmite&&gets(ptr[count])&&ptr[count][0]!='\n'; count++)
		after[count]=ptr[count];
	sort(after);
	for (count = 0; count < limmite; count++)
		puts(after[count]);
	return 0;
}
void sort(char*after[])
{
	char*temp;
	int top, seek;
	for(top =0; top<limmite-1; top++)
		for(seek=top+1;seek<limmite;seek++)
			if (strcmp(after[top], after[seek])>0)//所以说为什么if (strcmp(after[top], after[seek]))无效？
			{
				temp = after[top];
				after[top] = after[seek];
				after[seek] = temp;
			}
}