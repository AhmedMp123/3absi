#include <Stdio.h>
int main (void){
    int x,i;
   int count=0;

printf("please eneter a number\n");
scanf("%d",&x);
while (x%10!=0){
    x/=10;
    count++;
}
printf("the answer is                 :- %d",count);
for(i=5:i>0;i++){
    printf("kosmk \n");
}

}
