#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int max(int *arr,int n){
  int max = arr[0];
  for(int i=1;i<n;i++){
    max = (arr[i]>max)?arr[i]:max;
  }
  return max;
}

int process(int arr[100][100], int n, int m){
  int temp[3];
  for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
      //memset(temp,0,3);
//      printf("%d %d %d n:%d m:%d\n",i,j,arr[i][j],n,m);
      temp[0] = temp[1] = temp[2] = 0;

      if (j>0){
        temp[0] = arr[i-1][j-1];
      }

      temp[1] = arr[i-1][j];

      
      if (j<m){
        temp[2] = arr[i-1][j+1];
      }

      
      arr[i][j] += max(temp,3);
//      printf("%d %d %d\n",i,j,arr[i][j]);

    }
  }

  return max(arr[n-1],m);
}

int main(){
  int t,n,m;
  scanf("%d",&t);
  int arr[t][100][100];
  int nmarr[t][2];
  getchar();
  for(int i=0;i<t;i++){
    scanf("%d",&n);
    getchar();
    scanf("%d",&m);
    getchar();
    nmarr[i][0]=n;
//    printf("\nN:%d, nmarr[i][0]:%d, i:%d",n,nmarr[i][0],i);
    nmarr[i][1]=m;
//    printf("\nM:%d, nmarr[i][1]:%d, i:%d",m,nmarr[i][1],i);
    for(int a=0;a<n;a++){
      for(int b=0;b<m;b++){
        scanf("%d",&arr[i][a][b]);
        getchar();
      }
    }
  }

//  printf("\nt:%d n:%d m:%d nmarr[0][0]:%d nmarr[0][1]:%d\n",t,n,m,nmarr[0][0],nmarr[0][1]);

  for(int i=0;i<t;i++){
    printf("%d\n",process(arr[i],nmarr[i][0],nmarr[i][1]));
  }
  
}
