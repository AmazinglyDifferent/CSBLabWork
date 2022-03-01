#include <stdio.h>
#include <string.h>

int main(){
    int countS;
    char str[50][50];
    char s[50];
   
    printf("Enter the number of students:");
    scanf("%d",&countS);
    for (int i=0; i<countS; i++){
        printf("Enter name of Student %d:",i+1);
        scanf("%s",&str[i]);
    }
    for(int i=0;i<countS;i++){
      for(int j=i+1;j<countS;j++){
        if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
        }
      }
    }
    printf("\nNames in Sorted order are:\n");
    for(int i=0;i<countS;i++){
      printf("%s\n",str[i]);
    }
    
    return 0;
}
