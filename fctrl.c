#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d",&t);
  long arr[t];
  long ans;
  long check,curr;

  for(int i=0;i<t;i++){
    scanf("%ld",&arr[i]);
  }

  for(int i=0;i<t;i++){
    check = 5;
    ans=0;
    curr = arr[i];
    while (check<=curr){
      ans += (curr/check);
      check *= 5;
    }

    printf("%ld\n",ans);
  }
}
      
