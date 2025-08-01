#include <cctype>
#include <iostream>
#include <string>

int	main(int argc, char const *argv[])
{
	if (argc < 1)
	{
		std::cout << "error" << std::endl;
	}
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		for (size_t j = 0; j < arg.size(); j++)
		{
			std::cout << static_cast<unsigned char>(std::toupper(arg[j]));
		}
	}
		std::cout << std::endl;
}
