#include <stdio.h>
#include <stdlib.h>

struct Account {
    long int Accountnum;
    char Name[50];
    long int balance;
};

void Accountdata(struct Account Accounts[2]){
    for (int i=0; i<2; i++){
        scanf("%ld",&Accounts[i].Accountnum);
        scanf("%[^\n]s",Accounts[i].Name);
        scanf("%ld",&Accounts[i].balance);
    }
}

void deporwithdraw(struct Account Accounts[2]){
    long int num;
    scanf("%ld",&num);
    for(int i=0; i<2;i++){
        if(num == Accounts[i].Accountnum){
            printf("1 for Deposit, 0 for Withdrawal\n");
            int amount;
            printf("Enter amount to deposit or withdraw : ");
            scanf("%d",&amount);
            int choice;
            scanf("%d",&choice);
            if(choice == 1){
                Accounts[i].balance = Accounts[i].balance + amount;
            }
            else if (choice == 0){
                if(Accounts[i].balance - amount < 1000)
                    printf("The Balance is insufficient for specified withdrawal\n");
                else
                    Accounts[i].balance = Accounts[i].balance - amount;
            }
        }
    }
}

void displayaccountslessthan(struct Account Accounts[2]){
    for (int i=0; i<2; i++){
        if (Accounts[i].balance < 1000){
            printf("Account Num : %ld\n", Accounts[i].Accountnum);
            printf("Account Name : %s\n", Accounts[i].Name);
        }
    }
}

int main(){

    struct Account Accounts[2];

    Accountdata(Accounts);
    displayaccountslessthan(Accounts);

    char input;
    printf("Want to deposit/withdraw?:  Y/N");
    scanf("%c",&input);
    if (input == 'Y' || input == 'y'){
        deporwithdraw(Accounts);
    }
    else 
        printf("Okay\n");
    return 0;
}