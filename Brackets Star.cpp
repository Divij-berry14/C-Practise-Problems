#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j>=6+i || j<=7-i)
            {                                                                              
                if(j>6)
                {
                    printf("(");
                }
                else
                {
                        printf(")");                                                           //((((()))))
                    }                                                                          //((((( )))))
                }                                                                              //((((   ))))
                else                                                                           //(((     )))
                {                                                                              //((       ))
                    printf(" ");                                                               //(         )
                }
            }
        printf("\n");
    }
}

