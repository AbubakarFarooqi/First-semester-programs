int TotalCars_in_a_Batch(int row)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + cars[row][i];
    }
    return sum;
}