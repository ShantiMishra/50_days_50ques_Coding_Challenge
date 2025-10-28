

#include <stdio.h>
int main(){
    int n,a[50];
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
            a[0]=temp;
    printf("Array after one rotation : ");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    }