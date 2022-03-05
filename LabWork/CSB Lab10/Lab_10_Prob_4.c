#include <stdio.h>

struct Ticket {
    char name[30];
    char Train[20];
    char from[30];
    char to[30];
    int Date;
    char Coachno[2];
    int seatno;
};

int main(){

    struct Ticket T1 = {fgets(T1.name,30,stdin),
                        fgets(T1.Train,30,stdin),
                        fgets(T1.from,30,stdin),
                        fgets(T1.to,30,stdin),
                        scanf("%d",&T1.Date),
                        scanf("%s",&T1.Coachno),
                        scanf("%d",&T1.seatno)};
    
    printf("Enter coach number : %s",T1.Coachno);
    printf("\n");
    printf("Enter seat number : %d",T1.seatno);

    printf("\n");
    printf("******************* Indian Railway Ticket *******************\n");
    printf("Name of Ticket holder : %s",T1.name);
    printf("Train : %s",T1.Train);
    printf("From : %s",T1.from);
    printf("To : %s",T1.to);
    printf("Date of Departure : : %d :: 8 :: 2010 :\n",T1.Date);
    printf("Coach No.: %s  Seat No,: %d",T1.Coachno,T1.seatno);
    printf("\n********************************************");
    return 0;
}