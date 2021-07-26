#include <stdio.h>
int main()
{
    int n1=0;
    int n2=1;
    int ans=0;
    int get;
    printf("Enter the number of Loops >>");
    scanf("%d", &get);
    printf("0\n");
    for(int i=1;i<=get;i++)
    {
        ans=n1+n2;
        printf("%d\n", ans);
        n2=n1;
        n1=ans;
    }
}
