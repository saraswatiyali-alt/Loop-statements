//An Embedded system must check the temperature of a motor 10 times
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Temperature is ON\n");

    }

// An embedded system must check whether 5 LEDs are ON,one after another

    for(i=1;i<=5;i++)
    {
        printf("LED %d is ON\n",i);

    }

    for(i=1;i<=8;i++)
    {
        printf("battery check %d\n",i);
    }

    for(i=1;i<=7;i++)
    {
        printf("Monitoring motor temperature %d\n",i);

    }
//Motor overheating monititering

    int temp[8]={65,82,75,90,68.85,72,95};
    int i;
    int count=0;

    for(i=0;i<=8;i++)
    {
        if(temp[i]>80)
        {
        printf("Motor %d:Overheating!\n",i+1);
        count++;
        }
    }
   printf("\nTotal Overheating motors:%d\n",count);


}



