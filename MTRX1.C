//Sum of two Matrix
#include<stdio.h>
#include<conio.h>
void main(){
int arr[20][30],m,n,i,j,sum;
clrscr();
printf("Enter the number of Rows:");
scanf("%d",&m);
printf("Enter the number of cols:");
scanf("%d",&n);
printf("Enter the elemnts of the Matrix:\n ");
for(i=0;i<m;i++){
 for(j=0;j<n;j++){
  printf("Enter element on [%d,%d]: ",i,j);
  scanf("%d",&arr[i][j]);
  }
 }
printf("Elements are\n");
for(i=0;i<m;i++){
 for(j=0;j<n;j++){
  printf("%4d",arr[i][j]);
  }
  printf("\n");
 }
//row sum
for(i=0;i<m;i++){
sum=0;
for(j=0;j<n;j++){
 sum=sum+arr[i][j];
 }
 printf("%dth row sum: %d\n",i,sum);
}
//col sum
for(j=0;j<n;j++){
sum=0;
for(i=0;i<m;i++){
sum=sum+arr[i][j];
}
printf("%dth Col sum: %d\n",j,sum);
}
getch();
}