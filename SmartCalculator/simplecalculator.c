#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int choice,n;
    while(1){
        system("cls");
        printf("~~~~~~~~Welcome to Calculator~~~~~~~~\n");
        printf("~~~~~~~~      Operations     ~~~~~~~~\n");
        printf("1.ADDITION (+)\n");
        printf("2.SUBSTRACTION (-)\n");
        printf("3.MULTIPLICATION (*)\n");
        printf("4.DIVISION (/)\n");
        printf("5.MODULAS DIVISION\n");
        printf("6.EXPONENTIATION\n");
        printf("7.SQUARE ROOT\n");
        printf("8.N TH ROOT\n");
        printf("9.EXIT\n");
        printf("Enter the number to perform operations from (1 to 9) : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :   {
                         printf("Enter no of inputs : ");
                        scanf("%d",&n);
                        printf("Enter the numbers : ");
                        int num,sum=0;
                        for(int i=1;i<=n;i++){
                            scanf("%d",&num);
                            sum=sum+num;
                        }
                        printf("Result = %d\n",sum);
                        getch();
                        break;
                    }
            case 2 :    {
                        printf("Enter no of inputs : ");
                        scanf("%d",&n);
                        printf("Enter the numbers : ");
                        int num;
                        scanf("%d",&num);
                        int sub=num;
                        for(int i=2;i<=n;i++){
                            scanf("%d",&num);
                            sub=sub-num;
                        }
                        printf("Result = %d\n",sub);
                        getch();
                        break;
                    }
            case 3 :    {
                        printf("Enter no of inputs : ");
                        scanf("%d",&n);
                        printf("Enter the numbers : ");
                        int num,mul=1;
                        for(int i=1;i<=n;i++){
                            scanf("%d",&num);
                            mul=mul*num;
                        }
                        printf("Result = %d\n",mul);
                        getch();
                        break;
                    }
            case 4 :    {
                        int num,den;
                        printf("Enter numerator : ");
                        scanf("%d",&num);
                        printf("Enter deniminator : ");
                        scanf("%d",&den);
                        if(den==0){
                            printf("Invalid input.Division with zero.\n");
                        }
                        float res=(float)num/den;
                        printf("Result = %f",res);
                        getch();
                        break;
                    }
            case 5 :    {
                        int num,den;
                        printf("Enter numerator : ");
                        scanf("%d",&num);
                        printf("Enter deniminator : ");
                        scanf("%d",&den);
                        if(den==0){
                            printf("Invalid input.Division with zero.\n");
                        }
                        else{
                            int res=num%den;
                            printf("Result = %d\n",res);
                        }
                        getch();
                        break;
                    }
            case 6 :    {
                        double base,expo;
                        printf("Enter base value : ");
                        scanf("%lf",&base);
                        printf("Enter exponent value : ");
                        scanf("%lf",&expo);
                        if(base<0){
                            printf("Invalid input. Base cannot be negative.\n");
                        }
                        else{
                            double res=pow(base,expo);
                            printf("Result = %.5lf\n",res);
                        }
                        getch();
                        break;
                    }
            case 7 :    {
                        double num;
                        printf("Enter number  : ");
                        scanf("%lf",&num);
                        if(num<=0){
                            printf("Invalid input. Number cannot be zero.\n");
                        }
                        double res=sqrt(num);
                        printf("Result = %.5lf\n",res);
                        getch();
                        break;
                    }
            case 8 :    {
                        double num,n;
                        printf("Enter number : ");
                        scanf("%lf",&num);
                        printf("Enter root : ");
                        scanf("%lf",&n);
                        if(n<0){
                            printf("Invalid input. Root cannot be zero.\n");
                        }
                        else{
                            double res=pow(num,1.0/n);
                            printf("Result = %.5lf\n",res);
                        }
                        getch();
                        break;
                    }
            case 9 :    exit(0);
                        break;
            default :   printf("Invalid input. Select operations from (1 to 9). ");

        }
    }
    return 0;
}