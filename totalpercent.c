#include<stdio.h>
int main(){
    float sub1 , sub2, sub3, sub4, sub5;
    float percentage;
    float total_marks;
    int max_marks = 500;
    printf("enter the marks of the student");
    scanf("%f %f %f %f %f",&sub1, &sub2,&sub3,&sub4, &sub5);
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total_marks*100)/max_marks;
    printf("%f",total_marks);
    printf("\n");
    printf("%f", percentage);

    




}