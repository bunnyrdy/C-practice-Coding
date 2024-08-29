#include<stdio.h>
#include<math.h>
int main(){
    int radius, x1, x2, y1, y2;
    printf("Enter the radius of the circle ");
    scanf("%d", &radius);
    printf("Enter the coordinates of the first point ");
    scanf("%d %d", &x1, &x2);
    printf("Enter the coordinates of the second point ");
    scanf("%d %d", &y1, &y2);   
    int point = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%d \n",point);
    if(point > radius)
      printf("the point is out side the circle");
      else if(point < radius)
      printf("the point is inside the circle");
      else if(point == radius)
      printf("the point is on the circle");
      else 
      printf('enter the wrong input')
      
      
      
    


}