#include <stdio.h>

struct Company {
    char name[30];
    char address[50];
    long phone;
    int noOfEmployee;
};

int main(){
    struct Company C1;
    
    printf("Enter the data : \n");
    scanf("%s",&(C1.name));
    scanf("%s",&(C1.address));
    scanf("%d",&(C1.phone));
    scanf("%d",&(C1.noOfEmployee));

    printf("Name : %s\n",C1.name);
    printf("Address : %s\n",C1.address);
    printf("Phone : %ld\n",C1.phone);
    printf("No. of Employees : %d\n",C1.noOfEmployee);
    return 0;
}