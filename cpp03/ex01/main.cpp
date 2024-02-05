
# include "ScavTrap.hpp"

# define END    "\x1b[0m"
# define GREY   "\x1b[30m"
# define RED    "\x1b[31m"
# define GREEN  "\x1b[32m"
# define YELOW  "\x1b[33m"
# define BLUE   "\x1b[34m"
# define PURPLE "\x1b[35m"
# define CYAN   "\x1b[36m"
# define WHITE  "\x1b[37m"

int main (void)
{
    std::cout << GREEN << "Claptrap mode default create !" << END << std::endl;
	ClapTrap Clapdef;
    std::cout << GREEN << "Claptrap mode (name : john) create !" << END << std::endl;
    ClapTrap Clapjohn("john");
    //test for ClapTrap default(void)
    std::cout << PURPLE << "Claptrap default attack a 0 target Xman !" << END << std::endl;
    Clapdef.attack("Xman");
    std::cout << PURPLE << "Claptrap default take damage 10 !" << END << std::endl;
    Clapdef.takeDamage(10);
    std::cout << PURPLE << "Claptrap default beRepaired 10 or not repaired is dead !" << END << std::endl;
    Clapdef.beRepaired(10);
    std::cout << PURPLE << "Claptrap default test attacking for claptrap is dead !" << END << std::endl;
    Clapdef.attack("Xman");
    //end for the test claptrap(void)
    //test for Claptrap name(john)
    std::cout << PURPLE << "Claptrap default attack a 0 target Xman 10x!" << END << std::endl;
    for(int i = 0; i < 10; i++)
        Clapjohn.attack("Xman");
    std::cout << PURPLE << "Claptrap John test attacking for claptrap is not energy !" << END << std::endl;
    Clapjohn.attack("Xman");
    std::cout << PURPLE << "Claptrap John beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Clapjohn.beRepaired(10);
    //end for the test claptrap(john)
    std::cout << GREEN << "Claptrap mode (ref.name : john) create !" << END << std::endl;
    ClapTrap Clapref(Clapjohn);
    std::cout << PURPLE << "Claptrap ref.John test attacking for claptrap is not energy !" << END << std::endl;
    Clapref.attack("Xman");
    std::cout << PURPLE << "Claptrap ref.John beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Clapjohn.beRepaired(10);
    std::cout << YELOW << "-----> (ScavTrap) <---" << std::endl;


    std::cout << GREEN << "ScavTrap mode default create !" << END << std::endl;
    ScavTrap Scavdef;
    std::cout << GREEN << "ScavTrap mode (name : john) create !" << END << std::endl;
    ScavTrap Scavjim("jim");
    //test for ScavTrap default(void)
    std::cout << PURPLE << "ScavTrap default attack a 20 target Xman !" << END << std::endl;
    Scavdef.attack("Xman");
    std::cout << PURPLE << "ScavTrap default guardGate mode !" << END << std::endl;
    Scavdef.guardGate();
    std::cout << PURPLE << "ScavTrap default take damage 10 !" << END << std::endl;
    Scavdef.takeDamage(100);
    std::cout << PURPLE << "ScavTrap default beRepaired 10 or not repaired is dead !" << END << std::endl;
    Scavdef.beRepaired(100);
    std::cout << PURPLE << "ScavTrap default test attacking for claptrap is dead !" << END << std::endl;
    Scavdef.attack("Xman");
    //end for the test Scavdef(void)

    //test for Scavdef name(john)
    std::cout << PURPLE << "ScavTrap jim guardGate mode !" << END << std::endl;
    Scavjim.guardGate();
    std::cout << PURPLE << "ScavTrap jim attack a 20 target Xman 50x!" << END << std::endl;
    for(int i = 0; i < 50; i++)
        Scavjim.attack("Xman");
    std::cout << PURPLE << "ScavTrap Jim test attacking for claptrap is not energy !" << END << std::endl;
    Scavjim.attack("Xman");
    std::cout << PURPLE << "ScavTrap Jim beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Scavjim.beRepaired(10);
    //end for the test Scavdef(john)
    std::cout << GREEN << "ScavTrap mode (ref.name : jim) create !" << END << std::endl;
    ScavTrap Scavref(Scavjim);
    std::cout << PURPLE << "ScavTrap ref.jim test attacking for claptrap is not energy !" << END << std::endl;
    Scavref.attack("Xman");
    std::cout << PURPLE << "ScavTrap ref.jim beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Scavref.beRepaired(10);
    std::cout  << RED << "ScavTrap(void, jim, ref) and Claptrap called destructor(void, ref, John) ! "
                         "order Scavtrap and Claptrap !" << END << std::endl;


    return (0);
}