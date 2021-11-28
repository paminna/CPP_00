#include <iostream>

int main(int argc, char **argv) {
    int i;
    int j;

    j = 0;
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        {
        while (argv[i])
        {
            while (argv[i][j])
            {
                if (argv[i][j] != '"' && isalpha(argv[i][j]))
                    putchar(toupper(argv[i][j]));
                else if (argv[i][j] != '"')
                    putchar(argv[i][j]);
                j++;
            }
            putchar(' ');
            i++;
            j = 0;
        }
    }
    std::cout << std::endl;
    return 0;
}
