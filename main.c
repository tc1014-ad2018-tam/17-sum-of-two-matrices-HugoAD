/* This program allows the user to sum
 * two matrix with certain specifications such as
 * "n" should be greater than 1 and less than or equals as 10.
 *
 * Author: Hugo Aguirre Doria
 * Date: october 16th,2018
 * */
 *

#include <stdio.h>

int main() {
    //Variable declaration
    int m1 [10][10];
    int m2 [10][10];
    int sm [10][10];
    int n;
    int j;


    printf("Give me the number of rows and columns that you want:");  //we ask the user the number of rows and columns
    scanf("%i", &n);


    // lineaments
    if (n < 1 || n >= 11) {
        printf("The number given is not valid, input a number from 1 to 10. ");
        scanf("%i", &n);
    }



    printf("Give me the elements of the first matrix: \n");
    for (int i=0; i<n; i++) {
        for (j = 0; j<n; j++) {               //we ask the user for the elements in the first matrix
            scanf("%i", &m1[i][j]);
        }
    }

    printf("\n");

    printf("Give me the values of the second matrix: \n");
    for (int i=0; i<n; i++) {
        for (j = 0; j<n; j++) {                 //we ask the user for the elements in the second matrix
            scanf("%i", &m2[i][j]);
        }
    }

    printf("\n");


    printf("This is the first matrix: \n");
    for (int i=0; i<n; i++) {
        for (j = 0; j<n; j++)  {                    //we print the first matrix
            printf("\t%i", m1[i][j]);
        }
        printf("\n");
    }

    printf("This is the second matrix: \n");
    for (int i=0; i<n; i++) {
        for (j = 0; j<n; j++) {                  //we print the second matrix
            printf("\t%i", m2[i][j]);
        }
        printf("\n");
    }


    printf("The sum of the matrix is: \n");
    for (int i=0; i<n; i++) {
        for (j = 0; j<n; j++) {
            sm[i][j] = m1[i][j] + m2[i][j];          //we print the sum of both matrix as a new one
            printf("\t%i", sm[i][j]);
        }
        printf("\n");
    }

    return 0;
}

