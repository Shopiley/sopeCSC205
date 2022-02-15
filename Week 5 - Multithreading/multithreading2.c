#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void * OnlineFraud(void * no1) {
    long * ofID = (long *) no1;
    printf("Online Fraud %ld\n", *ofID);
};

void * ChargeBack(void * no2) {
    long * cbID = (long *) no2;
    printf("Charge Back %ld\n", *cbID);
};

void * PaymentGateway(void * no3) {
    long * pgID = (long *) no3;
    printf("Payment Gateway Challenges %ld\n", *pgID);
};

void * ContinuousUpdate(void * no4) {
    long * cuID = (long *) no4;
    printf("Continuous Update %ld\n", *cuID);
};

void * UserExperience(void * no5) {
    long * uxID = (long *) no5;
    printf("User Experience Challenges %ld\n", *uxID);
};
void * MultiCurrency(void * no6) {
    long * mcID = (long *) no6;
    printf("Multi-Currency payment %ld\n", *mcID);
};

int main(){

    int num, q, challenges;
    
    
    printf("Enter number of operations:");
    scanf("%d", &num);

    for (q=0; q < num; q++){
    printf("Which operation are you monitoring? \n");
    scanf("%d", &challenges);
    }


    pthread_t fraud; 
    pthread_t CB;
    pthread_t gateway;
    pthread_t CU;
    pthread_t UX;
    pthread_t multi_curren;
    
    pthread_t * array[] = {&fraud, &CB, &gateway, &CU, &UX, &multi_curren};

   // for (int i = 0; i < 6; i++ ){
       //while (i > 0)
       {
    pthread_create (array[0], NULL, OnlineFraud, (void *)array[0]);  
    pthread_create (array[1], NULL, ChargeBack, (void *)array[1]);
    pthread_create (array[2], NULL, PaymentGateway, (void *)array[2]);
    pthread_create (array[3], NULL, ContinuousUpdate, (void *)array[3]);
    pthread_create (array[4], NULL, UserExperience, (void *)array[4]);
    pthread_create (array[5], NULL, MultiCurrency, (void *)array[5]);
       } 
       
    pthread_join(array, NULL);

    pthread_exit(NULL);
    return 0; 
}


