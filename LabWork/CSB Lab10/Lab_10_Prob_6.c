#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int maxdatearray[3] = {0, 0, 0};
int mindatearray[3] = {0, 0, 0};

int dummy1 = 0;
int dummy2 = 0;
int dummy3 = 0;
int dummy4 = 0;
int dummy5 = 0;
int dummy6 = 0;

int salaryarray[3] = {0, 0, 0};

char dep[50][50] = {'\0'};

struct date{
        int day;
        int month;
        int year;
};

struct Employee{
    int code;
    char name[50];
    long salary;
    char depname[50];
    struct date dates;
};

void print(struct Employee *Employees, int i){

    printf("Employee Code : %d\n",Employees[i].code);
    printf("Employee Name : %s\n",Employees[i].name);
    printf("Employee salary : %ld\n",Employees[i].salary);
    printf("Employee depname : %s\n",Employees[i].depname);
    printf("Date of joining : %d/%d/%d\n",Employees[i].dates.day,Employees[i].dates.month,Employees[i].dates.year);
    printf("\n");
}

void maxandmindate(int num, struct Employee *Employees){
    int maxyear = INT_MIN;
    int maxmon = INT_MIN;
    int maxday = INT_MIN;

    for(int i=0; i<num; i++)
    {
        if(maxyear < Employees[i].dates.year)
            dummy1 = i;
            maxyear = Employees[i].dates.year;
    }

    for(int i=0; i<num; i++)
    {
        if (Employees[dummy1].dates.year == Employees[i].dates.year){
            if(Employees[dummy1].dates.month < Employees[i].dates.month)
                maxmon = Employees[i].dates.month;
            else if (Employees[dummy1].dates.month == Employees[i].dates.month){
                if (Employees[dummy1].dates.day < Employees[i].dates.day)
                    maxday = Employees[i].dates.day;
            }
            else 
                maxmon = Employees[dummy1].dates.month;
        }
    }

    int minyear = INT_MAX;
    int minmon = INT_MAX;
    int minday = INT_MAX;
    
    for(int i=0; i<num; i++)
    {
        if(minyear > Employees[i].dates.year){
            dummy2 = i;
            minyear = Employees[i].dates.year;
        }
    }

    for(int i=0; i<num; i++)
    {
        if (Employees[dummy2].dates.year == Employees[i].dates.year){
            if(Employees[dummy2].dates.month > Employees[i].dates.month)
                minmon = Employees[i].dates.month;
            else if (Employees[dummy2].dates.month == Employees[i].dates.month){
                if (Employees[dummy2].dates.day > Employees[i].dates.day)
                    minday = Employees[i].dates.day;
            }
            else 
                minmon = Employees[dummy2].dates.month;
        }
    }

    for(int i=0; i<num; i++){
        if(i != dummy1 && i!= dummy2)
            dummy3 = i;
    }    
    maxdatearray[0] = maxday;
    maxdatearray[1] = maxmon;
    maxdatearray[2] = maxday;
    mindatearray[0] = minday;
    mindatearray[1] = minmon;
    mindatearray[2] = minyear;
}

void maxandminsal(struct Employee *Employees, int num){
    int max = INT_MIN;
    
    for(int i=0; i<num; i++)
    {
        if(max < Employees[i].salary)
            max = Employees[i].salary;
    }
    printf("Max Salary : %d\n",max);
    int min = INT_MAX;
    
    for(int i=0; i<num; i++)
    {
        if(min > Employees[i].salary)
            min = Employees[i].salary;
    }
    printf("Min Salary : %d\n",min);
}

void maxandminsalary(struct Employee *Employees, int num){
    int max = INT_MIN;
    
    for(int i=0; i<num; i++)
    {
        if(max < Employees[i].salary){
            max = Employees[i].salary;
            dummy4 = i;
        }
    }

    int min = INT_MAX;
    
    for(int i=0; i<num; i++)
    {
        if(min > Employees[i].salary){
            min = Employees[i].salary;
            dummy5 = i;
        }
    }

    for(int i=0; i<num; i++){
        if(i != dummy4 && i!= dummy5)
            dummy6 = i;
    }
    salaryarray[0] = min;
    salaryarray[1] = Employees[dummy6].salary;
    salaryarray[2] = max;
}

void displayemployees(struct Employee *Employees, int num){
    for (int i=0; i<num; i++){
        print(Employees, i);
    }
}

void displayemployeeswithdate(struct Employee *Employees, int num){
    maxandmindate(num, Employees);
    for (int i=0; i<num; i++){
        if (mindatearray[0]==Employees[i].dates.day && mindatearray[1]==Employees[i].dates.month && mindatearray[2]==Employees[i].dates.year)  
            print(Employees, i);
    }

    print(Employees, dummy3);

    for (int i=0; i<num; i++){
        if (maxdatearray[0]==Employees[i].dates.day && maxdatearray[1]==Employees[i].dates.month && maxdatearray[2]==Employees[i].dates.year)  
            print(Employees, i);
    }
}

void employeedata(struct Employee *Employees, int num){
    for (int i=0; i<num; i++){
        scanf("%d",&Employees[i].code);
        scanf(" %[^\n]s",Employees[i].name);
        scanf("%ld",&Employees[i].salary);
        scanf(" %[^\n]s",Employees[i].depname);
        scanf("%d/%d/%d",&Employees[i].dates.day,&Employees[i].dates.month,&Employees[i].dates.year);
        printf("\nCode : %d", Employees[i].code);
        printf("\nName : %s", Employees[i].name);
        printf("\nSalary : %d", Employees[i].salary);
        printf("\nDepname : %s", Employees[i].depname);
        printf("\nDate : %d/%d/%d", Employees[i].dates.day, Employees[i].dates.month, Employees[i].dates.year);
    }
}

void sort (int num, char s[50], char str[50][50]){
    for(int i=0;i<num;i++){
      for(int j=i+1;j<num;j++)
      {
        if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
            strcpy(dep[i],str[j]);
        }
      }
    }   
}

void displayemployeeswithsal(struct Employee *Employees, int num){
    maxandminsalary(Employees, num);
    print(Employees, dummy6);
    print(Employees, dummy5);
    print(Employees, dummy4);

}

void displayemployeeswithdep(struct Employee *Employees, int num, char s[50], char str[50][50]){
    sort(num, s, str);
    for (int i=0; i<num; i++){
        if(dep[i] == Employees[i].depname)
            print(Employees, i);
    }
}

void menu(struct Employee *Employees, int num, char s[50], char str[50][50], int choice){

    do {
        printf("\n1. Display employee information alongwith Maximum and Minimum Salary\n");
        printf("2. Display employee records in ascending or descending order w.r.t their Salary\n");
        printf("3. Display employee records in ascending or descending order w.r.t their joining date\n");
        printf("4. Display employee records w.r.t their Department\n");
        printf("5. Exit\n");
        
	    printf("\nEnter your choice : ");
        scanf("%d",&choice);
        printf("%d",choice);
        printf("\n");
	    if (choice == 1){
		    displayemployees(Employees, num);
            maxandminsal(Employees,num);
		    }
	    else if (choice == 2){
            displayemployeeswithsal(Employees, num);
		    }
	    else if (choice == 3){
		    displayemployeeswithdate(Employees, num);
		    }
	    else if (choice == 4) {
		    displayemployeeswithdep(Employees, num, s, str);
	    	}
	    else if(choice ==5){
		    printf("Exiting...\n");
		    break;
	        }
	    else {
		    printf("Invalid Value");
		    }
	
	} while(choice!=5);
}

int main(){
    int num, choice;
    printf("Enter number of records to be inputted : ");
    scanf("%d",&num);

    struct Employee Employees[num];
    char str[50][50];
    char s[50];
    employeedata(Employees,num);
    menu(Employees, num, s, str, choice);

    return 0;
}