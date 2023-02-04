//snake,water,gun game or rock,paper,scisor game!!!!!!!!!!
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snake_water_gun(char comp,char you){
    if(comp==you){
        return 0;
    }
    if(comp=='s' && you=='w'){
        return -1;
    }
    else if(comp=='w' && you=='s'){
        return 1;
    }
    if(comp=='w' && you=='g'){
        return -1;
    }
    else if(comp=='g' && you=='w'){
        return 1;
    }
    if(comp=='s' && you=='g'){
        return 1;
    }
    else if(comp=='g' && you=='s'){
        return -1;
    }
}

int main()
{
    char comp,you;
    srand(time(0));
    int num=rand()%100+1;
    if(num<35){
        comp='s';
    }
    else if(num>35 && num<65){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("Enter 's' for snake,'w' for water and 'g' for gun::");
    scanf("%c",&you);
    if(you=='s' || you=='w' || you=='g'){
    int result=snake_water_gun(comp,you);
    if(result==0){
        printf("match draw!!!\n");
    }
    else if(result==1){
        printf("you win!!!\n");
    }
    else if(result==-1){
        printf("you lose!!!\n");
    }
    printf("computer choess %c and you choess %c.\n",comp,you);
    }
    else{
        printf("Sorry '%c' is the invalid input!!!!\n",you);
    }
    return 0;
}