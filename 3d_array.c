//3D Array
#include <stdio.h>

int main() {
    int arry[2][3][4] = 
    {
       { {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
       },
       { {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
       }
    };
    
    for(int i=0; i<2; i++)
    {
        printf("{ \n");
        for(int j=0; j<3 ;j++)
        {
            printf(" { ");
            for(int k=0; k<4; k++)
            {
                printf("%d ",arry[i][j][k]);
            }
            printf("} \n");
        }
        printf("} \n");
    }
    
    
    return 0;
}


//83310 35667 -> Punarjan Ayurvedh Hospital

//1234567890-
