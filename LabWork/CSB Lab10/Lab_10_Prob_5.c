#include <stdio.h>
#include <stdlib.h>

struct Account{
    long Accountnum;
    char Name[50];
    long int balance;
};

void Accountdata(struct Account *Accounts, int num){
    for (int i=0; i<num; i++){
        scanf("%ld",&Accounts[i].Accountnum);
        scanf(" %[^\n]s",Accounts[i].Name);
        scanf("%ld",&Accounts[i].balance);
    }
}

void deporwithdraw(struct Account *Accounts, int n){
    long int num;
    printf("\n Enter account number : ");
    scanf("%ld",&num);

    int count = 0;
    for(int i=0; i<n;i++){
        if(num == Accounts[i].Accountnum){
            
            int amount;
            printf("Enter amount to deposit or withdraw : ");
            scanf("%d",&amount);

            printf("1 for Deposit, 0 for Withdrawal\n");
            int choice;

            scanf("%d",&choice);
            if(choice == 1){
                Accounts[i].balance = Accounts[i].balance + amount;
                printf("\n Deposite successfull. New balance : %ld",Accounts[i].balance);
    
            }
            else if (choice == 0){
                if(Accounts[i].balance - amount < 1000)
                    printf("The Balance is insufficient for specified withdrawal\n");
                else
                {
                    Accounts[i].balance = Accounts[i].balance - amount;
                    printf("\n Withdrawal successfull. Remaining balance : %ld",Accounts[i].balance);
                }
            }

            count++;
        }
        
    }

    if(count == 1)
    {
        //do nothing
    }
    else {
        printf("\n Account not found.");
    }
}

void displayaccountslessthan(struct Account *Accounts, int num){
    for (int i=0; i<num; i++){
        if (Accounts[i].balance < 1000){
            printf("Account Num : %ld\n", Accounts[i].Accountnum);
            printf("Account Name : %s\n", Accounts[i].Name);
        }
    }
}

int main(){

    int input = 2;
    struct Account Accounts[input];

    Accountdata(Accounts, input);
    displayaccountslessthan(Accounts, input);

    char c;
    printf("\n Want to deposit/withdraw?:  Y/N");
    scanf(" %c",&c);
    if (c == 'Y' || c == 'y'){
        deporwithdraw(Accounts, input);
    }
    else 
        printf("Okay\n");
    return 0;
}
