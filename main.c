int main()
{
    char a = 10;

    my_printf("mon printf = %c\n", 'e');
    my_printf("mon printf = %s\n", "coucou");
    my_printf("mon printf = %d\n", 23);
    my_printf("mon printf = %i\n", 23);
    my_printf("mon printf = %b\n", 23);
    my_printf("mon printf = %x\n", 15);
    my_printf("mon printf = %X\n", 15);
    my_printf("mon printf = %o\n", 10);
    my_printf("mon printf = %%\n", 90);
    my_printf("mon printf = %p\n", &a);
    my_printf("mon printf = %u\n", -234);

    printf("le vrai printf = %c\n", 'e');
    printf("le vrai printf = %s\n", "coucou");
    printf("le vrai printf = %d\n", 23);
    printf("le vrai printf = %i\n", 23);
    printf("le vrai printf = %b\n", 23);
    printf("le vrai printf = %x\n", 15);
    printf("le vrai printf = %X\n", 15);
    printf("le vrai printf = %o\n", 10);
    printf("le vrai printf = %%\n", 90);
    printf("le vrai printf = %p\n", &a);
    printf("le vrai printf = %u\n", -234);
}