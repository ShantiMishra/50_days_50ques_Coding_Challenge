// Move all negative number to beginning and positive to end.

#include <stdio.h>
int main(){
    int n,a[50];
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        int left=0 , right=n-1 , temp;

        while (left<=right){
            if(a[left]<0 && a[right]<0){
                left++;
           }
            else if (a[left]>0 && a[right]<0){
                 temp = a[left];
                 a[left] = a[right];
                 a[right] = temp;
                 left++;
                 right--;
            }
            else if (a[left]>0 && a[right]>0){
                right--;

            }   
            else{     // a[left]<0 && a[right]>0
                left++;
                right--;
        } 
     }

     printf("Rearranged array : ");
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
        

}