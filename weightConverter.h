
void WeightConverter()
{
    printf("\n\t Weight Converter \n\n");
    printf("Select Format from which you want to convert :\n");
    printf("\t1.Kilogram\n\t2.Gram\n\t3.Ton\n");


    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float kg,g,t;
    switch(input)
    {
        case 1:
            printf("Enter weight in Kilogram : ");
            scanf("%f",&kg);
            g = kg*1000;
            t = 0.00110238*kg;
            printf("\nKilogram : %f\tGram : %f",kg,g);
            printf("\nKilogram : %f\tTon : %f\n",kg,t);
            break;
        case 2:
            printf("Enter weight in Gram : ");
            scanf("%f",&g);
            kg = g/1000;
            t = 0.00110238*kg;
            printf("\nGram : %f\tKiloGram : %f",g,kg);
            printf("\nGram : %f\tTon : %f\n",g,t);
            break;
        case 3:
            printf("Enter weight in Ton : ");
            scanf("%f",&t);
            kg = 907.185*t;
            g = 1000*kg;
            printf("\nTon : %f\tKiloGram : %f",t,kg);
            printf("\nTon : %f\tGram : %f",t,g);
            break;
        default :
            WeightConverter();
    }
}
