#include <stdio.h>

struct student{
    char name[20];
    int rollno;
    float marks;
};

void decreasingmarks (struct student *);

void main(){
    struct student s[3];
    for(int i =0;i<3;i++){
        printf("Enter name, rollno and marks of student no.%d",i);
        scanf("%s %d %f",&s[i].name,&s[i].rollno,&s[i].marks);
    }
    decreasingmarks(s);

}

void decreasingmarks (struct student *ptr){
    struct student temp;
    for(int i=0;i<3;i++){
        for(int j= i+1;j<3;j++){
            if( (ptr+i)->marks < (ptr+j)->marks){
                temp = *(ptr +i);
                *(ptr + i) = *(ptr+j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("The order of roll no in decreasing marks is \n");

    for(int i=0;i<3;i++){
        printf("%d\n",(ptr+i)->rollno);   
    }

    printf("The student with highest marks is: %s",ptr->name);

}