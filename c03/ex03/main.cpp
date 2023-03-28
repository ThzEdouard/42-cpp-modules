
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

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


    std::cout << YELOW << "-----> (FragTrap) <---" << std::endl;


    std::cout << GREEN << "FragTrap mode default create !" << END << std::endl;
    FragTrap Fragdef;
    std::cout << GREEN << "FragTrap mode (name : rene) create !" << END << std::endl;
    FragTrap Fragrene("rene");
    //test for FragTrap default(void)
    std::cout << PURPLE << "FragTrap default attack a 30 target Xman !" << END << std::endl;
    Fragdef.attack("Xman");
    std::cout << PURPLE << "FragTrap default highFivesGuys mode !" << END << std::endl;
    Fragdef.highFivesGuys();
    std::cout << PURPLE << "FragTrap default take damage 10 !" << END << std::endl;
    Fragdef.takeDamage(100);
    std::cout << PURPLE << "FragTrap default beRepaired 10 or not repaired is dead !" << END << std::endl;
    Fragdef.beRepaired(100);
    std::cout << PURPLE << "FragTrap default test attacking for claptrap is dead !" << END << std::endl;
    Fragdef.attack("Xman");
    //end for the test FragTrap(void)

    //test for FragTrap name(john)
    std::cout << PURPLE << "FragTrap rene guardGate mode !" << END << std::endl;
    Fragrene.highFivesGuys();
    std::cout << PURPLE << "FragTrap rene attack a 30 target Xman 50x!" << END << std::endl;
    for(int i = 0; i < 100; i++)
        Fragrene.attack("Xman");
    std::cout << PURPLE << "FragTrap rene test attacking for claptrap is not energy !" << END << std::endl;
    Fragrene.attack("Xman");
    std::cout << PURPLE << "FragTrap rene beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Fragrene.beRepaired(10);
    //end for the test FragTrap(john)
    std::cout << GREEN << "FragTrap mode (ref.name : rene) create !" << END << std::endl;
    FragTrap Fragref(Fragrene);
    std::cout << PURPLE << "FragTrap ref.rene test attacking for claptrap is not energy !" << END << std::endl;
    Fragref.attack("Xman");
    std::cout << PURPLE << "FragTrap ref.rene beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Fragref.beRepaired(10);


    std::cout << YELOW << "-----> (DiamondTrap) <---" << std::endl;


    std::cout << GREEN << "DiamondTrap mode default create !" << END << std::endl;
    DiamondTrap Diamonddef;
    std::cout << GREEN << "DiamondTrap mode (name : koko) create !" << END << std::endl;
    DiamondTrap Diamondkoko("koko");
    //test for DiamondTrap default(void)
    std::cout << PURPLE << "DiamondTrap default attack a 30 target Xman ! (attack ScavTrap)" << END << std::endl;
    Diamonddef.attack("Xman");
    std::cout << PURPLE << "DiamondTrap default highFivesGuys and guardGate to ScavTrap, FragTrap mode !" << END << std::endl;
    Diamonddef.highFivesGuys();
    Diamonddef.guardGate();
    std::cout << PURPLE << "DiamondTrap default take damage 10 !" << END << std::endl;
    Diamonddef.takeDamage(100);
    std::cout << PURPLE << "DiamondTrap default beRepaired 10 or not repaired is dead !" << END << std::endl;
    Diamonddef.beRepaired(100);
    std::cout << PURPLE << "DiamondTrap default test attacking for claptrap is dead !" << END << std::endl;
    Diamonddef.attack("Xman");
    //end for the test DiamondTrap(void)

    //test for DiamondTrap name(koko)
    std::cout << PURPLE << "DiamondTrap koko highFivesGuys and guardGate to ScavTrap, FragTrap mode !" << END << std::endl;
    Diamondkoko.highFivesGuys();
    Diamondkoko.guardGate();
    std::cout << PURPLE << "DiamondTrap koko attack a 30 target Xman ! (attack ScavTrap)" << END << std::endl;
    for(int i = 0; i < 100; i++)
        Diamondkoko.attack("Xman");
    std::cout << PURPLE << "DiamondTrap koko test attacking for claptrap is not energy !" << END << std::endl;
    Diamondkoko.attack("Xman");
    std::cout << PURPLE << "DiamondTrap koko beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Diamondkoko.beRepaired(10);
    //end for the test DiamondTrap(john)
    std::cout << GREEN << "DiamondTrap mode (ref.name : koko) create !" << END << std::endl;
    Diamond Diamondref(Diamondkoko);
    std::cout << PURPLE << "DiamondTrap ref.name test attacking for claptrap is not energy !" << END << std::endl;
    Diamondref.attack("Xman");
    std::cout << PURPLE << "DiamondTrap ref.name beRepaired 10 or not repaired is not energy !" << END << std::endl;
    Diamondref.beRepaired(10);

    std::cout  << RED << "DiamondTrap(void, koko, ref), ScavTrap(void, jim, ref), FragTrap(void, rene, ref) and Claptrap called destructor(void, ref, John) ! "
                         "order (Scavtrap, FragTrap) and Claptrap !" << END << std::endl;


    return (0);
}