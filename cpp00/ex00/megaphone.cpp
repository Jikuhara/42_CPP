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
		std::cout << "test" << std::endl;
	}
	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		std::cout << arg << std::endl;
		for (size_t j = 0; j < arg.size(); j++)
		{
			std::cout << arg[j];
		}
		std::cout << std::endl;
	}
}
