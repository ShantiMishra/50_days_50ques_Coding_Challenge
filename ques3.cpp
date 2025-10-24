// 3. Find the 'kth' max and min element of an array.

#include <stdio.h>
int main(){
    int a[50],n,k,temp;
    printf("Enter the Number of elements you want to input : ");
    scanf("%d",&n);
    printf("Enter %d elements", n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter k : ");
    scanf("%d",&k);

    // Using Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    int kthMin=a[k-1];
    int kthMax=a[n-k];

    printf("%dth Minimum Element : %d\n",k,kthMin);
    printf("%dth Maximum Element : %d\n",k,kthMax);
}