#include<stdio.h>

int main(){
    int mat1[2][2]={{1,2},{3,4}};
    int mat2[2][2]={{4,5},{6,7}};
    printf("sum is :\n");
    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    printf("Product is : \n");
    printf("%d %d\n%d %d",(mat1[0][0]*mat2[0][0]+mat1[0][1]*mat2[1][0]),mat1[0][0]*mat2[0][1]+mat1[0][1]*mat2[1][1],mat1[1][0]*mat2[0][0]+mat1[1][1]*mat2[1][0],mat1[1][0]*mat2[0][1]+mat1[1][1]*mat2[1][1]);

        

    return 0;
} 