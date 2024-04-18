#include "ContBancar.h"

void ContBancar::printInfoCont()
{
	std::cout << std::endl;
	std::cout << "Titularul Contului " << nume_utilizator << " " << prenume_utilizator << std::endl;
	std::cout << "Valuare sold: " << sold << std::endl;
	std::cout << std::endl;
}

void ContBancar::initCont()
{
	if (nume_utilizator.empty() && prenume_utilizator.empty())
	{
		std::cout << "Intdoduceti numele utilizatorului: ";
		std::cin >> nume_utilizator;
		std::cout << "Intdoduceti prenumele utilizatorului: ";
		std::cin >> prenume_utilizator;
		std::cout << "Introduceti soldul initial: ";
		std::cin >> sold;
	}
	else
	{
		std::cout << "Error!! Contul este deja initializat" << std::endl;
	}
}

bool ContBancar::depunereSuma(float suma)
{
	if (suma > 0)
	{
		sold += suma;
		return true;
	}
	else
	{
		std::cerr << "Nu puteti depune o suma negativa sau nula!" << std::endl;
	}
	return false;
}

bool ContBancar::retragereSuma(float suma)
{
	if (suma <= sold)
	{
		sold -= suma;
		return true;
	} 
	else 
	{
		std::cerr << "Nu puteti retrage o suma mai mare decat soldul!" << std::endl;
		return false;
	}
}

void Pasare::initPasare()
{
	std::cout << "Introdu specia pasarii: "; 
	std::cin >> specie; 
}

void Pasare::scoateSunet()
{
	if (specie == "Ciocarlie")
	{
		std::cout << "Cioc-cioc-cioc!" << std::endl;
	}
	else if (specie == "Randunica")
	{
		std::cout << "Cirip-cirip!" << std::endl;
	}
	else if (specie == "Porumbel")
	{
		std::cout << "Cu-cu-cu!" << std::endl;
	}
	else if (specie == "Cioara")
	{
		std::cout << "Cra-cra" << std::endl;
	}
	else
	{
		std::cout << "Sunet necunoscut 0_0" << std::endl;
	}
}

