#include<stdio.h>
#include<windows.h>

int main()
{
    int h,m,s;
    int d = 1;//---> we add a delay of 1000 milliseconds and use it as fucntion sleep

    printf("Set Time:\n");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60)
    {
        printf("ERROR!\n");
        exit(0);
    }

    while(1)//---> this is an infinite loop and anything inside this loop will be infinity
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n CLOCK:");
        printf("\n %02d:%02d:%02d",h,m,s);//this writes in the format of 00:00:00

        sleep(d);//function sleep slows down the while loop and tends to show it as a real clock

        system("cls");//clears the system
    }
    return 0;
}
