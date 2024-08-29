#include<stdio.h>
struct car
{
    int fuel_tank_capacity;
    int seating_capacity;
    float milage;
};
int main(){
struct car c[2];
int i ;
for ( i = 0; i < 2; i++)
{
    printf("enter the fuel tank capacity %d of the car:",i+1);
    scanf("%d",&c[i].fuel_tank_capacity);
    printf("enter the fuel seating capacity %d of the car:",i+1);
    scanf("%d",&c[i].seating_capacity);
    printf("enter the fuel tank capacity %d of the car:",i+1);
    scanf("%f",&c[i].milage);
}
printf("\n");
 
    for (int i = 0; i < 2; i++)
    {
       printf("the car details of the %d car:",i+1);
       printf("the fuel tank capacity %d of the car:\n",c[i].fuel_tank_capacity);
       printf("the fuel tank capacity %d of the car:\n",c[i].seating_capacity);
       printf("the fuel tank capacity %f of the car:\n",c[i].milage);

    }
    
 }

