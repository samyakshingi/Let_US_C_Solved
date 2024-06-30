// Create a structure called student that can contain data given below:
// Roll number, Name, Department, Course, Year of joining
// Assume that there are not more than 450 students in the college.
// (1) Write a function to print names of all students who joined in a 
// particular year.
// (2) Write a function to print the data of a student whose roll 
// number is received by the function.

#include<stdio.h>
struct student{
    int rn;
    char name[20];
    char dept[20];
    char course[20];\
    int year;
};
struct student s[450];
int setData();
void NameByYear(int );
void DataByRoll(int );

int main(){
    setData();
    int year,roll;
    printf("Enter year to find data: ");
    scanf("%d",&year);
    NameByYear(year);
    printf("Enter Roll No. find data: ");
    scanf("%d",&roll);
    DataByRoll(roll);    

    return 0;
}

int setData(){
    int i, cnt;
    for(i=0;i<450;i++){
        printf("Enter Roll No(Enter 0 to exit): ");
        scanf("%d",&s[i].rn);
        if(s[i].rn==0){
            break;
        }
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter Department: ");
        scanf("%s",s[i].dept);
        printf("Enter Course: ");
        scanf("%s",s[i].course);
        printf("Enter Year of joining: ");
        scanf("%d",&s[i].year);
        cnt++;
    }
    return cnt;
}

void NameByYear(int year){
    int i;
    for(i=0;i<450;i++){
        if(s[i].year==year){
            printf("Name: %s\n",s[i].name);
        }
    }
}

void DataByRoll(int roll){
    int i;
    for(i=0;i<450;i++){
        if(s[i].rn==roll){
            printf("Name: %s\n",s[i].name);
        }
    }
}