#include <stdio.h>

struct student
{
    int rollno;
    char Name[20];
    int age;
};

void main(){
    int n;
    FILE *sawlown;
    sawlown = fopen("salon.dat","wb");

    printf("Enter the total number of students\n");
    scanf("%d",&n);
    struct student s[n];
    for(int i =0;i<n;i++){
        printf("Enter Name, Roll No. and Age for the student no. %d \n",i);
        scanf("%s%d%d",&s[i].Name,&s[i].rollno,&s[i].age);
        fprintf(sawlown,"Name = %-10s Roll No. = %2d Age = %2d \n",s[i].Name,s[i].rollno,s[i].age); 
    }
    fclose(sawlown);
    char ch;
    sawlown = fopen("salon.dat","rb");
    while(!feof(sawlown)){
        ch = fgetc(sawlown);
        putchar(ch);
    }
    fclose(sawlown);
}