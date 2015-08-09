
#include <stdio.h>
#include <stdlib.h>
void selectionSortAlgorithm();
void AscendingOrder();
void multiplicationTable();
void pickupMaxMin();
void MaxMinMostCommon();
void AsendingDesending();
void MenuForStudentRecord();
void DataMenu();
void print_array(int a[], int num_elements);
int main() {
    int choice, i, j,studentID, temp,finalScores[4], IDs[4], result;
    int data[4][5] = { 
        {1232, 10, 23, 45, 56},
        {2367, 45, 43, 24, 78},
        {3650, 34, 45, 40, 60},
        {4002, 67, 38, 65, 56}
    };
    for(i=0; i<4; i++)
    {
        finalScores[i]=data[i][4];
        IDs[i] = data[i][0];
    }
   
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4;j++)
        {
            if(finalScores[i]>finalScores[j])
            {
                temp = finalScores[i];
                finalScores[j] = temp;
                finalScores[i] = finalScores[j];
            }
        }
    }
    MenuForStudentRecord();
    printf("\nPlease enter your choice: ");
    scanf("%d", &choice);
    //printf("Your choice is :%d\n", choice);
    
    if(choice == 1)
    {
        DataMenu();
        for(i = 0; i < 4; i++)
        {
            for(j=0; j < 5; j++)
            {
                printf("|%d      ", data[i][j]);
            }
            printf("\n");
        }
        
    }
    else if(choice == 2)
    {
        printf("Please enter the student ID: ");
        scanf("%d", &studentID);
        //printf("studentId: %d\n", studentID);
        result = find_index(IDs, 4, studentID);
        if (result == -1)
        {
            printf("You entered value %d is not found in the studentIDs\n", studentID);
        }
        else
        {
            printf("The record of student whose studentID %d is: \n", studentID);
            DataMenu();
            for(i=0; i<4; i++)
            {
                if(data[i][0] == studentID)
                {
                    for(j=0; j<5;j++)
                    {
                        printf("|%d      ", data[i][j]);
                    }
                }
            }
        }
    }
    else if(choice == 3)
    {
        printf("The lowest final score is %d \n", finalScores[0]);
        printf("The lowest final score is %d \n", finalScores[3]);
    }
        
    //AsendingDesending();
    //MaxMinMostCommon();
    /*pickupMaxMin();
    multiplicationTable();
    selectionSortAlgorithm();
    AscendingOrder();*/
    return 0;
}

int find_index(int a[], int num_elements, int value)
{
   int i;
   for (i=0; i<num_elements; i++)
   {
	 if (a[i] == value)
	 {
	    return(value);  /* it was found */
	 }
   }
   return(-1);  /* if it was not found */
}

void print_array(int a[], int num_elements)
{
   int i;
   for(i=0; i<num_elements; i++)
   {
	 printf("%d ", a[i]);
   }
   printf("\n");
}

int Test_Find_Value(int arr[4], int value)
{
    int i;
    for(i=0; i < 4; i++)
    {
        if(arr[i] == value)
            return 1;
        else
            return -1;
    }
}
void DataMenu()
{
    printf("===============================================\n");
    printf("|StudentId | Quiz1 | Quiz2 | Mid-Term | Final |\n");
    printf("===============================================\n");
}
void MenuForStudentRecord()
{
    printf("=======================\n");
    printf("            MENU       \n");
    printf("=======================\n");
    printf("1.View all students’ records\n");
    printf("2.View a student's records by ID\n");
    printf("3. Show the highest and the lowest final scores\n");
}
void AsendingDesending()
{
    int arr[10], i, j, max, min;
    printf("Enter 10 integers\n");
    for(i=0; i< 10; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<10;i++)
    {
        for(j=i+1; j< 10; j++)
        {
            if(arr[i] >= arr[j])
            {
                max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }
    }
    
    printf("Ascending order: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    for(i=0; i < 10; i++)
    {
        for(j=i+1; j< 10; j++)
        {
            if(arr[i] <= arr[j])
            {
                min = arr[i];
                arr[i] = arr[j];
                arr[j] = min;
            }
        }
    }
    
    printf("Descending order: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}
void MaxMinMostCommon()
{
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