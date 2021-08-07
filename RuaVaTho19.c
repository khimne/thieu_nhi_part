#include<stdio.h>

int main(){
            int t;
            printf("Nhap thoi gian t: ");
            scanf ("%d", &t);
            int Sr,St;
            if (t<=5)
            {   int Sr=t;
                int St=t*2;
                printf("Rua chay duoc %d m \nTho chay duoc %d m \nTho thang cuoc", t,St);  }
            if (t>=6 && t<=14 && t!=10)
                {
                    printf("Rua chay duoc %d m \nTho chay duoc %d m \nRua thang cuoc", t,10);
                }
            if (t==10)
                {
                    printf("Rua chay duoc %d m \nTho chay duoc %d m \nTho va rua hoa", t,10);
                }


            else if (t>=15)
                {
                   if (1<=t%15 && t%15<=5)
                   {
                        int St=(t/15)*10 + (t%15)*2 ;
                        printf("Rua chay duoc %d m \nTho chay duoc %d m ", t,St);
                   }
                   if ( t%15>=6)
                   {
                        int St=(t/15)*10 + (t%15)*2;
                        printf("Rua chay duoc %d m \nTho chay duoc %d m ", t,St);
                   }
                            if (t>=St)
                            {
                                printf("\nRua thang cuoc");
                            }
                            if (t==St)
                            {
                                printf("\nRua va tho hoa");
                            }
                            else
                            {
                                printf("\nTho thang cuoc");
                            }
               }


}

