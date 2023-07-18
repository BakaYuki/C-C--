#include <stdio.h>

struct STUDENT
{
    int rollno;
    char Name[20];
    int age;
};

void main(){
    int n;
    FILE *MP;
    MP = fopen("mukesh.txt","ab");

    printf("Enter the total number of students\n");
    scanf("%d",&n);
    struct STUDENT s[n];
    for(int i =0;i<n;i++){
        printf("Enter Name, Roll No. and Age for the student no. %d \n",i);
        scanf("%s %d %d",&s[i].Name,&s[i].rollno,&s[i].age);
        fprintf(MP,"Name = %-15s Roll No. = %2d Age = %2d \n",s[i].Name,s[i].rollno,s[i].age); //not sure cause sir le sikako xaina yo command
        
    }
    fclose(MP);
    MP = fopen("mukesh.txt","rb");
    char ch;
    while(!feof(MP))
    {
        ch = fgetc(MP);
        putchar(ch);
    }
    fclose(MP);
}
