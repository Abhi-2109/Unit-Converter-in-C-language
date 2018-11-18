
void TimeConverter()
{
    printf("\n\t Time Converter \n\n");
    printf("Select Format from which you want to convert :\n");
    printf("\t1.Seconds\n\t2.Minute\n\t3.Hour\n");
    int input;
    printf("\nEnter your Option  : ");
    scanf("%d",&input);
    int sec,min,hour;
    switch(input)
    {
        case 1:
            printf("Enter the time in seconds : ");
            scanf("%d",&sec);
            printf("\nSeconds : %d\tMinute : %f",sec,((float)sec)/60);
            printf("\nSeconds : %d\tHour : %f\n",sec,((float)sec)/3600);
            break;
        case 2:
            printf("Enter the time in seconds : ");
            scanf("%d",&min);
            printf("\nMinute : %d\tSeconds : %d",min,min*60);
            printf("\nMinute : %d\tHour : %f\n",min,((float)min)/60);
            break;
        case 3:
            printf("Enter the time in Hour : ");
            scanf("%d",&hour);
            printf("\nHour : %d\tSeconds : %d",hour,hour*3600);
            printf("\nHour : %d\tMinute : %d\n",hour,hour*60);
            break;
        default :
            TimeConverter();
    }
}
