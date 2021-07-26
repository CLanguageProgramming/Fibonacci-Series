#include <stdio.h>
int main()
{
    int n1=0;
    int n2=1;
    int ans=0;
    int get;
    int counter=0;
    printf("Enter the number of Loops >>");
    scanf("%d", &get);
   // printf("0\n");
    for(int i=1;i<=get;i++)
    {
        counter++;
        printf("%d) ", counter);
        n1=0;
        n2=1;
        for(int j=1;j<=i;j++)
        {
            ans=n1+n2;
            printf("%d ", ans);
            n2=n1;
            n1=ans;
        }
        printf("\n");
    }
}
