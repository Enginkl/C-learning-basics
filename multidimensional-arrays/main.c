#include <stdio.h>
#include <stdlib.h>
//multidimensional arrays
//I've learned double subscripted arrays, sorting algorithm, and using them in functions in this lesson

void getArray(int row,int column,int array[row][column]);
void printArray(int row,int column,int array[row][column]);
void sumOfColumns(int row,int column,int array[row][column]);
void sortingOfArray(int row,int column,int array[row][column]);
int main()

{
    int row,column;

    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d",&row,&column);
    printf("\n");

    int array[row][column];

    getArray(row,column,array);

    printf("\nHere is the array based on the values you entered:\n");
    printArray(row,column,array);
    printf("\n");

    printf("\nHere are the array and the column totals of the array:\n");
    printArray(row,column,array);
    sumOfColumns(row,column,array);
    printf("\n");

    printf("\nArray after sorting rows (small to large):\n");
    sortingOfArray(row,column,array);
    printf("\n");

    return 0;
}

void getArray(int row,int column,int array[row][column])
{
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the value of %d/%d rows and columns: ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
}
void printArray(int row,int column,int array[row][column])
{

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%2d ",array[i][j]);
        }
        printf("\n");
    }
}
void sumOfColumns(int row,int column,int array[row][column])
{
    int col[column];
    for(int i=0;i<column;i++){
        col[i]=0;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            col[j] = col[j] + array[i][j];  //sum of the columns
        }
    }
    for(int i=0;i<column*3;i++){
        printf("-");
    }
    printf("\n");
    for(int i=0;i<column;i++){
        printf("%2d ",col[i]);
    }
}
void sortingOfArray(int row,int column,int array[row][column])
{
    int temp;
    for(int k=0;k<row;k++){
        for(int i=0;i<column;i++){
            for(int j=i+1;j<column;j++){
                if(array[k][i] > array[k][j]){   //Sorting of double-dimensional arrays
                    temp=array[k][i];
                    array[k][i]=array[k][j];
                    array[k][j]=temp;
                }
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%2d ",array[i][j]);
        }
        printf("\n");
    }
}
