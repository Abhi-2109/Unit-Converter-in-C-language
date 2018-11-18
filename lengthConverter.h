void LengthConverter()
{
    printf("\n\t Length Converter \n\n");
    printf("Select the Unit from which you want to convert :\n");
    printf("\t1.Meter\n\t2.Kilometer\n\t3.Centimeter\n\t4.Foot\n\t5.Inch\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float m,km,f,cm,in;
    switch(input)
    {
        case 1 :
            printf("\nEnter the value in Meter :");
            scanf("%f",&m);
            printf("\nMeter : %f\t KiloMeter : %f",m,m/1000);
            printf("\nMeter : %f\t Centimeter : %f",m,m*100);
            printf("\nMeter : %f\t Foot : %f",m,m*3.28);
            printf("\nMeter : %f\t KiloMeter : %f\n",m,m*1000);
            break;
        case 2:
            printf("\nEnter the value in Kilometer :");
            scanf("%f",&km);
            printf("\nKilometer : %f\tMeter : %f",km,km*1000);
            printf("\nKilometer : %f\tFoot : %f\n",km,km*3280.84);
            break;
        case 3:
            printf("\nEnter the value in Centimeter :");
            scanf("%f",&cm);
            printf("\nCentimeter : %f\t Meter : %f",cm,cm/100);
            printf("\nCentimeter : %f\t Foot : %f",cm,cm*0.0328);
            printf("\nCentimeter : %f\t Inch : %f\n",cm,cm*0.3937);
            break;
        case 4:
            printf("\nEnter the value in Foot :");
            scanf("%f",&f);
            printf("\nFoot : %f\tMeter : %f",f,0.3048*f);
            printf("\nFoot : %f\tCentimeter : %f",f,30.48*f);
            printf("\nFoot : %f\tInch : %f\n",f,12*f);
            break;
        case 5:
            printf("\nEnter the value in Inch :");
            scanf("%f",&in);
            printf("\nInch : %f\t Meter : %f",in,in*0.254);
            printf("\nInch : %f\t Foot : %f",in,in*12);
            printf("\nInch : %f\t Centimeter : %f",in,in*2.54);
            break;
        default :
            LengthConverter();

    }
}
