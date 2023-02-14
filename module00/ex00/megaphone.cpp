#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int	i;
	int j;
	char	c;

	i = 0;
	j = 1;
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				c = argv[j][i] - 32;
			else
				c = argv[j][i];
			cout << c;
			i++;
		}
		i = 0;
		j++;
	}
	cout << '\n';
	return 0;
}
