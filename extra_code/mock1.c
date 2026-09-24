#include <stdio.h>
#include <string.h>

struct Product
{
    int ID;
    char name[20];
    float ppu;
    int qty;
};

void details(struct Product product[], int n)
{
    int i;

    printf("\nEnter product details\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEnter product details for the %d product:\n", i + 1);

        printf("Enter product ID: ");
        scanf("%d", &product[i].ID);

        getchar();

        printf("Enter Product Name: ");
        fgets(product[i].name, sizeof(product[i].name), stdin);

        product[i].name[strcspn(product[i].name, "\n")] = '\0';

        printf("Enter price per unit: ");
        scanf("%f", &product[i].ppu);

        printf("Enter available quantity: ");
        scanf("%d", &product[i].qty);
    }
}


void display_product(struct Product product[], int n)
{
    int count = 0;

    printf("\n================ PRODUCTS AVAILABLE ================\n");

    printf("%-10s %-20s %-15s %-10s\n", //%-10s print string using 10 spaces, '-' means align to left
           "ID", "Name", "Price", "Quantity");

    printf("-----------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (product[i].qty > 0)
        {
            printf("%-10d %-20s %-15.2f %-10d\n", //%-10d is used for int
                   product[i].ID,
                   product[i].name,
                   product[i].ppu,
                   product[i].qty);

            count++;
        }
    }

    if (count == 0)
    {
        printf("No stock available\n");
    }

    printf("=====================================================\n");
}


void search(struct Product product[], int n)
{
    int id;
    int flag = 0;

    printf("\nEnter Product ID you want to find: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (product[i].ID == id)
        {
            printf("\nProduct Found!\n");

            printf("Name of product: %s", product[i].name);
            printf("\nID of product: %d", product[i].ID);
            printf("\nProduct Price: %.2f", product[i].ppu);
            printf("\nQuantity: %d\n", product[i].qty);

            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\nProduct not found\n");
    }
}


void check_stock(struct Product product[], int n)
{
    int id;
    int flag = 0;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (product[i].ID == id)
        {
            flag = 1;

            if (product[i].qty > 0)
            {
                printf("\nProduct: %s", product[i].name);
                printf("\nAvailable Quantity: %d\n",
                       product[i].qty);
            }
            else
            {
                printf("\nProduct is out of stock\n");
            }

            break;
        }
    }

    if (flag == 0)
    {
        printf("\nProduct not found\n");
    }
}


void generate_bill(struct Product product[], int n)
{
    int id;
    int q;
    int found;
    int i;

    float total_bill = 0;
    float amount;

    printf("\n================ CUSTOMER BILL ================\n");

    printf("%-20s %-8s %-10s %-10s\n",
           "Product", "Qty", "Price", "Amount");

    printf("------------------------------------------------\n");

    while (1)
    {
        printf("\nEnter Product ID (0 to finish): ");
        scanf("%d", &id);

        if (id == 0)
        {
            break;
        }

        found = 0;

        for (i = 0; i < n; i++)
        {
            if (product[i].ID == id)
            {
                found = 1;

                printf("Enter quantity: ");
                scanf("%d", &q);

                if (q <= 0)
                {
                    printf("Invalid quantity\n");
                }
                else if (q > product[i].qty)
                {
                    printf("\nStock not available\n");
                    printf("Available quantity: %d\n",
                           product[i].qty);
                }
                else
                {
                    printf("\nStock available\n");

                    amount = q * product[i].ppu;

                    printf("%-20s %-8d %-10.2f %-10.2f\n",
                           product[i].name,
                           q,
                           product[i].ppu,
                           amount);

                    total_bill = total_bill + amount;

                    /* Update stock */
                    product[i].qty = product[i].qty - q;
                }

                break;
            }
        }

        if (found == 0)
        {
            printf("\nProduct not found\n");
        }
    }

    printf("------------------------------------------------\n");
    printf("Total Bill: Rs. %.2f\n", total_bill);
    printf("================================================\n");
    printf("Thank you for shopping with us!\n");
}


int main()
{
    int n;
    int choice;

    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product product[n];

    do
    {
        printf("\n\n========== SUPERMARKET MANAGEMENT SYSTEM ==========\n");

        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Generate Bill\n");
        printf("5. Check Stock\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                details(product, n);
                break;

            case 2:
                display_product(product, n);
                break;

            case 3:
                search(product, n);
                break;

            case 4:
                generate_bill(product, n);
                break;

            case 5:
                check_stock(product, n);
                break;

            case 6:
                printf("\nThank you for using the system!\n");
                break;

            default:
                printf("\nInvalid choice\n");
        }

    } while (choice != 6);

    return 0;
}