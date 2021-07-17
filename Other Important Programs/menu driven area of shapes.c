#include <stdio.h> 
int main() 
{ 
    float result,num; 
    int choice; 
    printf("Press 1 to calculate area of circle\n"); 
    printf("Press 2 to calculate area of square\n"); 
    printf("Press 3 to calculate area of sphere\n"); 
    printf("Enter your choice:\n"); 
    scanf("%d", &choice);  
      
    switch (choice) { 
    case 1: { 
        printf("Enter radius:\n"); 
        scanf("%f", &num);
        result = 3.14 * num * num; 
        printf("Area of sphere= %f",result); 
        break; 
    } 
    case 2: { 
        printf("Enter side of square:\n"); 
        scanf("%f", &num);
        result = num * num; 
        printf("Area of square= %f",result);
        break; 
    } 
    case 3: { 
        printf("Enter radius:\n"); 
        scanf("%f", &num);
        result = 4 * (3.14 * num * num); 
        printf("Area of sphere= %f",result);
        break; 
    } 
    default: 
        printf("wrong Input\n"); 
    } 
    return 0; 
} 
