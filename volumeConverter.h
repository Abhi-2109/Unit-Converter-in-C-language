void VolumeConverter()
{
    printf("\n\t Volume Converter \n\n");
    printf("Select Format from which you want to convert :\n");
    printf("\t1.Cubic Meter\n\t2.Litre\n\t3.Millilitre\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float cm,l,ml;
    switch(input)
    {
        case 1:
            printf("\nEnter the quantity in Cubic Meter :");
            scanf("%f",&cm);
            printf("\nCubic Meter : %f\tLitre : %f\n",cm,cm*1000);
            break;
        case 2:
            printf("\nEnter the quantity in Litre :");
            scanf("%f",&l);
            printf("\nLitre : %f\tCubic Meter : %f\n",l,l/1000);
            printf("\nLitre : %f\tMilli Litre : %f\n",l,l*1000);
            break;
        case 3:
            printf("\nEnter the quantity in Milli Litre :");
            scanf("%f",&ml);
            printf("\nMilli Litre : %f\tLitre : %f\n",ml,ml/1000);
            break;
        default :
            VolumeConverter();
    }

}
