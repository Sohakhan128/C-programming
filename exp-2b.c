/*
Name: Khan Soha Mohammed Amin
Class: F.E. (Computer2)
Batch: D
UIN: 251P104
*/

#include<stdio.h>
int main(){
     int lim;
     int sum=0;
     printf("enter the limit :");
     scanf("%d",&lim);
     for(int i=0;i<=lim;i++){
        if(i%2!=0){
            sum+=i;
        }
     }
     printf("sum of odd is %d",sum);
     return 0;
}