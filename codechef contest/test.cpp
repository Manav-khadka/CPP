
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x, y;
        scanf("%d%d",&x, &y);
        if (y%x!=0)
        {
            printf("%d\n",(y/x));
        }
        else
        {
            printf("%d\n",(y/x)-1);
        }
    }
    return 0;
}