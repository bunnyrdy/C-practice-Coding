#include<stdio.h>
union pointers
{
    int a;
    char b;
};
int main(){
    union pointers var;
    var.a = 90;
   union pointers  *p = &var;
    printf("%d %c",p->a,p->b);
}
