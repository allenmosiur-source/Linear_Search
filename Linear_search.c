//Linear Search
#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50,60};
int item=50;
int position=-1;
for(int i=0;i<6;i++){
    if(arr[i]==item){
        position=i+1;
        break;

    }
}
if(position==-1)
printf("ITEM NOT FOUND");
else
printf("The Position of %d is: %d",item,position);


    return 0;
}







