#include<stdio.h>
#include<iostream>
#include<string.h>
#include<functional>

using namespace std;
bool symetric_test(int matrix[101][101],int n)
{
    long long int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(matrix[i][j]!=matrix[n-1-i][n-1-j]){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int matrix[101][101];
    long long int m,n,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        cin >> n;
        bool ok=true;
        for(m=0;m<n;m++){
            for(j=0;j<n;j++){
                scanf("%d",&matrix[m][j]);
                if(matrix[m][j]<0)
                    ok=false;
            }
        }

        printf("Test #%d: ",i+1);
        if(ok && symetric_test(matrix,n)){
            printf("Symmetric.\n");
        }
        else
            printf("Non-symmetric.\n");
    }

    return 0;
}
