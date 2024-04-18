#include "ContBancar.h"


int main()
{
    ContBancar c1;
    c1.initCont();
    c1.printInfoCont();

    std::cout << std::boolalpha;
    std::cout << "Stare depunere: " << c1.depunereSuma(1000) << std::endl;
    c1.printInfoCont();
    std::cout << "Stare depunere: " << c1.depunereSuma(-498) << std::endl;

    std::cout << "Stare retragere: " << c1.retragereSuma(1230) << std::endl;
    c1.printInfoCont();


    Pasare pasare1; 
    pasare1.initPasare(); 
    pasare1.scoateSunet();
}