// Sort an array of 0s,1s and 2s(dutch National Flag Problem).

#include <stdio.h>
int main(){
    int n,a[50];
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements(0,1 and 2 only) : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int temp, low=0, mid=0, high=n-1;

    while(mid<=high){
        if(a[mid]==0){
            temp = a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{  // a[mid]==2
            temp = a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high-- ;
        }
    }

    printf("Sorted Array : ");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    return 0;
    
}