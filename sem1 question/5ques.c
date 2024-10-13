#include <stdio.h>
void pattern(int wave_height,int wave_length);
// Function definition 
void pattern(int wave_height, int wave_length) { 
	int i, j, k, e, n, count, x; 
	e = 2; 
	x = 1; 

	// for loop for height of wave 
	for (i = 0; i < wave_height; i++) { 

		for (j = wave_height; j <= wave_height + i; j++) {
			printf(" ");
            }
		// for loop for wave length 
		for (count = 1; count <= wave_length; count++) { 
			// checking for intermediate spaces 
			for (n = (wave_height + wave_height - 2); n >= x; n--){
                printf(" ");
                }
			for (k = 1; k <= e; k++) { 
				if (k == 1) 
					printf("* ");
				else if (k == e) 
					printf("* "); 
				else
					printf(" ");
			} 
		} 
        printf("\n");

		// incrementing counters value by two 
		x = x + 2; 
		e = e + 2; 
		//cout << endl; 
	} 
} 

// Driver code 
int main() 
{ 
	// change value to decrease or increase 
	// the height of wave 
	int wave_height = 4; 

	// change value to decrease or increase 
	// the length of wave 
	int wave_length = 2; 

	pattern(wave_height, wave_length); 

	return 0; 
} 

/*
output:
       * *       * * 
      *   *     *   * 
     *     *   *     * 
    *       * *       *
*/


// #include<stdio.h>
// int main(){
//     int i,j,k;
//     int num;

//     for(int i=1;i<=5;i++){
//         k=1;
//         num=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",k);
//             num = num+2;
//             k = k+num;
//         }
//         printf("\n");
//     }
//     return 0;
// }


//       *  *              *  *
//     *      *          *      *
//   *           *     *           *
//                 * *               *



/*
#include<stdio.h>
int main(){
    int i,j,k;
    int num;

    for(int i=1;i<=5;i++){
        k=1;
        num=1;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            num = num+2;
            k = k+num;
        }
        printf("\n");
    }
    return 0;
}

output:
1 
1 4
1 4 9
1 4 9 16
1 4 9 16 25
*/

/*
#include<stdio.h>
int main(){
    int num;
    for(int i=1;i<=5;++i){
        num=i;
        for(int j=1;j<=i;++j){
            printf("%d ",num);
            num += 5-j;
        }
        printf("\n");
    }
    return 0;
}

output:
1 
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/

/*
#include<stdio.h>
int main(){
    int n=5;
    int i;
    for(i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
output:
* 
* *
* * *
* * * *
* * * * *
*/


/*
#include<stdio.h>
int main(){
    int arr[5]={1,4,9,16,25};
    int n=5;
    int i;
    for(i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}
output:
1 
1 4
1 4 9
1 4 9 16
1 4 9 16 25
*/