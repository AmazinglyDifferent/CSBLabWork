#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordinates{
    int x;
    int y;
};

int main(){
    
    struct Coordinates *p1;
    struct Coordinates *p2;

    p1 = (struct Coordinates *)malloc(sizeof(struct Coordinates));
    p2 = (struct Coordinates *)malloc(sizeof(struct Coordinates));

    printf("Enter x co-ordinate : ");
    scanf("%d",&p1->x);
    printf("Enter y co-ordinate : ");
    scanf("%d",&p1->y);

    printf("Enter x co-ordinate : ");
    scanf("%d",&p2->x);
    printf("Enter y co-ordinate : ");
    scanf("%d",&p2->y);

    double distance = sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
    printf("The distance between the two points is: %.2f\n", distance);
    
    return 0;
}