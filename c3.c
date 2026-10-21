//Battery Monitoring system using while loop
/*#include<stdio.h>
/*int main()
{
    int battery;
    while(1)
    {
        printf("Enter battery percentage(-1 to stop):");
        scanf("%d",&battery);
        if(battery==-1)
        {
            printf("Monitoring stopped\n");
            break;
        }
        else if(battery<0||battery>100)
        {
            printf("invalid Battery percentage\n");
        }
        else if(battery<20)
        {
            printf("low batttery\n");
        }
        else if(battery<=90)
        {
            printf("battery Normal\n");
        }
        else
            printf("battery Full\n");
    }
}

//Embedded Device Boot-Up Monitoring System using while loop
#include<stdio.h>
int main()
{
    int status=0;
    int check=0;
    while(status!=1)
    {
        printf("Enter system status(1=Ready,0=Not Ready):");
        scanf("%d",&status);
        check++;
        if(status==0)
            printf("system Initializing...please wait\n");
        else if(status==1)
            printf("System Booted Successfully!\n");
        else{


            printf("Invalid status! Enter 0 or 1\n");
        status=0;
        check--;
        }

    }


printf("Total checks:%d\n",check);

}*/
#include<stdio.h>
int main()
{

    int PIN=123;
    int trials = 1;
    while(trials<=3){
    printf("Enetr the password : ");
    scanf("%d",&PIN);

    if(PIN==123){
        printf("Access Granted!");
        break;
    }
    else
        printf("Incorrect PIN.Try Again!\n");

        trials ++;
    }

}



