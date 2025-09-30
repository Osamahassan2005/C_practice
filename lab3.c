#include<stdio.h>
#include<string.h>
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
   int a,b;
   printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    printf("Before swapping:a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:a=%d b=%d\n",a,b);
    return 0;
}

int main(){
    char str[100];
    char *ptr;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    
    ptr=str + strlen(str)-1;
    while(ptr>=str){
        if(*ptr!='\n'){
            printf("%c",*ptr);
        }
        ptr--;
    }
    return 0;
}

int main() {
    int arr[50], n;
    int *ptr;

    printf("Enter no of elements:");
    scanf("%d", &n);

    ptr = arr;  // pointer points to first element of arr

    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("The elements in the array are:\n");
    for(int i = 0; i < n; i++)
        printf("Value of arr [%d] = %d ", i, *(ptr + i));

    return 0;
}

int main() {
    int arr[50], n,found=0,key;
    int *ptr;

    printf("Enter no of elements:");
    scanf("%d", &n);

    ptr = arr;  // pointer points to first element of arr

    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);

    for(int i = 0; i < n; i++){
        if(*(ptr + i)==key){
            printf("Element %d found at index %d\n",key,i+1);
            found=1;
            break;
        }
    }
        if(!found){
            printf("Element %d not found in the array\n",key);
        }
    return 0;
    }
    
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int *p1, *p2, *p3;
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Set pointers
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    // Add matrices using pointers
    for (i = 0; i < r * c; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    // Print result
    printf("Sum of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

   return 0;
}
