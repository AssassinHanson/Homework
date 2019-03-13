#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y,Z,c;
    scanf("%d%d%d",&X,&Y,&Z);
    if(X<Y)
    {
        c=X;
        X=Y;
        Y=c;
    }
    if(X<Z)
    {
        c=X;
        X=Z;
        Z=c;
    }
    if(Y<Z)
    {
        c=Y;
        Y=Z;
        Z=c;
    }
    printf("%3d%3d%3d",X,Y,Z);
}
