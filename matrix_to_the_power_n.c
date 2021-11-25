#include<stdio.h>
 
int main(){
 
    int p,s, len=2;
 
    printf("Enter the size of the matrix: ");
    scanf("%d", &p);
 
    printf("Enter the power of the matrix: ");
    scanf("%d", &s);
 
    int a[p][p], b[p][p], c[p][p];
 
    int i,j,k;
 
 
    for(i=0; i<p; i++){
        for(j=0; j<p; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
 
     if(s==1){
        for(i=0; i<p; i++){
        for(j=0; j<p; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
  }
 
     else if(s>1){
 
        for(i=0; i<p; i++){
          for(j=0; j<p; j++){
 
            b[i][j]=a[i][j];
        }
    }
 
        for(i=0; i<p; i++){
          for(j=0; j<p; j++){
 
            c[i][j]=0;
        }
    }
 
 
    while(1){
 
       for(i=0; i<p; i++){
        for(j=0; j<p; j++){
            for(k=0; k<p; k++){
                    c[i][j]+=a[i][k]*b[k][j];
 
                }
            }
        }
 
        if(len<s){
            for(i=0; i<p; i++){
                for(j=0; j<p; j++){
 
                b[i][j]=c[i][j];
            }
        }
 
            for(i=0; i<p; i++){
                for(j=0; j<p; j++){
 
                c[i][j]=0;
            }
        }
        len++;
        }
        else{
            break;
        }
 
    }
 
    printf("\n\nResult: \n\n");
 
        for(i=0; i<p; i++){
            for(j=0; j<p; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
 
    }
 
 
return 0;
}
