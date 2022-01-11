#include<stdio.h>
#include<iostream>

using namespace std;

struct Student{
    char roll[10];
    char name[25];
    char dept[25];
    char address[50];
}s1;

int main(void){

    cout<<"Enter name of Student 1 :";
    cin>>s1.name;
    cout<<"Enter Roll No of Student 1 :";
    cin>>s1.roll;
    cout<<"Enter Department :";
    cin>>s1.dept;
    cout<<"Enter Address :";
    cin>>s1.address;

    cout<<"\nThe following are the details of Student 1 :\n";
    printf("Name: %s\nRoll: %s\nDepartment: %s\nAddress: %s\n",s1.name,s1.roll,s1.dept,s1.address);
    return 0;
}