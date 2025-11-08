#include <stdio.h>
void Scanarr(int a[],int n){
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&*(a+i));
    }
}
void Printarr(int a[],int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d ",*(a+i));
    }
}

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	Scanarr (a,n);
  Printarr(a,n);
  return 0;	
}
