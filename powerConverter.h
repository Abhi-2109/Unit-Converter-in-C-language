void PowerConverter()
{
    printf("\n\t Power Converter \n\n");
    printf("Select Format from which you want to convert :\n");
    printf("\t1.Milliwatts\n\t2.Watts\n\t3.Megawatts\n\t4.Kilowatts\n\t5.HorsePower(hp)\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    float ml,w,mw,kw,hp;
    switch(input)
    {
        case 1:
            printf("\n Enter the value in Milliwatt :");
            scanf("%f",&ml);
            w = 0.001*ml;
            kw = 0.000001*ml;
            hp = 0.0000014*ml;
            printf("\nMilliwatts : %f\tWatts : %f",ml,w);
            printf("\nMilliwatts : %f\tKilowatts : %f",ml,kw);
            printf("\nMilliwatts : %f\tHorsePower(HP) : %f\n",ml,hp);
            break;
        case 2:
            printf("\n Enter the value in Watts :");
            scanf("%f",&w);
            ml = 1000*w;
            kw = 0.001*w;
            hp = 0.00134*w;
            printf("\nWatts : %f\tMilliwatts : %f",w,ml);
            printf("\nWatts : %f\tKilowatts : %f",w,kw);
            printf("\nWatts : %f\tHorsePower(hp) : %f\n",w,hp);
            break;
        case 4:
            printf("\n Enter the value in Kilowatt :");
            scanf("%f",&kw);
            w = 1000*kw;
            mw = 0.001*kw;
            hp = 1.34*kw;
            printf("\nKilowatts : %f\t Watts : %f",kw,w);
            printf("\nKilowatts : %f\t Megaatts : %f",kw,mw);
            printf("\nKilowatts : %f\t HorsePower(hp) : %f\n",kw,hp);
            break;
        case 3:
            printf("\n Enter the value in Megawatt :");
            scanf("%f",&mw);
            w = 1000000*mw;
            kw = 1000*mw;
            hp = 1340.48*mw;
            printf("\nMegawatts : %f\t Watts : %f",mw,w);
            printf("\nMegawatts : %f\t Kilowatts : %f",mw,kw);
            printf("\nMegawatts : %f\t HorsePower(hp) : %f\n",mw,hp);
            break;
        case 5:
            printf("\n Enter the value in HorsePower(hp) :");
            scanf("%f",&hp);
            w = 746*hp;
            kw = 0.746*hp;
            mw = 0.000746*hp;
            printf("\nHorsePower(hp) : %f\t Watts : %f",hp,w);
            printf("\nHorsePower(hp) : %f\t KiloWatts : %f",hp,kw);
            printf("\nHorsePower(hp) : %f\t Megawatts : %f\n",hp,mw);
            break;
        default :
            printf("Invalid Input\n");
            PowerConverter();
    }

}
