void doubleAll(int arr[],int n){
    printf("inside:arr =%p\n",arr);
    printf("inside : sizeof =%d bytes\n",sizeof(arr));
    for (int i=0; i<n ;i++){
        arr [i]=arr[i]*2;

    }
}
int main(){
    int num[5]={1,2,3,4,5};
    int n=sizeof(num)/sizeof(num[0]);
    printf("in main: &nums[0]=%p\n",&num[0]);
    printf("in main sizeof= %d bytes \n",sizeof(num));
    doubleAll(num,n);
    printf("after call: ");
    for(int i=0;i<n;i++){
    printf("%d",num[i]);
}
printf("\n");
return 0;
}