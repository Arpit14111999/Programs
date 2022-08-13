#include <stdio.h>
int n, i, count = 0;
#define MAX 20
int a[MAX];   //declaring an array of 20 elements
void create() //creating an array
{
    printf("enter the no. of elements in the array :\n");
    scanf("%d", &n);
    printf("enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display() //displaying the array
{
    printf("---------------------------------------\n");
    printf("the  elements of your array are :\n");
    printf("---------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void insert()
{ //insertion of elements inside the array
    if (n == MAX)
    {
        printf("--------OVERFLOW---------\n");
        return;
    }
    int pos, element;
    printf("enter the position for the new element :\n");
    scanf("%d", &pos);
    printf("enter the element you want to add :\n");
    scanf("%d", &element);
    pos = pos - 1;
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = element;
    n += 1; //increasing the size after insertion of an element
}
void deletee() //deleting the element from an array
{
    if (n == 0)
    {
        printf("--------UNDERFLOW---------\n");
        return;
    }
    int pos;
    printf("enter the position from where you want to delete :\n");
    scanf("%d", &pos);
    pos -= 1;
    int item = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n -= 1; //decreasing the size after deletion of an element
}
int main()
{
    int choice;
    create();
    display();
    printf("\nenter your choice:\n");
    do
    {

        printf("\n1- Insert \n2- Delete\n3- Exit\n");
        scanf("%d", &choice);
        switch (choice)
        
        {
        case 1:
            insert();
            display();
            break;
        case 2:
            deletee();
            display();
            break;
        case 3:
            break;
        default:
            printf("INVALID CHOICE\n");
        }
       
    } while (choice != 3);
            
    return 0;
}
