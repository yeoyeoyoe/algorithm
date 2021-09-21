#include <stdio.h>

int
get_break_even_point(const int fixed_cost, const int variable_cost, const int product_price)
{
    int revenue;
    int break_even_point;
    int total_cost;

    if (variable_cost > product_price)
        return (-1);
    total_cost = fixed_cost;
    revenue = product_price - variable_cost;
    if (revenue == 0)
        return (-1);
    break_even_point = (total_cost / revenue) + 1;
    return (break_even_point);
}

void
world_electronics(void)
{
    int fixed_cost;
    int variable_cost;
    int laptop_price;

    scanf("%d %d %d", &fixed_cost, &variable_cost, &laptop_price);
    printf("%d\n", get_break_even_point(fixed_cost, variable_cost, laptop_price));
}

int
main(void)
{
    world_electronics();
    return (0);
}
