#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main() {
    float scores[SIZE];
    
    int i,failed_attemps,counter; 
    float mean_value, passed ;
    mean_value=passed=0.0;
    failed_attemps=counter=0;
    for ( i = 0; i <SIZE; i++)
    {
        printf ("Type the numbers that need to be checked \n");
        scanf("%f" , &scores[i]);
        while ((scores[i]<0)|| (scores[i]>10)){
            printf("you gave a wrong value try again \n");
            failed_attemps+=1;
            scanf("%f", &scores[i]);

        }
        mean_value+=scores[i];
        if (scores[i] >= 5){
            passed+=scores[i];
            counter+=1;   
        }

    }
    printf("The mean value of the grades is %1f \n ", mean_value/SIZE);
    printf("The ammount of times the user gave invalid values is %d \n", failed_attemps);
    printf("The mean value of the grades that passed this leson is %1f \n",passed/counter);

        


}


