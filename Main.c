#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int TotalAmount = 1000;
int DepositeAmount, WithdrawAmount, TransactionAmount;
int TotalDeposite = 0;
int TotalWithdrawl = 0;
int TotalTransactionAmount = 0;
char name[50];
int accountnumber;
int Password;
int menu()
{   
    int choice;
    system("cls");
    printf("\n\t\t\t\tDas Banks");
    printf("\n |---------------------------------------------------------------------------------|");
    printf("\n\t|> Press 1 to Deposite an amount on your bank account\n");
    printf("\n\t|> Press 2 to Withdraw an amount from your bank account\n");
    printf("\n\t|> Press 3 to Transfer an amount from your bank account\n");
    printf("\n\t|> Press 4 to View passbook\n");
    printf("\n\t|> Press 5 to Exit\n");
    printf("\n\t|\t> Enter Your Choice : ");
    scanf("%d",&choice);
    while(getchar() != '\n');
    return choice;
}
void deposite()
{
    printf("\n\tName %s\n\tAccount Number %d",name,accountnumber);
    printf("\n|---------------------------------------------------------------------------------|");
    printf("\n\t|> Enter the amount you want to deposite ");
    scanf("%d",&DepositeAmount);
    printf("\n\t|> Amount deposited");
    TotalAmount += DepositeAmount;
    TotalDeposite += DepositeAmount;
}
void withdraw()
{
    printf("\n\tName %s\n\tAccount Number %d",name,accountnumber);
    printf("\n|---------------------------------------------------------------------------------|");
    printf("\n\t|> Enter the amount you want to Withdraw ");
    scanf("%d",&WithdrawAmount);
    if (WithdrawAmount <= TotalAmount)
    {
        printf("\n\t|> Amount Successfully Withdrawn");
        TotalAmount -= WithdrawAmount;
        TotalWithdrawl += WithdrawAmount;
    }
    else
    {
        printf("\n\tLess amount transaction failed");
    }   
}
void transfer()
{
    printf("\n\tName %s\n\tAccount Number %d",name,accountnumber);
    printf("\n|---------------------------------------------------------------------------------|");
    printf("\n\t|> Enter the amount you want to Transfer ");
    scanf("%d",&TransactionAmount);
    if (TransactionAmount <= TotalAmount)
    {
        printf("\n\t|> Amount Successfully Transfered");
        TotalAmount -= TransactionAmount;
        TotalTransactionAmount += TransactionAmount;
    }  
    else
    {
        printf("\n\tLess amount transaction failed");
    }    
}
void passbook()
{
    printf("\n\tName %s\n\tAccount Number %d",name,accountnumber);
    printf("\n|----------------------------------------------------------------------------------------------------------|");
    printf("\n|     Total Amount     |     Total Deposite     |     Total WithDrawl     |     Total Tansfered Amount     |");
    printf("\n|----------------------------------------------------------------------------------------------------------|");
    printf("\n|          %d          |           %d           |           %d            |           %d                   |",TotalAmount,TotalDeposite,TotalWithdrawl,TotalTransactionAmount);
    printf("\n|----------------------------------------------------------------------------------------------------------|");
}
int main()
{
    printf("\n\t\t\t\tWelcome To Das Banks");
    printf("\n|----------------------------------------------------------------------------------|");
    printf("\n| > Enter Your Name : ");
    // getchar();
    scanf("%s",&name);
    printf("\n| > Enter Bank Account Number : ");
    // getchar();
    scanf("%d",&accountnumber);
    printf("\n| > Enter Your Password : ");
    // getchar();
    scanf("%d",&Password);
    if (Password == 1234)
    {
        int choice;
        system("cls");
        printf("\nAccess Granted");
        do
        {
            choice = menu();
            switch (choice)
            {
            case 1:
                system("cls");
                deposite();
                printf("\n\tPress any key to go back to menu");
                getch();
                break;
            case 2:
                system("cls");
                withdraw();
                printf("\n\tPress any key to go back to menu");
                getch();
                break;
            case 3:
                system("cls");
                transfer();
                printf("\n\tPress any key to go back to menu");
                getch();
                break;
            case 4:
                system("cls");
                passbook();
                printf("\n\tPress any key to go back to menu");             
                getch();
                break;
            case 5:
                printf("\n\t\tPress any key to exit");
                getch();
                exit(0);
                break;
            default:
                printf("\n\tEnter a valid input");
                break;
            } 
        }while(choice != 5); 
    }
    else
    {
        printf("\nInvalid Password Try Again");
    }
    printf("Press any key to exit\n");
    getch();
    return 0;
}