// Reverse an array in place.

#include <stdio.h>
int main(){
    int a[50];
    int n;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reversed array is \n");
      for(int i=n-1;i>=0;i--){
       printf(" %d",a[i]);
}
}
 