void USDConverter()
{
    float USD;
    printf("\nEnter the Value in USD : ");
    scanf("%f",&USD);
    printf("\nSelect the option you want to convert into \n");
    printf("\t1.Indian Rupee\n\t2.Euro\n\t3.Austrailian Dollar\n");
    int option;
    printf("Enter your option : ");
    scanf("%d",&option);
    float i = 0;
    switch(option)
    {
        case 1 :
            i = 72.02*USD;
            printf("\nUnited States Dollar : %f\tIndian Rupee : %f\n",USD,i);
            break;
        case 2 :
            i = 0.86*USD;
            printf("\nUnited States Dollar : %f\tEuro : %f\n",USD,i);
            break;
        case 3 :
            i = 1.38*USD;
            printf("\nUnited States Dollar : %f\tAustrailian Dollar : %f\n",USD,i);
            break;
        default :
            printf("Invalid Input\n");
            USDConverter();
    }
}
void RupeeConverter()
{
    float Rupee;
    printf("\nEnter the Value in Indian Rupee : ");
    scanf("%f",&Rupee);
    printf("\nSelect the option you want to convert into \n");
    printf("\t1.United States Dollar\n\t2.Euro\n\t3.Austrailian Dollar\n");
    int option;
    printf("Enter your option : ");
    scanf("%d",&option);
    float i = 0;
    switch(option)
    {
        case 1 :
            i = 0.014*Rupee;
            printf("\nIndian Rupee : %f\tUnited States Dollar : %f\n",Rupee,i);
            break;
        case 2 :
            i = 0.012*Rupee;
            printf("\nIndian Rupee : %f\tEuro : %f\n",Rupee,i);
            break;
        case 3 :
            i = 0.019*Rupee;
            printf("\nIndian Rupee : %f\tAustrailian Dollar : %f\n",Rupee,i);
            break;
        default :
            printf("Invalid Input\n");
            RupeeConverter();
    }
}
void EuroConverter()
{
    float euro;printf("\nEnter the quantity in Cubic Meter :");
            float cm;
            scanf("%f",&cm);
            printf("\nCubic Meter : %f\tLitre : %f\n",cm,cm*1000);
    printf("\nEnter the Value in Euro : ");
    scanf("%f",&euro);
    printf("\nSelect the option you want to convert into \n");
    printf("\t1.United States Dollar\n\t2.Indian Rupee\n\t3.Austrailian Dollar\n");
    int option;
    printf("Enter your option : ");
    scanf("%d",&option);
    float i = 0;
    switch(option)
    {
        case 1 :
            i = 1.17*euro;
            printf("\nEuro: %f\tUnited States Dollar : %f\n",euro,i);
            break;
        case 2 :
            i = 84.06*euro;
            printf("\nEuro : %f\tEuro : %f\n",euro,i);
            break;
        case 3 :
            i = 1.61*euro;
            printf("\nEuro : %f\tAustrailian Dollar : %f\n",euro,i);
            break;
        default :
            printf("Invalid Input\n");
            EuroConverter();
    }
}
void AusDollarConverter()
{
    float ASD;
    printf("\nEnter the Value in Australian Dollar : ");
    scanf("%f",&ASD);
    printf("\nSelect the option you want to convert into \n");
    printf("\t1.Indian Rupee\n\t2.Euro\n\t3.United States Dollar\n");
    int option;
    printf("Enter your option : ");
    scanf("%d",&option);
    float i = 0;
    switch(option)
    {
        case 1 :
            i = 52.57*ASD;
            printf("\nAustralian Dollar : %f\tIndian Rupee : %f\n",ASD,i);
            break;
        case 2 :
            i = 0.62*ASD;
            printf("\nAustralian Dollar : %f\tEuro : %f\n",ASD,i);
            break;
        case 3 :
            i = 0.73*ASD;
            printf("\nAustralian Dollar : %f\tAustrailian Dollar : %f\n",ASD,i);
            break;
        default :
            printf("Invalid Input\n");
            USDConverter();
    }
}
void CurrencyConverter()
{
    printf("\n\t Currency Converter \n\n");
    printf("Select Format from which you want to convert :\n");
    printf("\t1.United States Dollar(USD)\n\t2.Indian Rupee\n\t3.Euro\n\t4.Austrailian Dollar\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
            USDConverter();
            break;
        case 2:
            RupeeConverter();
            break;
        case 3:
            EuroConverter();
            break;
        case 4:
            AusDollarConverter();
            break;
        default :
            printf("Invalid Input Please enter option from the list\n");
            CurrencyConverter();
    }
}
