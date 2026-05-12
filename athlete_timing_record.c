#include <stdio.h>

int main(){
    int num;  //Numbers of Athletes
    int max = 100;
    double timeTaken[max];
    int choice;

    //number of athletes
    printf("Enter the number of athletes: ");
    scanf("%d", &num);
    if(num > max){
        printf("INVAILD!, maximium input");
    }
    else{
        //Collection of athletes' time
        for(int i = 0; i < num; i++){
            printf("Athlete %d: ", i+1);
            scanf("%lf", &timeTaken[i]);
        }
    }
    printf("Enter the number of your choice:\n");
    printf("1 - Ascending\n");
    printf("2 - Descending\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            for (int i = 0; i < num - 1; i++) {
                for (int j = 0; j < num - i - 1; j++) {
                    if (timeTaken[j] > timeTaken[j + 1]) {
                        double temp = timeTaken[j];
                        timeTaken[j] = timeTaken[j + 1];
                        timeTaken[j + 1] = temp;
                    }
                }
            }
            printf("{");
            for(int i = 0; i < num; i++){
                printf("%.2lf ", timeTaken[i]);
            }
            printf("}");
            break;
        case 2:
            for (int i = 0; i < num - 1; i++) {
                for (int j = 0; j < num - i - 1; j++) {
                    if (timeTaken[j] < timeTaken[j + 1]) {
                        double temp = timeTaken[j];
                        timeTaken[j] = timeTaken[j + 1];
                        timeTaken[j + 1] = temp;
                    }
                }
            }
            printf("{");
            for(int i = 0; i < num; i++){
                printf("%.2lf ", timeTaken[i]);
            }
            printf("}");
            break;
        default:
            printf("INVAILD CHOICE!!!");
    }
    printf("...");

    return 0;
}
