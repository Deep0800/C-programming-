// Accept 2 numbers and find out its sum check it size

int main()
{
    int a, b, c;
    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    c = a + b;
    printf("Sum of to number is: %d", c);

    printf("%d", sizeof(c));
}