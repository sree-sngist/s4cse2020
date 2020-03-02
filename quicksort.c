#include<stdio.h>
void quicksort(int[10],int,int);
void main()
{
int a[10],size,i;
printf("Enter size");
scanf("%d",&size);
printf("Enter element");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
quicksort(a,0,size-1);
printf("sorted array");
for(i=0;i<size;i++)
printf("\t %d",a[i]);
}
void quicksort(int a[10],int lower,int upper)
{
int pivot,p,q,temp;
if(lower<upper)
{
pivot=lower;
p=lower+1;
q=upper;
while(p<q)
{
while(a[p]<a[pivot]&&p<upper)
p++;
while(a[q]>a[pivot])
q--;
if(p<q)
{
temp=a[p];
a[p]=a[q];
a[q]=temp;
}}
temp=a[pivot];
a[pivot]=a[q];
a[q]=temp;
quicksort(a,lower,q-1);
quicksort(a,q+1,upper);
}
}
