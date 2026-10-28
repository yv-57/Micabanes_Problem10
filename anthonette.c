#include <stdio.h>
int main() {

int stock,customers;
int quantity;
int totalsold= 0;
int rejected= 0;
int i;

printf("===sari-sari store sales tracking===\n");

printf("Enter Initial Stock Quantity:");
scanf("%d", &stock);

while(stock<0){
    printf("invalid stock! Enter a non-negative quantity: ");
    scanf("%d",&stock);
}

printf("enter number of customers: \n ");
scanf("%d",&customers);

while(customers<0){
printf("invalid number! enter non-negative value: ");
scanf("%d",&customers);
}

//process each customer transaction for(i=1; i<= customers; i++){
for (i=1;i<=customers;i++) {
    printf("\ncustomers %d\n",i);
}

while(quantity<0){
    printf("invalid quantity! enter a non-negative quantity: ");
    scanf("%d", &quantity);
}

if(quantity <= stock){
    stock = stock - quantity;
    totalsold = totalsold+quantity;

    printf("sale successful!\n");
}else{
    printf("insufficient stock\n");
    rejected++;
  }

// display final summary
printf("\n===== final sales summary =====\n");
printf("total quantity sold: %d\n", totalsold);
printf("rejected transactions: %d\n", rejected);
printf("remaining stock: %d\n", stock);
    
return 0;
}