//wap in C that takes a given string as input and
/* 
1.prints all prefixs
2.prints all suffixes
3.prints certain substring between some give range
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void suffix(char[]);
void prefix(char[]);
void substring(char[],int st,int end);
int main(){
	char word[50];
	int st,end;
	printf("\nEnter a string which you want to perform:\n");
	gets(word);
	printf("Suffix of %s:\n",word);
	suffix(word);
	printf("Prefix of %s:\n",word);
	prefix(word);
	printf("\nEnter you Range of Substring:");
	scanf("%d%d",&st,&end);
	substring(word,st,end);
	getch();
	return ;
	
}
void prefix(char word[])
{
	int len,i,j;
	len=strlen(word);
	for(i=len;i>0;i--)
	{
		for(j=0;j<i;j++){
			printf("%c",word[j]);
		}
		printf("\n");
	}
}
void suffix(char word[])
{
	int len,i,j;
	len=strlen(word);
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++){
			printf("%c",word[j]);
		}
		printf("\n");
	}
}
void substring(char word[],int st,int end)
{
	int i;
	for(i=st;i<end;i++)
	{
		printf("%c",word[i]);
	}
}