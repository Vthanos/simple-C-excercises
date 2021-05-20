#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main() {
    int scores[SIZE];
    
    int i, failed_attemps, mean_value, passed, counter ;
    failed_attemps=mean_value=passed=counter=0;
    for ( i = 0; i <SIZE; i++)
    {
        printf ("Type the numbers that need to be checked \n");
        scanf("%d" , &scores[i]);
        while ((scores[i]<0)|| (scores[i]>10)){
            printf("you gave a wrong value try again \n");
            failed_attemps+=1;
            scanf("%d", &scores[i]);

        }
        mean_value+=scores[i];
        if (scores[i] >= 5){
            passed+=scores[i];
            counter+=1;   
        }

    }
    printf("The mean value of the grades is %d \n ", mean_value/SIZE);
    printf("The ammount of times the user gave invalid values is %d \n", failed_attemps);
    printf("The mean value of the grades that passed this leson is %d \n", passed/counter);

        


}


