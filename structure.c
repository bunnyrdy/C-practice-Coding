#include<stdio.h>
// struct structure
// {
//     char *engine;
// }car1,car2;
// int main(){
//     car1.engine = "4.4leter v8 twin turbo engine";
//     car2.engine = "6leter v12 NA engine";
//     printf("%s\n",car1.engine);
//     printf("%s\n",car2.engine);

// }
struct structure
{
    char *name;
    int  phone_number;
    char sex;
    float height;
} person;
int main(){
    person.name = "SRINIVAS REDDY";
    person.phone_number = 6904;
    person.sex = 'M';
    person.height = 6.1;
    printf("%f %s %d %c",person.height,person.name,person.phone_number,person.sex);
}
