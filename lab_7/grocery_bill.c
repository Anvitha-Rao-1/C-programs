#include <stdio.h>

int main()
{
    int choice, qty;
    char ch;
    float bill, totalBill;
    int GST;

    int stock_rice = 100, stock_wheat = 150, stock_millet = 200, stock_maida = 250;
    int price_rice = 74, price_wheat = 48, price_millet = 80, price_maida = 67;

    do
    {
        printf("\n====================================\n");
        printf(" WAREHOUSE BILLING SYSTEM\n");
        printf("====================================\n");
        printf("1. Bill External Client\n");
        printf("2. Bill Internal Client\n");
        printf("3. Check Stock Availability\n");
        printf("4. Find Product Aisle\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nProduct (W-Wheat R-Rice M-Maida L-Millet): ");
                scanf(" %c", &ch);

                printf("Enter Quantity: ");
                scanf("%d", &qty);

                if(qty <= 0)
                {
                    printf("Invalid Quantity!\n");
                    break;
                }

                if(ch=='W' || ch=='w')
                {
                    if(qty <= stock_wheat)
                    {
                        bill = qty * price_wheat;
                        stock_wheat -= qty;

                        printf("\n========== BILL ==========\n");
                        printf("Product : Wheat\n");
                        printf("Quantity: %d\n", qty);
                        printf("Rate    : %d\n", price_wheat);
                        printf("Amount  : %.2f\n", bill);
                        printf("Remaining Stock : %d\n", stock_wheat);
                        printf("==========================\n");
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='R' || ch=='r')
                {
                    if(qty <= stock_rice)
                    {
                        bill = qty * price_rice;
                        stock_rice -= qty;

                        printf("\n========== BILL ==========\n");
                        printf("Product : Rice\n");
                        printf("Quantity: %d\n", qty);
                        printf("Rate    : %d\n", price_rice);
                        printf("Amount  : %.2f\n", bill);
                        printf("Remaining Stock : %d\n", stock_rice);
                        printf("==========================\n");
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='M' || ch=='m')
                {
                    if(qty <= stock_maida)
                    {
                        bill = qty * price_maida;
                        stock_maida -= qty;

                        printf("\n========== BILL ==========\n");
                        printf("Product : Maida\n");
                        printf("Quantity: %d\n", qty);
                        printf("Rate    : %d\n", price_maida);
                        printf("Amount  : %.2f\n", bill);
                        printf("Remaining Stock : %d\n", stock_maida);
                        printf("==========================\n");
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='L' || ch=='l')
                {
                    if(qty <= stock_millet)
                    {
                        bill = qty * price_millet;
                        stock_millet -= qty;

                        printf("\n========== BILL ==========\n");
                        printf("Product : Millet\n");
                        printf("Quantity: %d\n", qty);
                        printf("Rate    : %d\n", price_millet);
                        printf("Amount  : %.2f\n", bill);
                        printf("Remaining Stock : %d\n", stock_millet);
                        printf("==========================\n");
                    }
                    else
                        printf("Insufficient Stock!\n");
                }
                else
                {
                    printf("Invalid Product!\n");
                }
                break;

            case 2:

                printf("\nProduct (W-Wheat R-Rice M-Maida L-Millet): ");
                scanf(" %c", &ch);

                printf("Enter Quantity: ");
                scanf("%d", &qty);

                printf("Enter GST Number: ");
                scanf("%d", &GST);

                if(ch=='W' || ch=='w')
                {
                    if(qty <= stock_wheat)
                    {
                        bill = qty * price_wheat;
                        totalBill = bill + (bill * 0.18);
                        stock_wheat -= qty;

                        printf("\n========== BILL ==========\n");
                        printf("GST No  : %d\n", GST);
                        printf("Product : Wheat\n");
                        printf("Quantity: %d\n", qty);
                        printf("Bill    : %.2f\n", bill);
                        printf("GST     : %.2f\n", bill*0.18);
                        printf("Total   : %.2f\n", totalBill);
                        printf("==========================\n");
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='R' || ch=='r')
                {
                    if(qty <= stock_rice)
                    {
                        bill = qty * price_rice;
                        totalBill = bill + (bill * 0.18);
                        stock_rice -= qty;

                        printf("\nTotal Bill = %.2f\n", totalBill);
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='M' || ch=='m')
                {
                    if(qty <= stock_maida)
                    {
                        bill = qty * price_maida;
                        totalBill = bill + (bill * 0.18);
                        stock_maida -= qty;

                        printf("\nTotal Bill = %.2f\n", totalBill);
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else if(ch=='L' || ch=='l')
                {
                    if(qty <= stock_millet)
                    {
                        bill = qty * price_millet;
                        totalBill = bill + (bill * 0.18);
                        stock_millet -= qty;

                        printf("\nTotal Bill = %.2f\n", totalBill);
                    }
                    else
                        printf("Insufficient Stock!\n");
                }

                else
                    printf("Invalid Product!\n");

                break;

            case 3:

                printf("\nEnter Product (W/R/M/L): ");
                scanf(" %c", &ch);

                if(ch=='W' || ch=='w')
                    printf("Wheat Stock : %d\n", stock_wheat);

                else if(ch=='R' || ch=='r')
                    printf("Rice Stock : %d\n", stock_rice);

                else if(ch=='M' || ch=='m')
                    printf("Maida Stock : %d\n", stock_maida);

                else if(ch=='L' || ch=='l')
                    printf("Millet Stock : %d\n", stock_millet);

                else
                    printf("Invalid Product!\n");

                break;

            case 4:

                printf("\nEnter Product (W/R/M/L): ");
                scanf(" %c", &ch);

                if(ch=='W' || ch=='w')
                    printf("Wheat available in aisles 2,4,6,8,10\n");

                else if(ch=='R' || ch=='r')
                    printf("Rice available in aisles 3,6,9\n");

                else if(ch=='M' || ch=='m')
                    printf("Maida available in aisles 5,10\n");

                else if(ch=='L' || ch=='l')
                    printf("Millet available in aisles 4,8\n");

                else
                    printf("Invalid Product!\n");

                break;

            case 5:
                printf("\nThank you for using Warehouse Billing System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}