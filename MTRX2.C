//Multiplication of a matrix
#include<stdio.h>
#include<conio.h>
void main(){
int arr1[5][5],row1,col1;
int arr2[5][5],row2,col2,i,j,k,sum=0;
int multi[10][10];
clrscr();
printf("Enter the number of Rows[1st Mtrx]:");
scanf("%d",&row1);
printf("Enter the number of cols[1st Mtrx]:");
scanf("%d",&col1);
printf("Enter the elemnts of the Matrix1:\n ");
for(i=0;i<row1;i++){
 for(j=0;j<col1;j++){
  printf("Enter element on [%d,%d]: ",i,j);
  scanf("%d",&arr1[i][j]);
  }
 }
printf("****\t\t2nd MTRX*****");
printf("Enter the number of Rows[2nd Mtrx]:");
scanf("%d",&row2);
printf("Enter the number of cols[2nd Mtrx]:");
scanf("%d",&col2);
printf("Enter the elemnts of the Matrix2:\n ");
for(i=0;i<row2;i++){
 for(j=0;j<col2;j++){
  printf("Enter element on [%d,%d]: ",i,j);
  scanf("%d",&arr2[i][j]);
  }
 }
 printf("Elements [1st Mtrx] are\n");
for(i=0;i<row1;i++){
 for(j=0;j<col1;j++){
  printf("%4d",arr1[i][j]);
  }
  printf("\n");
 }
printf("Elements [2nd Mtrx] are\n");
for(i=0;i<row2;i++){
 for(j=0;j<col2;j++){
  printf("%4d",arr2[i][j]);
  }
  printf("\n");
 }
//Multiplication
for(i=0;i<row1;i++){
sum=0;
for(j=0;j<col2;j++){
for(k=0;k<row1 || k<col2;k++){
 sum=arr1[i][k]*arr2[k][j];
 }
 multi[i][j]=sum;
}
printf("%d",multi[i][j]);
}

 getch();
}