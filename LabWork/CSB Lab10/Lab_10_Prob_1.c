#include <Stdio.h>

struct Student {
    int rollno;
    char name[30];
    int age;
    int height;
    double marks;
};

int main(){
    struct Student s1;

    printf("Size of struct student: %d\n", sizeof(s1));
    printf("Enter the data : \n");

    scanf("%d",&(s1.rollno));
    scanf("%s",&(s1.name));
    scanf("%d",&(s1.age));
    scanf("%d",&(s1.height));
    scanf("%lf",&(s1.marks));

    printf("RollNo : %d\n",s1.rollno);
    printf("Name : %s\n",s1.name);
    printf("Age : %d\n",s1.age);
    printf("Height : %d\n",s1.height);
    printf("Marks : %0.1lf\n",s1.marks);

    struct Student s2 = {2,"Bs",18,170,9.5};
    
    return 0;
}
