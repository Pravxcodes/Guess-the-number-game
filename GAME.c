#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int guess;
    int nguesses=1;
    int num; 
    srand(time(0));
    num=rand()%1000+1; //RANNDOM NUM WILL BE GENERATED BETWEEEN 1-1000 
    //printf("THE NUMBER IS %d\n", num);
//Keep running the loop untill the num is guessed
do{
printf("GUESS A NUM BETWEEEN 1-1000....GET READY!!LESSGO!!\n");
scanf("%d",&guess);
if( guess>num){
printf("CHOTAAAAAAA\n");
}
else if(guess<num){
    printf("BADAAAAAA\n");
}
else{
    printf("HAAN, CHALL KRLIYA GUESS %d attempt\n", nguesses);
}
nguesses++;
}while(guess != num);

    return 0;
}