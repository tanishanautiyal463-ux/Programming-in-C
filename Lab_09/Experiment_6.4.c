/*6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major 
order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format 
only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of 
incompatibility*/

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - 06\n");
	printf("----------------------------\n");
	
	
    int m, n, p, q;
    int i, j, k;

    // Matrix A
    printf("Enter the order of Matrix A (m*n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of Matrix A (m*n):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    //  Matrix B
    printf("Enter the order of Matrix B (p*q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    printf("Enter elements of Matrix B (p*q):\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if(n != p) {
        printf("\nMatrix multiplication is not possible!");
        printf("\n(Number of columns of A must be equal to number of rows of B)\n");
        return 0;
    }

    // Resultant matrix
    int C[m][q];
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nResultant Matrix (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

