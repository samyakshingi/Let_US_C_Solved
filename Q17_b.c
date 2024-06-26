// Create a structure that can contain data of customers in a bank. The 
// data to be stored is Account number, Name and Balance in account. 
// Assume maximum of 200 customers in the bank.
// (1) Define a function to print the Account number and name of 
// each customer with balance below Rs. 1000.
// (2) If a customer requests for withdrawal or deposit, it should 
// receive as input Account number, amount and code (1 for 
// deposit, 0 for withdrawal).
// Define a function that prints a message, “The balance is 
// insufficient for the specified withdrawal”, if on withdrawal the 
// balance falls below Rs. 1000.

#include<stdio.h>
struct cust{
    int An;
    char name[20];
    int bal;
};
struct cust c[200];
int setData();
void Balchk();
void Trans();

int main(){
    int f;
    printf("Enter the data: ");
    setData();
    while(1){ 
    printf("1. Account with Balance below 1000\n");
    printf("2. Withdrawal or Deposit\n");
    printf("3. Exit\n");
    scanf("%d",&f);
    if(f==1)
        Balchk();
    if(f==2)
        Trans();
    if(f==3)
        break;
    }
    return 0;
}

int setData(){
    int i, cnt;
    for(i=0;i<200;i++){
        printf("Enter Account No(Enter 0 to exit): ");
        scanf("%d",&c[i].An);
        if(c[i].An==0){
            break;
        }
        printf("Enter Name: ");
        scanf("%s",c[i].name);
        printf("Enter Balance: ");
        scanf("%d",&c[i].bal);
        cnt++;
    }
    return cnt;
}

void Balchk(){
    int i;
    for(i=0;i<200;i++){
        if(c[i].bal<1000 && c[i].An!=0){
            printf("Account No.:%d\n",c[i].An);
            printf("Name: %s\n",c[i].name);
        }
    }
}

void Trans(){
    int i,t,an,amt;
    printf("Enter 1 for deposit and 0 for withdrawal: ");
    scanf("%d",&t);
    printf("Enter Account No.: ");
    scanf("%d",&an);
    printf("Enter amount: ");
    scanf("%d",&amt);
    if(t==1){
        for(i=0;i<200;i++){
            if(c[i].An==an){
                c[i].bal+=amt;
            }
        }  
    }
    else if(t==0){
        for(i=0;i<200;i++){
            if(c[i].An==an){
                if((c[i].bal - amt)<1000){
                    printf("Insufficient Balance\n");
                }
                else{
                    c[i].bal-=amt;
                }
            }
        }
    }
    else{
        printf("Invalid Input\n");
    }
}
