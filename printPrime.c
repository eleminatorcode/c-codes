// Print Prime Number Between Two Number 

#include<stdio.h>
int main(){
    int n,m;
    int count=0;
    int read=0;
    printf("Enter the number m to n:");
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=m;i<=n;i++){
            for(int j=2;j<i;j++){
               if(i%j==0){
                count=0;
                break;
                   
                }
                else{
                     count++;
                }
                
                }
               
                if(count!=0){
                    read++;
                    printf("Is Prime:%d\n",i);
                }
            
            }
            printf("Number of prime number :%d\n",read);
}


//Output
/*
   
Enter the number m to n:
10
20
Is Prime:11
Is Prime:13
Is Prime:17
Is Prime:19
Number of prime number :4

*/

