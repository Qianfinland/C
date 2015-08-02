
#include <stdio.h>
#include <stdlib.h>
void selectionSortAlgorithm();
void AscendingOrder();
void multiplicationTable();
void pickupMaxMin();
int main() {
    int arr[10]; 
    int i,j,temp;
    int mode[10][2]; 
    for (i=0; i<10; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    //find the max value and min value 
     
    //sort array to find max and min values 
    for(i=0;i<10;i++)
        for(j=9;j>i;j--)
            if(arr[j]<arr[j-1]) 
            { 
                int temp=arr[j]; 
                arr[j]=arr[j-1];
                arr[j-1]=temp; 
            }   
    
    printf("Max=%d,Min=%d\n",arr[9],arr[0]); 
    //initialize 2D array storing numbers of occurrences, and values 
   for(i=0;i<2;i++) 
       for(j=0;j<10;j++)mode[j][i]=0; 
   mode[0][0]=1; 
   //find model 
   for(i=0;i<10;i++) 
       for(j=0;j<10;j++) 
           if(arr[i]==arr[j+1]) 
           {
               ++mode[i][0];
               mode[i][1]=arr[i];
           } 
   
        //find max occurrence 
        int max; 
        int k=0; 
        max=mode[0][0]; 
        for(j=0;j<10;j++) 
            if(max<mode[j][0]){max=mode[j][0];k=j;} 
    
        //print result 
        printf("The most occurring item:%d \n",mode[k][1]); 
        printf("It occurs %d times\n",max); 
    
    /*pickupMaxMin();
    multiplicationTable();
    selectionSortAlgorithm();
    AscendingOrder();*/
    return 0;
}


void pickupMaxMin()
{
    int a[3], i, max, step;
    printf("Enter three integer numbers\n");
    scanf("%d %d %d", &a[0], &a[1],&a[2]);
    //ascending order those numbers
    for(i=0; i<3; i++)
    {
        for(step=1+i;step < 3; step++)
        {
            if(a[i] > a[step])
            {
                max = a[i];
                a[i] = a[step];
                a[step] = max;
                
            }
        }
    }
    printf("numbers printed as ascending order:\n");
    for(i=0; i< 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe smallest number is %d\n", a[0]);
    printf("The  largest number is %d\n", a[2]);
}
void multiplicationTable()
{
    int i, j;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d*%d=%d\t", j, i, j*i);
        }
        printf("\n");
    }
}
void AscendingOrder()
{
    int arr[5] = {20, 12, 10, 15, 2};
    int min, i, step;
    for (i = 0; i < 5; i++) {
        for (step = i + 1; step < 5; step++) {
            if (arr[i] > arr[step]) {
                min = arr[i];
                arr[i] = arr[step];
                arr[step] = min;
            }
        }
    }
    printf("Ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSortAlgorithm()
{
    int arr[5] = {20, 12, 10, 15, 2};
    int max, i, step;

    for (i = 0; i < 5; i++) {
        for (step = i + 1; step < 5; step++) {
            if (arr[i] < arr[step]) {
                max = arr[step];
                arr[step] = arr[i];
                arr[i] = max;

            }
        }
    }
    printf("Descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}