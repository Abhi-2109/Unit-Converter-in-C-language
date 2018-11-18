
void AreaConverter()
{
    printf("\n\t Area Converter \n\n");
    printf("Select the Unit from which you want to convert :\n");
    printf("\t1.Square Meter\n\t2.Square kilometer\n\t3.Square Inch\n\t4.Hectare\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float sm,skm,si,h;
    switch(input)
    {
        case 1:
            printf("Enter the area in Square meter : ");
            scanf("%d",&sm);
            skm = sm/1000000;
            si = sm * 1550;
            h = sm/10000;
            printf("\nSquare Meter : %f\tSquare Kilometer : %f",sm,skm);
            printf("\nSquare Meter : %f\tSquare Inch : %f",sm,si);
            printf("\nSquare Meter : %f\tHectare : %f\n",sm,h);
            break;
        case 2:
            printf("Enter the area in Square Kilometer : ");
            scanf("%d",&skm);
            sm = skm*1000000;
            si = sm*1550;
            h = 100*skm;
            printf("\nSquare Kilometer : %f\tSquare meter : %f",skm,sm);
            printf("\nSquare Kilometer : %f\tSquare Inch : %f",skm,si);
            printf("\nSquare Kilometer : %f\tHectare : %f\n",skm,h);
            break;
        case 3:
            printf("Enter the area in Square inch : ");
            scanf("%d",&si);
            sm = 0.0064516*si;
            printf("\nSquare Inch : %f\tSqaure Meter : %f\n",si,sm);
            break;
        case 4:
            printf("Enter the area in Hectare : ");
            scanf("%d",&h);
            skm = 0.01*h;
            sm = 10000*h;
            printf("\nHectare : %f\nSquare Kilometer : %f",h,skm);
            printf("\nHectare : %f\nSquare Meter : %f\n",h,sm);
            break;
        default :
            AreaConverter();
    }


}
