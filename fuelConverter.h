void FuelConverter()
{
    printf("\n\t Fuel Converter \n\n");
    float value,amount;
    printf("Enter the Value per unit fuel : ");
    scanf("%f",&value);
    printf("Enter the amount of fuel in units : ");
    scanf("%f",&amount);
    printf("\n\nThe cost of the Fuel for %f units of fuel is  : %f\n",amount,amount*value);
}
