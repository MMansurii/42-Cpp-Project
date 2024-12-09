# include <iostream>

int     main(int argc, char **argv)
{
    int     i;
    int     j;

    i = 1;
    
    if (argc == 1)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
            std::cout<< ' ';
        }
    }
    return (EXIT_SUCCESS);
}