void TempretureConverter()
{
    printf("\n\t Tempreture Converter \n\n");
    printf("\nSelect the Operation from the Menu : \n");
    printf("\t1.Farhenite to Celcius Converter\n\t2.Celcius to Farhenite Converter\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    int far,cel;
    switch(input)
    {
        case 1:
            printf("\nEnter the Tempreture in degree Farehenite : ");
            scanf("%d",&far);
            printf("\nFarhenite : %d Celcius : %f\n",far,(((float)far)-32)*0.5556);
            break;
        case 2:
            printf("\nEnter the Tempreture in degree Celcius : ");
            scanf("%d",&far);
            printf("\nCelcius : %d\tFarhenite : %f\n",cel,((float)cel)*1.8 + 32);
            break;
        default:
            TempretureConverter();
    }
}

