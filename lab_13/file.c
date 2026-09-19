
#include<stdio.h>
#include<string.h>

struct customer
{
    int id;
    char name[50];
    int prev;
    int curr;
    int units;
    float bill;
    float change;
    float gst;
    float fine;
    float total;
};

int main()
{
    FILE *fp;
    struct customer c;
    int ch;
    int due;

    printf("====================================\n");
    printf("       ELECTRICITY BILL SYSTEM\n");
    printf("====================================\n");

    printf("Enter Customer ID: ");
    scanf("%d",&c.id);
    getchar();

    printf("Enter Customer Name: ");
    fgets(c.name,sizeof(c.name),stdin);
    c.name[strcspn(c.name,"\n")]='\0';

    printf("Enter Previous Reading: ");
    scanf("%d",&c.prev);

    printf("Enter Current Reading: ");
    scanf("%d",&c.curr);

    if(c.curr<c.prev)
    {
        printf("\nInvalid meter reading.\n");
        return 0;
    }

    c.units=c.curr-c.prev;

    if(c.units<=100)
        c.bill=c.units*1.5;
    else if(c.units<=200)
        c.bill=100*1.5+(c.units-100)*2.5;
    else if(c.units<=500)
        c.bill=100*1.5+100*2.5+(c.units-200)*4;
    else
        c.bill=100*1.5+100*2.5+300*4+(c.units-500)*6;

    printf("\nEnter percentage increase/decrease: ");
    scanf("%f",&c.change);

    c.bill=c.bill+(c.bill*c.change/100);

    c.gst=c.bill*18/100;

    printf("Is the due date over? (1=Yes, 0=No): ");
    scanf("%d",&due);

    if(due==1)
        c.fine=200;
    else
        c.fine=0;

    c.total=c.bill+c.gst+c.fine;

    fp=fopen("bill.txt","w");

    if(fp==NULL)
    {
        printf("File cannot be opened.\n");
        return 0;
    }

    fprintf(fp,"====================================\n");
    fprintf(fp,"       ELECTRICITY BILL\n");
    fprintf(fp,"====================================\n");
    fprintf(fp,"Customer ID      : %d\n",c.id);
    fprintf(fp,"Customer Name    : %s\n",c.name);
    fprintf(fp,"Previous Reading : %d\n",c.prev);
    fprintf(fp,"Current Reading  : %d\n",c.curr);
    fprintf(fp,"Units Consumed   : %d\n",c.units);
    fprintf(fp,"Bill             : Rs. %.2f\n",c.bill);
    fprintf(fp,"GST (18%%)        : Rs. %.2f\n",c.gst);
    fprintf(fp,"Late Fine        : Rs. %.2f\n",c.fine);
    fprintf(fp,"------------------------------------\n");
    fprintf(fp,"Total Bill       : Rs. %.2f\n",c.total);
    fprintf(fp,"====================================\n");

    fclose(fp);

    fp=fopen("bill.txt","r");

    if(fp==NULL)
    {
        printf("File cannot be opened.\n");
        return 0;
    }

    printf("\n\nFILE CONTENTS\n\n");

    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}

