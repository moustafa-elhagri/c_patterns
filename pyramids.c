/**
 ******************************************************************************
 * @file         : pyramids.c
 * @author       : moustafa-elhagri //@github.com
 * @brief        : This program prints different types of asterisk shapes
 * @details      : Shapes provided:
                    * right-angled triangle
                    * inverted right-angled triangle
                    * hollow inverted right-angled triangle
                    * inverted full pyramid
                    * full pyramid
                    * hollow full pyramid
 ******************************************************************************
 */


/* ************************* Include Section Start ************************* */
#include <stdio.h>
/* ************************* Include Section End   ************************* */

/* ************************* Macro Section Start *************************** */

/* ************************* Macro Section End   *************************** */

/* ************************* Global Variable Section Start ***************** */
int rows; /*variable to store user input */
/* ************************* Global Variable Section End   ***************** */


/* ************************* Global Declaration Section Start ************** */

/* ************************* Global Declaration Section End   ************** */

/* ************************* Sub-Program Declarations Section Start ******** */

/* ************************* Sub-Program Declarations Section End   ******** */

int main(void)
{

    /* safety measure to prevent zero value or negative value user input */
    do
    {
        printf("Enter the height you want for the Pyramid: ");
        scanf("%u", &rows);

        if(rows <= 0)
        {
            printf("Your input is invalid!\nPlease, Enter a positive integer.\
		\n");
        }
        else
        {

        }
    }
    while(rows <= 0);

    /* defining loop variables */
    unsigned int row_iterator = 0;
    unsigned int column_iterator = 0;
    unsigned int pyramid_iterator = 0;
    unsigned int looper = 0;
    unsigned int indent = 1;
    unsigned int indent_pyramid = 1;
    unsigned int indent_hollow = 1;

    printf("\nThere goes your asterisk right-angled triangle!\n\n");

    /* this loop builds the tight-angled triangle */
    for(row_iterator = 0; row_iterator < rows; row_iterator++)
    {
        /* special condition for the tip */
        if(0 == row_iterator)
        {
            printf("*\n");
        }
        else
        {
            /* This loop builds the body of the triangle row by row.
             * The number of asterisk in each row equals the order of
             * the row starting from the top = 1 to the base = user input.
             */
            for(column_iterator = 0; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf("*");
            }
            printf("\n");
        }

    }

    printf("\n===============================================================");
    printf("\nThere goes your inverted asterisk right angle triangle!\n\n");

    /* this loop builds the inverted right-angled triangle */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("*\n");
        }
        else
        {
            /* This loop builds the body of the triangle row by row.
             * The number of asterisk in each row equals the order of
             * the row descending from the top = user input.
             */
            for(column_iterator = 0; column_iterator < row_iterator;
            column_iterator++)
            {
                printf("*");
            }
            printf("\n");
        }

    }

    printf("\n===============================================================");
    printf("\nThere goes your hollow inverted asterisk right-angle triangle!\
	\n\n");

    /* this loop builds the hollow inverted right-angled triangle */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("*\n");
        }
        else if(row_iterator == rows)
        {
            /* This loop builds the base of the triangle with max number of
             * asterisks equal to the user input.
             */
            for(column_iterator = 0; column_iterator < row_iterator;
            column_iterator++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            /* This loop builds the inner rows of the triangle (excluding the
             * base and the tip).
             */
            for(column_iterator = 0; column_iterator < row_iterator;
            column_iterator++)
            {
                /* The if statement checks if the position is on the outer
                 * perimeter of the triangle to print an asterisk; otherwise, it
                 * prints an empty space.
                 */
                if((0 == column_iterator) ||
		(column_iterator == (row_iterator - 1)))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }

    }

    printf("\n===============================================================");
    printf("\nThere goes your inverted asterisk Full Pyramid!\n\n");

    /* This loop builds an inverted full pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip*/
        if(1 == row_iterator)
        {
            printf(" *\n");

        }
        else
        {
            /* This loop builds the body of the inverted pyramid row by row.
             * The number of asterisk in each row equals the order of
             * the row descending from max at the base (equal to user input)
             * until it reaches the tip. (decrement = 1).
             */
            for(column_iterator = 0; column_iterator < row_iterator;
            column_iterator++)
            {
                printf(" *  ");

                /* This if statement starts a new row */
                if(column_iterator == (row_iterator - 1))
                {
                    printf("\n");

                    /* this loop indents each new row */
                    for(looper = 0; looper < indent; looper++)
                    {
                        printf("  ");
                    }
                }
                else {}

            }


        }
        indent++; /* updates the indent to recognize the current row order */

    }


    printf("\n===============================================================");
    printf("\nThere goes your asterisk Full Pyramid!\n\n");

    /* This loop builds a full pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* Special condition for the base */
        if(1 == row_iterator)
        {
            for(column_iterator = 0; column_iterator < rows; column_iterator++)
            {
                printf(" *  ");
            }
            printf("\n");
            break;
        }
        else {}

        /* this loop indents each row to the required space before printing
         * the required number of asterisks equivalent to each row.
         */
        for(column_iterator = 0; column_iterator <= (row_iterator - 2);
         column_iterator++)
        {
            printf("  ");
        }

        /* This loop builds the body of the pyramid row by row.
         * The number of asterisk in each row equals the order of
         * the row starting from tip (1 asterisk) to the max at the
         * base (equals user input) (increment = 1 asterisk per row).
         */
        for(looper = 0; looper < indent_pyramid; looper++)
        {
            printf(" *  ");
        }
        printf("\n"); /* starts new row */
        indent_pyramid++; /* updates indent to recognize current row order */
    }


    printf("\n===============================================================");
    printf("\nThere goes your asterisk hollow Full Pyramid!\n\n");

    /* This loop builds a hollow full pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the base */
        if(1 == row_iterator)
        {

            for(column_iterator = 0; column_iterator < rows; column_iterator++)
            {
                printf(" *  ");
            }
            printf("\n");
        }

        /* special condition for the tip */
        else if(row_iterator == rows)
        {
            /* this loop prints the indentation for the tip */
            for(column_iterator = 0; column_iterator <= (row_iterator - 2);
             column_iterator++)
            {
                printf("  ");
            }

            printf(" *  "); /* prints the tip */

        }
        /* this condition recognizes the inner rows of the pyramid (excluding
         * the tip and the base)
         */
        else
        {
            /* this loop builds the outer side (asterisks) perimeter of the
             * pyramid and the inner empty space.
             */
            for(column_iterator = 0; column_iterator < (2 * rows -1);
            column_iterator++)
            {
                /* This condition recognizes the outer side perimeter
                 * and prints the asterisks.
                 */
                if((column_iterator == ((rows - 1) - (indent_hollow - 1))) ||
                   (column_iterator == ((rows - 1) + (indent_hollow - 1))))
                {
                    printf(" *");
                }
                /* this condition prints the empty inner space */
                else
                {
                    printf("  ");
                }

            }
        }
        printf("\n"); /* starts new row */
        indent_hollow++; /* updates the indent to recognize the order of the
        current row */
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
