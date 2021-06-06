#include <stdio.h>
#include <stdlib.h>

char s[]="Source",a[]="Auxiliary",d[]="Destination";
int main()
{
    int n;
    printf(" \t  TOWER OF HANOI");
    printf("\n");
    printf("\n\tEnter No. of Disks :");
    scanf("%d",&n);
    hanoi(n,s,a,d);
    printf("\n");
}

int i=1;
void hanoi(n,s,a,d)
{
    printf("\t");
    if (n==1)
    {
        printf("\nStep %d  Disk %d : %s --> %s",i,n,s,d);
        i=i+1;
        return 0;
    }
    hanoi(n-1,s,d,a);
    printf("\nStep %d  Disk %d : %s --> %s",i,n,s,d);
    i=i+1;
    hanoi(n-1,a,s,d);
}
