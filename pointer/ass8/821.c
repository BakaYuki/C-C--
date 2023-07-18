#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

void main(){
    struct student{
        char name[20];
        int rollno;
        float mark;
        struct date dob;
    };
    struct student s[5];

    float sum =0;
    for(int i = 0;i<5;i++){
        printf("Enter name,roll no,mark and DOB for student no.%d \n",i);
        scanf("%s %d %f %d %d %d",&s[i].name,&s[i].rollno,&s[i].mark,&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        sum = sum + s[i].mark;
    }

    float average = sum/5;

    printf("Students with above average marks: \n")
    for(int i=0;i<5;i++){
        if(s[i].mark>average){
            printf("%s\n",s[i].name);
        }
    }

/*
    for(int i = 0;i<5;i++){
        printf("Enter name,roll no,mark and DOB for studen no.%d",i);
        printf("%s %d %0.2f %d %d %d",s[i].name,s[i].rollno,s[i].mark,s[i].dob.day,s[i].dob.month,s[i].dob.year);
    }
  */  
}