#include<stdio.h>
  
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct, Nov, Dec};
  

union test {
    int x, y;
};

int main()
{
    printf ("****************Union******************\n");
    printf("\n");
    union test t;
    t.x = 2; 
    printf("After making x = 2:\n x = %d, y = %d\n\n",
           t.x, t.y);
  
    t.y = 10;
    printf("After making y = 10:\n x = %d, y = %d\n\n",
           t.x, t.y);

    printf ("****************Enumerations******************\n");
    printf("\n");
    int i;
    for (i=Jan; i<=Dec; i++)      
        printf("%d ", i);
            
    return 0;
}