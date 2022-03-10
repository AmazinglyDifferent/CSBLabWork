#include <stdio.h>
#include <string.h>
#define STR_LEN 100

struct Ticket {
    char name[STR_LEN];
    char Train[STR_LEN];
    char from[STR_LEN];
    char to[STR_LEN];
    int Date;
    char Coachno[2];
    int seatno;
};

void ticketdata (struct Ticket *Tickets){
    for (int i=0; i<3; i++){
        fgets(Tickets[i].name, STR_LEN, stdin);
        fgets(Tickets[i].Train, STR_LEN, stdin);
        fgets(Tickets[i].from, STR_LEN, stdin);
        fgets(Tickets[i].to, STR_LEN, stdin);
        scanf("%d",&Tickets[i].Date);
        scanf("%s",&Tickets[i].Coachno);
        scanf("%d",&Tickets[i].seatno);
//         printf("\n");
//         printf("Name : %s",Tickets[i].name);
//         printf("Train : %s",Tickets[i].Train);
//         printf("From : %s",Tickets[i].from);
//         printf("To : %s",Tickets[i].to);
//         printf("Date : %d\n",Tickets[i].Date);
//         printf("Coach : %s\n",Tickets[i].Coachno);
//         printf("Seat : %d\n",Tickets[i].seatno);

        char ch1 = getchar();
        char ch2 = getchar();
    }
}

int main(){
    
    struct Ticket Tickets[3];
    ticketdata(Tickets);
    printf("\n");
    char x[2];
    int y;
    scanf("%s",&x);
    printf("Enter coach number : %s\n",x);   
    scanf("%d",&y);
    printf("Enter seat number : %d",y);
    printf("\n");

    for (int i=0; i<3; i++){
        if (strcmp(Tickets[i].Coachno,x)==0 && Tickets[i].seatno == y){
            printf("\n");
            printf("******************* Indian Railway Ticket *******************\n");
            printf("Name of Ticket holder : %s",Tickets[i].name);
            printf("Train : %s",Tickets[i].Train);
            printf("From : %s",Tickets[i].from);
            printf("To : %s",Tickets[i].to);
            printf("Date of Departure : : %d :: 8 :: 2010 :\n",Tickets[i].Date);
            printf("Coach No.: %s  Seat No.: %d",Tickets[i].Coachno,Tickets[i].seatno);
            printf("\n*************************************************************");
        }
    }
    printf("\n");
    printf("\n");
    return 0;
}
