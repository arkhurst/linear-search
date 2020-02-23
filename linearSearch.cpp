//ID:10665476
#include<studio.h>
using namespace std;

int LinearSearch (int [], int, int);

int main (void){
	
	int arr[20],  num, key;
	int i, iPosition = 0;
	printf("\nEnter the size of the array\n");
	scanf("%d",&num);
	printf("\nEnter the key element\n");
	scanf('%d',&key);
	
	iPosition = LinearSearch (arr, key, num);
	
	if (iPostion==-1)
	   printf("\n Element not found \n");
	else
	   printf("\n Element found at postion %d\n", iPosition ) ;
	   
	return 0; 
}
