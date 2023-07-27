/**
 ******************************************************************************
 * @file         : asterisk_rectangle.c
 * @author       : moustafa-elhagri
 * @brief        : Print a rectangle of asterisks (Full and Hollow)
 * @details      : The number of rows and columns is defined by the user
 ******************************************************************************
 */


/* ************************* Include Section Start ************************* */
#include <stdio.h>
/* ************************* Include Section End   ************************* */

/* ************************* Macro Section Start *************************** */

/* ************************* Macro Section End   *************************** */

/* ************************* Global Variable Section Start ***************** */
int rows;
int columns;
/* ************************* Global Variable Section End   ***************** */


/* ************************* Global Declaration Section Start ************** */

/* ************************* Global Declaration Section End   ************** */

/* ************************* Sub-Program Declarations Section Start ******** */

/* ************************* Sub-Program Declarations Section End   ******** */

int main(void)
{
	/* This loop ensures the program is foolproof against (zero or negative)
	 * user input
	 */
    do
    {
        printf("Enter the number of rows: ");
        scanf("%u", &rows);
        printf("Enter the number of columns: ");
        scanf("%u", &columns);

        if((rows <= 0) || (columns <=0))
        {
            printf("Your input is invalid!\nPlease, Enter a positive"
			" integer.\n");
        }
        else
        {

        }
    }
    while((rows <= 0) || (columns <=0));

    unsigned int row_iterator = 0;
    unsigned int column_iterator = 0;

    printf("\nThere goes your (%ux%u) Full asterisk rectangle!\n\n", rows, columns);

	/* This loop builds the Full asterisk rectangle.
	 * The outer loop moves through rows.
	 */
    for(row_iterator = 0; row_iterator < rows; row_iterator++)
    {
    	/* The inner loop prints the asterisk at each column */
        for(column_iterator = 0; column_iterator < columns; column_iterator++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n===============================================================");
    printf("\nThere goes your (%ux%u) hollow asterisk rectangle!\n\n", rows, columns);

	/* This loop builds the hollow rectangle.
	 * The outer loop moves through rows.
	 */
	for(row_iterator = 0; row_iterator < rows; row_iterator++)
    {
    	/* The inner loop prints the asterisk at the outer perimeter */
        for(column_iterator = 0; column_iterator < columns; column_iterator++)
        {
        	/* condition to recognize the top and bottom sides */
            if(((row_iterator == 0) || (row_iterator == rows - 1)))
            {
            printf("* ");
            }
            /* condition to recognize the left and right sides */
            else if(((column_iterator == 0) || (column_iterator == columns - 1)))
            {
                printf("* ");
            }
            /* condition to recognize the inner space */
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

    return (0);
}

/* ************************* Sub-Program Section Start ********************* */

/* ************************* Sub-Program Section End   ********************* */



/**
 ******************************************************************************
 User             Date             Brief
 ******************************************************************************
 el7agri          26-Jul-2023      Created this file and its content.

 */
