#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    struct Name
    {
        char *firstName;
        char *middleName;
        char *lastName;
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
        scanf(" %[^\n]s",&students[i].name.middleName);
        scanf(" %[^\n]s",&students[i].name.lastName);
        scanf("%c",&students[i].gender);
        scanf("%d",&students[i].dob.day);
        scanf("%d",&students[i].dob.month);
        scanf("%d",&students[i].dob.year);
        scanf("%d",&students[i].marks.chemistry);
        scanf("%d",&students[i].marks.computers);
        scanf("%d",&students[i].marks.english);
        scanf("%d",&students[i].marks.maths);
        scanf("%d",&students[i].marks.physics);
        printf("\n");
    }    
}

int main()
{
    struct Student students[1];
    initializeStudents(students, 1);

    // Display the name of the students who have secured less than 40% of aggregate.
    for (int i = 0; i < 3; i++)
    {
        if (students[i].marks.english + students[i].marks.maths + students[i].marks.physics + students[i].marks.chemistry + students[i].marks.computers < 400)
        {
            printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
        }
    }

    // Print each students average marks and class average
    for (int i = 0; i < 1; i++)
    {
        printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
        printf("%d\n", (students[i].marks.english + students[i].marks.maths + students[i].marks.physics + students[i].marks.chemistry + students[i].marks.computers) / 5);
    }

    // Display the details of the students with the given DOB.
    int day, month, year;
    printf("Enter the day of birth: ");
    scanf("%d", &day);
    printf("Enter the month of birth: ");
    scanf("%d", &month);
    printf("Enter the year of birth: ");
    scanf("%d", &year);

    for (int i = 0; i < 1; i++)
    {
        if (students[i].dob.day == day && students[i].dob.month == month && students[i].dob.year == year)
        {
            printf("%s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
            printf("%d/%d/%d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        }
    }

    // Write a program to delete the record of the student with the given last name.
    char *lastName;
    printf("Enter the last name of the student: ");
    scanf("%s", lastName);

    for (int i = 0; i < 1; i++)
    {
        if (strcmp(students[i].name.lastName, lastName) == 0)
        {
            students[i].name.firstName = "";
            students[i].name.middleName = "";
            students[i].name.lastName = "";
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
    for (int i = 0; i < 1; i++)
    {
        if (students[i].rollNo == rollNo)
        {
            printf("Enter the new first name: ");
            scanf("%s", students[i].name.firstName);
            printf("Enter the new middle name: ");
            scanf("%s", students[i].name.middleName);
            printf("Enter the new last name: ");
            scanf("%s", students[i].name.lastName);
            printf("Enter the new day of birth: ");
            scanf("%d", &students[i].dob.day);
            printf("Enter the new month of birth: ");
            scanf("%d", &students[i].dob.month);
            printf("Enter the new year of birth: ");
            scanf("%d", &students[i].dob.year);
            printf("Enter the new marks in English: ");
            scanf("%d", &students[i].marks.english);
            printf("Enter the new marks in Maths: ");
            scanf("%d", &students[i].marks.maths);
            printf("Enter the new marks in Physics: ");
            scanf("%d", &students[i].marks.physics);
            printf("Enter the new marks in Chemistry: ");
            scanf("%d", &students[i].marks.chemistry);
            printf("Enter the new marks in Computers: ");
            scanf("%d", &students[i].marks.computers);
        }
    }
    return 0;
}