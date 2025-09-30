#include<stdio.h>
//------------------Q-1
int main() {
    int sum,n,i=0;

    printf("Enter a value of n: ");
    scanf("%d",&n);

    printf("using for loop\n");
    sum=0;
    for(i=1;i<=n;i++) {
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nSum = %d\n",sum);
    
    printf("using while loop\n");
    sum=0;
    i=1;
    while(i<=n){
        printf("%d ",2*i-1);
        sum+=2*i-1;
        i++;
    }
    printf("\nSum = %d\n",sum);

    printf("using do-while loop\n");
    sum=0;
    i=1;
    do{
        printf("%d ",2*i-1);
        sum+=2*i-1;
        i++;
    }while(i<=n);
    printf("\nSum = %d\n",sum);

    return 0;

}

//-----------------q2--------------------
int main(){
    int n,i;
    n=4;             
    for(i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
           printf("* ");
    }
    printf("\n");
    }
    return 0;
}

//-----------------Q3--------------------
int main(){
    char string1[100]="Hello World";
    char string2[100]="Hallo World";
    int i=0;
    int same=1;
    while(string1[i]!='\0' && string2[i]!='\0') {
         if(string1[i]!=string2[i] ){
            same=0;
            break;
        }
        i++;
        }
    if(same==1){
        printf("Strings are same\n");
    } else {
        printf("Strings are not same\n");
    }
    return 0;
    }

//------------Q4..............
#include<stdio.h>
int main() {
    char sent [200];
    int i;
    printf("Enter the sentence: ");
    fgets(sent, sizeof(sent), stdin);
    for(i=0;sent[i]!='\0';i++) {
        if(sent[i]>='A' && sent[i]<='Z') {
            sent[i]=sent[i]+32;
        } else if(sent[i]>='a' && sent[i]<='z') {
            sent[i]=sent[i]-32;
        }
    }
    printf("The converted string is: %s\n", sent);
    return 0;
}   

//-----------------Q5--------------------


struct Distance{
        int feet;
        int inch;
    };
int main(){
    struct Distance d1,d2,sum;
    printf("Enter 1st distance in feet and inch: ");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("Enter 2nd distance in feet and inch: ");
    scanf("%d %d",&d2.feet,&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

    if(sum.inch>=12){
        sum.feet+= sum.inch/12;
        sum.inch= sum.inch % 12;
    }
    printf("Sum of distances= %d feet %d inch\n",sum.feet,sum.inch);
    return 0;
}

//-----------------Q6--------------------
int main(){
    int arr[100],n,i,j,count;
    printf("Enter the size of aRRAY: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("unique elements are: ");

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i != j && arr[i]==arr[j]){
                count++;
                break;
            }
            
        }
        if(count==0){
            printf("%d ",arr[i]);
        }
    }   
    
    return 0;
}