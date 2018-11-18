#include<stdio.h>
#include "powerConverter.h"
#include "lengthConverter.h"
#include "metericConverter.h"
#include "currencyConverter.h"
#include "weightConverter.h"
#include "volumeConverter.h"
#include "tempretureConverter.h"
#include "areaConverter.h"
#include "fuelConverter.h"
#include "pressureConverter.h"
#include "timeConverter.h"
int main()
{
    printf("\t\tUnit And Currency Converter\n\n");
    int flag = 1;
    do
    {
        printf("\nSelect the Operation from the Menu : \n");
        printf("1.Currency Converter\n2.Meteric Converter\n3.Weight Converter\n4.Length Converter\n5.Area Converter\n6.Fuel Converter\n7.Time Converter\n8.Volume Converter\n");
        printf("9.Tempreture Converter\n10.Pressure Converter\n11.Power Converter\n12.Exit the Program\n");
        int n;
        printf("\n Enter your option  : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                CurrencyConverter();
                break;
            case 2:
                MetericConverter();
                break;
            case 3:
                WeightConverter();
                break;
            case 4:
                LengthConverter();
                break;printf("Select the Unit from which you want to convert :\n");
            case 5:
                AreaConverter();
                break;
            case 6:
                FuelConverter();
                break;
            case 7:
                TimeConverter();
                break;
            case 8:
                VolumeConverter();
                break;
            case 9:
                TempretureConverter();
                break;
            case 10:
                PressureConverter();
                break;
            case 11:
                PowerConverter();
                break;
            case 12:
                flag = 0;
                break;
            default:
                printf("Invalid Input\n");
        }
    }while(flag);

    printf("\nSoftware Designed By - Abhishek Anand LNCT Bhopal(Cse) 3rd Year \n");
}
