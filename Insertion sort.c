#include <stdio.h>
#include <stdlib.h>





int main(){

    int t;
    scanf("%d", &t);
    int ar[t];

    for(int i=0; i<t; i++){
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<t; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");


    for(int i=1; i<t; i++){

            int temp = ar[i];
            int change =0;

        for(int j=i; j>=0; j--){
            if(j!=0 && temp<ar[j-1]  ){
                ar[j]=ar[j-1];
            }
            else if(temp>ar[j-1] || temp==ar[j-1]){
                        ar[j] = temp;
                break;
            }
            else if(j==0){
                ar[j]=temp;
            }



            printf("\n\n=====array checker=======\n");
            printf("temp = %d\n", temp);
                for(int i=0; i<t; i++){
                    printf("%d ", ar[i]);
                }
            printf("\n===========================\n\n\n");


        }




    }

        printf("\n\n==================FINAL==================\n");
                for(int i=0; i<t; i++){
                    printf("%d ", ar[i]);
                }
                printf("\n");

    printf("======================================");
}
