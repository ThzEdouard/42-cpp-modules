# include <iostream>
# include <string>
#include <cstring>
# include <fstream>
void	ft_replace(){

}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "./ex04 filename s1 s2" << std::endl,0);
	(void)argc;
	std::size_t found;
	std::string ln;
	std::ifstream afile	(argv[1]);
	if(afile.is_open())
	{
		std::string filename = argv[1] ; filename += ".replace";
		std::ofstream ofile (filename.c_str());
		while (std::getline(afile, ln))
		{
			found = ln.find(argv[2]);
			while (found != std::string::npos)
			{
				ln.erase(found, std::strlen(argv[2]));
				ln.insert(found, argv[3]);
				found += std::strlen(argv[3]);
				found = ln.find(argv[2], found);
			}
			if (!afile.eof())
				ln += "\n";
			ofile.write(ln.c_str(), ln.length());
		}
		afile.close();
	}
	else
		std::cout << "filename is not expisting ! " << std::endl;
	return (1);
}