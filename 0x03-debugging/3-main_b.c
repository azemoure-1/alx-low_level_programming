void print_remaining_days(int month, int day, int year)
{
    int i, total = 0;
    for (i = 1; i < month; i++)
    {
        total += day_in_month(i, year);
    }
    total += day;

    if ((is_leap_year(year) && month > 2) && (day >= 60 || (day == 59 && day_in_month(month, year) == 29)))
    {
        total++;
    }

    printf("Day of the year: %d\n", total);
}

