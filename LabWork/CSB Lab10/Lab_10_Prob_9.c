#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    struct Name
    {
        char firstName[50];
        char middleName[50];
        char lastName[50];
    } name;
    char gender;
    struct DateOfBirth
    {
        int day;
        int month;
        int year;
    } dob;
    struct Marks
    {
        int english;
        int maths;
        int physics;
        int chemistry;
        int computers;
    } marks;
};

void initializeStudents(struct Student *students, int n)
{   
    for (int i=0; i<n; i++){
        scanf("%d",&students[i].rollNo);
        scanf(" %[^\n]s",students[i].name.firstName);
        scanf(" %[^\n]s",students[i].name.middleName);
        scanf(" %[^\n]s",students[i].name.lastName);
        scanf(" %c",&students[i].gender);
        scanf("%d",&students[i].dob.day);
        scanf("%d",&students[i].dob.month);
        scanf("%d",&students[i].dob.year);
        scanf("%d",&students[i].marks.chemistry);
        scanf("%d",&students[i].marks.computers);
        scanf("%d",&students[i].marks.english);
        scanf("%d",&students[i].marks.maths);
        scanf("%d",&students[i].marks.physics);
    }    
}

int main()
{
    int count = 3;
    struct Student students[count];
    initializeStudents(students, count);

    // Display the name of the students who have secured less than 40% of aggregate.
    for (int i = 0; i < count; i++)
    {
        if (students[i].marks.english + students[i].marks.maths + students[i].marks.physics + students[i].marks.chemistry + students[i].marks.computers < 400)
        {
            printf("Student Name is : ");
            printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
        }
    }
    // Print each students average marks and class average
    for (int i = 0; i < count; i++)
    {
        printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
        printf("Average Marks are : ");
        printf("%d\n", (students[i].marks.english + students[i].marks.maths + students[i].marks.physics + students[i].marks.chemistry + students[i].marks.computers) / 5);
    }
    
    // Display the details of the students with the given DOB.
    int day, month, year;
    printf("Enter the day of birth: ");
    scanf("%d", &day);
    printf("%d",day);
    printf("\n");
    printf("Enter the month of birth: ");
    scanf("%d", &month);
    printf("%d",month);
    printf("\n");
    printf("Enter the year of birth: ");
    scanf("%d", &year);
    printf("%d",year);
    printf("\n");
    
    for (int i = 0; i < count; i++)
    {
        if (students[i].dob.day == day && students[i].dob.month == month && students[i].dob.year == year)
        {
            printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
            printf("%d/%d/%d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        }
    }

    // Write a program to delete the record of the student with the given last name.
    char lastName[50];
    printf("Enter the last name of the student: ");
    scanf(" %[^\n]s", lastName);
    printf("%s",lastName);
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].name.lastName, lastName) == 0)
        {
            for (int j=0; j<50; j++){
                students[i].name.firstName[j] = "";
                students[i].name.middleName[j] = "";
                students[i].name.lastName[j] = "";
            }
            students[i].gender = "";
            students[i].dob.day = 0; 
            students[i].dob.month = 0;
            students[i].dob.year = 0;
            students[i].marks.english = 0;
            students[i].marks.maths = 0;
            students[i].marks.physics = 0;
            students[i].marks.chemistry = 0;
            students[i].marks.computers = 0;
        }
    }

    // Update the details of the student with the given roll number.
    int rollNo;
    printf("Enter the roll number of the student: ");
    scanf("%d", &rollNo);
    printf("%d",rollNo);
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == rollNo)
        {
            printf("Enter the new first name: ");
            scanf("%s", students[i].name.firstName);
            printf("%s", students[i].name.firstName);
            printf("\n");
            printf("Enter the new middle name: ");
            scanf("%s", students[i].name.middleName);
            printf("%s", students[i].name.middleName);
            printf("\n");
            printf("Enter the new last name: ");
            scanf("%s", students[i].name.lastName);
            printf("%s", students[i].name.lastName);
            printf("\n");
            printf("Enter the new day of birth: ");
            scanf("%d", &students[i].dob.day);
            printf("%d",students[i].dob.day);
            printf("\n");
            printf("Enter the new month of birth: ");
            scanf("%d", &students[i].dob.month);
            printf("%d", students[i].dob.month);
            printf("\n");
            printf("Enter the new year of birth: ");
            scanf("%d", &students[i].dob.year);
            printf("%d", students[i].dob.year);
            printf("\n");
            printf("Enter the new marks in English: ");
            scanf("%d", &students[i].marks.english);
            printf("%d", students[i].marks.english);
            printf("\n");
            printf("Enter the new marks in Maths: ");
            scanf("%d", &students[i].marks.maths);
            printf("%d", students[i].marks.maths);
            printf("\n");
            printf("Enter the new marks in Physics: ");
            scanf("%d", &students[i].marks.physics);
            printf("%d", students[i].marks.physics);
            printf("\n");
            printf("Enter the new marks in Chemistry: ");
            scanf("%d", &students[i].marks.chemistry);
            printf("%d", students[i].marks.chemistry);
            printf("\n");
            printf("Enter the new marks in Computers: ");
            scanf("%d", &students[i].marks.computers);
            printf("%d", students[i].marks.computers);
        }
    }
    printf("\nFirst Name : %s\n", students[rollNo-1].name.firstName);
    printf("Midlle Name : %s\n", students[rollNo-1].name.middleName);
    printf("Last Name : %s\n", students[rollNo-1].name.lastName);
    printf("Date of birth : %d/%d/%d\n",students[rollNo-1].dob.day,students[rollNo].dob.month,students[rollNo].dob.year);
    printf("Marks in Chemistry : %d\n",students[rollNo-1].marks.chemistry);
    printf("Marks in Computers : %d\n",students[rollNo-1].marks.computers);
    printf("Marks in English : %d\n",students[rollNo-1].marks.english);
    printf("Marks in Maths : %d\n",students[rollNo-1].marks.maths);
    printf("Marks in Physics : %d\n",students[rollNo-1].marks.physics);
    printf("\n");
    return 0;
}
