//find the occurrence of an integer in the array?
#include<stdio.h>
int main(){
    int arr[]={12,34,21,12,23,65,87,43,21,65,132,54,98};
    int sizearr=sizeof(arr)/sizeof(arr[0]);

    int occr=0,num,i;

    printf("original array:\n");
    printf("{");
    for(i=0;i<sizearr;i++){
        printf("%d,",arr[i]);
    }
    printf("}\n");

    printf("Please Enter the Array Item to Know = ");
	scanf("%d", &num);

	for (i = 0; i < sizearr; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}
    
    //printf("occurrance of element %d=%d time",occ);
    printf("occurrance of element %d time",occr);
    return 0;
}


