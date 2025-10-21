// Find the maximum and minimum element in an array'

#include <stdio.h>
int main(){
    int a[50];
    int n;
    printf("enter the no elements :");
    scanf("%d",&n);
    printf("Enter %d elements : ", n);
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }

    int min=a[0];
    int max=a[0];

    for(int i=0;i<n;i++){
      // for minimum elemnent.
      if(a[i]<min){
        min=a[i];
      }
      // for maximum element.
      else if (a[i]>max)
      {
        max=a[i];
      }
      
    }

    printf("Minimum Element : %d\n",min);
    printf("Maximum Element : %d\n",max);
}