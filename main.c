#include <stdio.h>

//todo Definition of functions
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);

//Functions
void selectionSort(int arr[], int n)
{
    int countComparisions = 0;
    int minInRange = arr[0];
    int temp = 454;
    int posMin = 0;
    for (int i = 0; i < n; i++)
    {
        minInRange = arr[i];
        posMin = i;
        for (int j = i + 1; j < n; j++)
        {
            countComparisions++;
            if (arr[j] < minInRange)
            {
                minInRange = arr[j];
                posMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[posMin];
        arr[posMin] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nThe no of Comparisions are %d", countComparisions);
}

void insertionSort(int arr[], int n)
{
    // int currentPos=0;
    int temp = 0;
    int countComparisions = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            countComparisions++;
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nThe no of Comparisions are %d", countComparisions);
}

int main()
{
    int option = 0;
    printf("\nThe Selection Sort and Insertion Sort\n");
    printf("\nEnter the size of array : ");
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n***--------Main Menu--------***");
    printf("\nPress the following keys for following functions");
    printf("\n1)  Selection Sort\n2)  Insertion Sort\n3)  Exit\n");
    do
    {

        printf("\nYou want to Perform Function No : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nThe Selection Sort Sorted array is : \n");
            selectionSort(arr, n);
            break;
        case 2:
            printf("\nThe Insertion Sort Sorted array is : \n");
            insertionSort(arr, n);
            break;
        case 3:
            //! writing so that it does not come in default when we select option 3
            break;
        default:
            printf("\nInvalid Option key is pressed\n");
            break;
        }
    } while (option != 3);
    return 0;
}