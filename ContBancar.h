#pragma once
#include <string>
#include <iostream>

class ContBancar
{
	std::string nume_utilizator;
	std::string prenume_utilizator;
	float sold;

public:
	void printInfoCont();
	void initCont();
	bool depunereSuma(float suma);
	bool retragereSuma(float suma); 
};


class Pasare
{
private: 
	std::string specie; 
public: 
	void initPasare(); 
	void scoateSunet(); 
};
