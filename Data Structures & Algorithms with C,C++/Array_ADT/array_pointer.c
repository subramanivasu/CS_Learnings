#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[26];
    char roll[20];
    int age;
};

int main()
{
    struct student *ptr;
    struct student person1;

    ptr = &person1;
    
    printf("Enter Name of Person 1: ");
    scanf("%s",person1.name);
    
    printf("Enter Age of Person 1 : ");
    scanf("%d",&person1.age);





    printf("Age %d, Name %s\n",ptr->age,ptr->name);
    
    return 0;
    }