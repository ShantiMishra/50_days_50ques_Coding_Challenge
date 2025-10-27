// Find Union and Intersection of two arrays.

#include <stdio.h>
int main(){
    int n1,n2;
    int a1[50],a2[50];

    printf("Enter the number of elements in first array : ");
    scanf("%d",&n1);
    printf("Enter %d elements: ", n1);
    for (int i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }

    printf("Enter the number of elements in second array : ");
    scanf("%d",&n2);
    printf("Enter %d elements: ", n2);
    for (int i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }

    // to find Union

    printf("Union of both array : ");

    for(int i=0;i<n1;i++){
        printf("%d ",a1[i]);
    }
    for(int i=0;i<n2;i++){
       int isfound=0;
         for(int j=0;j<n1;j++){
            if(a2[i]==a1[j]){
                isfound=1;
                break;
            }
            
         }
         if(!isfound){
            printf("%d ",a2[i]);

         }
    }
    printf("\n");

    // to find Intersection
    printf("Intersection of given arrays is : ");
    for(int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if(a1[i]==a2[j]){
                printf("%d ",a1[i]);
                break;
            }
        }
    }
}