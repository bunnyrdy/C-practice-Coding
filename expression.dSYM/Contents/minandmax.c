#include<stdio.h>
#include<limits.h>

int main(){
    int min = INT_MAX; 
    int max = INT_MIN; 
    char end;
    int number;

    while (1) {
        printf("Enter the number: ");
        scanf("%d", &number);
        
        if (number > max) {
            max = number;
        } 
        if (number < min) {
            min = number;
        }
        
        printf("If you want to stop, press 'y'. Otherwise press any other key: ");
        scanf("%c", &end);
        if (end == 'y') {
            break;
        }
    }
    int range  = max-min;
    printf("Minimum number entered: %d\n", min);
    printf("Maximum number entered: %d\n", max);
    printf("\nthe range for given numbers is:%d",range);

    
    
}
