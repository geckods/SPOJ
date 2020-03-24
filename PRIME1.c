#include <stdio.h>
#include <math.h>

int isprime(int x){
  int i,n;
  if (x<=1){
    return 0;
  }
  else if (x<=3){
    return 1;
  }
  else{
    if (x%2==0 || x%3==0){
      return 0;
    }
    else{
      i = 5;
      n = sqrt(x);
      while(i<=n){
        if (x%i==0 || x%(i+2)==0) return 0;
        i+= 6;
      }
      return 1;
    }
  }
}

int main(){
  int t;
  scanf("%d",&t);
  int arr[t][2];
  for(int i=0;i<t;i++){
    scanf("%d",&arr[i][0]);
    getchar();
    scanf("%d",&arr[i][1]);
    getchar();
  }

  for(int i=0;i<t;i++){
    for(int j=arr[i][0];j<=arr[i][1];j++){
      if (isprime(j)) printf("%d\n",j);
    }
    puts("");
  }

}
