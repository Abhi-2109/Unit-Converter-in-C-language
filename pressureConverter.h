void PressureConverter()
{
    printf("\n\t Pressure Converter \n\n");
    printf("Select the Unit from which you want to convert :\n");
    printf("\t1.Torr\n\t2.Atmosphere\n\t3.Bar\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float t,a,b;
    switch(input)
    {
        case 1:
            printf("Enter the Pressure in Torr : ");
            scanf("%f",&t);
            a = 0.001315*t;
            b = 0.001333*t;
            printf("\nTorr : %f\tAtmosphere : %f",t,a);
            printf("\nTorr : %f\tBar : %f\n",t,b);
            break;
        case 2:
            printf("Enter the Pressure in Atmosphere : ");
            scanf("%f",&a);
            t = 760*a;
            b = 1.01325*a;
            printf("\nAtmosphere : %f\t Torr : %f",a,t);
            printf("\nAtmosphere : %f\t Bar : %f\n",a,b);
            break;
        case 3:
            printf("Enter the Pressure in Bar : ");
            scanf("%f",&b);
            t = 750.062*b;
            a = 0.986923*b;
            printf("\nBar : %f\t Torr : %f",b,t);
            printf("\nBar : %f\t Atmosphere : %f\n",b,a);
            break;
        default :
            PressureConverter();
    }
}
