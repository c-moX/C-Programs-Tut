#include <stdio.h>
#define CYCLE 5
//Dally for WIN32 time:
#ifdef _WIN32
//#include<conio.h>  //Screen TR...
#define sleep(x) Sleep(x*1000)
#else
//#define clrscr() printf("\e[1;1H\e[2J")  // Screen TR...
#include<unistd.h>
#endif // WIN32

int main(){
    int hour, munite, second;
    printf("Enter your Hour, Munite and Second: \n");
    scanf("%d%d%d", &hour, &munite, &second);
    //clrscr();  //TR

    int h = 0, m = 0, s = 0;
    while(1){
        printf("%.2d:%.2d:%.2d\n", h, m, s);
        if(h == hour && m == munite && s == second){
            break;
        }//else{ clrscr(); }  //TR
        s++;
        sleep(1);
        if(s == CYCLE){
            m++;
            s = 0;
        }
        if(m == CYCLE){
            h++;
            m = 0;
        }
    }

    return 0;
}
