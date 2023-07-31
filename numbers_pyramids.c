/**
 ******************************************************************************
 * @file         : numbers_pyramids.c
 * @author       : moustafa-elhagri //@github.com
 * @brief        : This program prints different shapes of pyramid using numbers
 * @details      : Shapes provided:
                    * half pyramid
                    * inverted half pyramid
                    * hollow inverted half pyramid
                    * hollow half pyramid
                    * full pyramid
                    * inverted pyramid
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
        scanf("%i", &rows);

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

    printf("\nThere goes your Half Pyramid!\n\n");

    /* this loop builds the half pyramid */
    for(row_iterator = 1; row_iterator <= rows; row_iterator++)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("1\n");
        }
        else
        {
            /* This loop builds the body of the pyramid row by row.
             * The number of digits in each row equals the order of
             * the row starting from the top = 1 to the base = user input.
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf("%i ", column_iterator);
            }
            printf("\n");
        }

    }

    printf("\n===============================================================");
    printf("\nThere goes your Inverted Half Pyramid!\n\n");

    /* this loop builds the inverted half pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("1\n");
        }
        else
        {
            /* This loop builds the body of the pyramid row by row.
             * The number of digits in each row equals the order of
             * the row descending from the top = user input.
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf("%i ", column_iterator);
            }
            printf("\n");
        }

    }

    printf("\n===============================================================");
    printf("\nThere goes your hollow Inverted Half Pyramid!\
	\n\n");

    /* this loop builds the hollow inverted half pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("1\n");
        }
        /* condition to detect the base */
        else if(row_iterator == rows)
        {
            /* This loop builds the base of the triangle with max number of
             * digits equal to the user input.
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf("%i ", column_iterator);
            }
            printf("\n");
        }
        /* condition for the inner space of the pyramid */
        else
        {
            /* This loop builds the inner rows of the pyramid (excluding the
             * base and the tip).
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                /* The if statement checks if the position is on the outer
                 * perimeter of the pyramid to print the character; otherwise,
                 * it prints an empty space.
                 */
                if((1 == column_iterator) ||
				(column_iterator == (row_iterator)))
                {
                    printf("%i ", column_iterator);
                }
                else
                {
                    printf("  ");
                }

            }
            printf("\n");
        }

    }

	printf("\n===============================================================");
    printf("\nThere goes your hollow Half Pyramid!\
	\n\n");

    /* this loop builds the hollow half pyramid */
    for(row_iterator = 1; row_iterator <= rows; row_iterator++)
    {
        /* special condition for the tip */
        if(1 == row_iterator)
        {
            printf("1\n");
        }
        /* condition to detect the base */
        else if(row_iterator == rows)
        {
            /* This loop builds the base of the triangle with max number of
             * digits equal to the user input.
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf("%i ", column_iterator);
            }
            printf("\n");
        }
        /* condition for the inner space of the pyramid */
        else
        {
            /* This loop builds the inner rows of the pyramid (excluding the
             * base and the tip).
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                /* The if statement checks if the position is on the outer
                 * perimeter of the pyramid to print the character; otherwise,
                 * it prints an empty space.
                 */
                if((1 == column_iterator) ||
				(column_iterator == (row_iterator)))
                {
                    printf("%i ", column_iterator);
                }
                else
                {
                    printf("  ");
                }

            }
            printf("\n");
        }

    }


    printf("\n===============================================================");
    printf("\nThere goes your inverted Pyramid!\n\n");

    /* This loop builds an inverted full pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* special condition for the tip*/
        if(1 == row_iterator)
        {
            printf(" 1\n");

        }
        else
        {
            /* This loop builds the body of the inverted pyramid row by row.
             */
            for(column_iterator = 1; column_iterator <= row_iterator;
            column_iterator++)
            {
                printf(" %i  ", column_iterator);

                /* This if statement starts a new row */
                if(column_iterator == (row_iterator))
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
    printf("\nThere goes your Pyramid!\n\n");

    /* This loop builds a full pyramid */
    for(row_iterator = rows; row_iterator > 0; row_iterator--)
    {
        /* Special condition for the base */
        if(1 == row_iterator)
        {
            for(column_iterator = 1; column_iterator <= rows; column_iterator++)
            {
                printf(" %i  ", column_iterator);
            }
            printf("\n");
            break;
        }
        else {}

        /* this loop indents each row to the required space before printing
         * the required number of asterisks equivalent to each row.
         */
        for(column_iterator = 1; column_iterator < row_iterator;
         column_iterator++)
        {
            printf("  ");
        }

        /* This loop builds the body of the pyramid row by row. */
        for(looper = 1; looper <= indent_pyramid; looper++)
        {
            printf(" %i  ", looper);
        }
        printf("\n"); /* starts new row */
        indent_pyramid++; /* updates indent to recognize current row order */
    }


    printf("\n===============================================================");
    printf("\nThere goes your hollow Pyramid!\n\n");


    for(row_iterator = 1; row_iterator <= rows; row_iterator++)
    {
        /* special condition for the base */
        if(row_iterator == rows)
        {

            for(column_iterator = 1; column_iterator <= rows; column_iterator++)
            {
                printf(" %i  ", column_iterator);
            }
            printf("\n");
        }

        /* special condition for the tip */
        else if(1 == row_iterator)
        {
            /* this loop prints the indentation for the tip */
            for(column_iterator = 1; column_iterator < rows;
             column_iterator++)
            {
                printf("  ");
            }

            printf(" 1"); /* prints the tip */

        }
        /* this condition recognizes the inner rows of the pyramid (excluding
         * the tip and the base)
         */
        else
        {
            /* this loop builds the outer side perimeter of the
             * pyramid and the inner empty space.
             */
            for(column_iterator = 0; column_iterator < (2 * rows);
            column_iterator++)
            {
                /* This condition recognizes the left side perimeter
                 * and prints the number 1.
                 */
                if(column_iterator == ((rows - 1) - (indent_hollow - 1)))
                {
                    printf(" 1");
                }
                /* This condition recognizes the right side and prints row no */
                else if(column_iterator == ((rows - 1) + (indent_hollow - 1)))
				{
					printf(" %i", row_iterator);
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
 el7agri          30-Jul-2023      Created this file and its content.

 */
