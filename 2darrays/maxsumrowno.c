#include<stdio.h>
int main(){
  int arr[2][2]={1,2,6,7};
  int sum=0;
  int maxsum=0;
   int maxrow=0;
    for(int i=0;i<2;i++){
          sum=0;
          for(int j=0;j<2;j++){
        sum+=arr[i][j];
        
        }
            if(sum>maxsum){
                maxsum=sum;
                maxrow=i;
            }
         

    }
    printf("row %d has the max sum %d\n",maxrow,maxsum);

return 0;
}