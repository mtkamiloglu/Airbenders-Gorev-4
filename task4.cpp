#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct province;

struct country
{
    std::string name;
    province* capital;
};

struct province
{ 
    std::string name;
    country* domain;  
};

int main(){
    province* Istanbul = (struct province*) malloc(sizeof(struct province));
    province* Ankara = (struct province*) malloc(sizeof(struct province));  
    country* Turkiye = (struct country*) malloc(sizeof(struct province));

    Ankara->name = "Ankara";
    Ankara->domain = Turkiye;
    Turkiye->name = "Türkiye";
    Turkiye->capital = Ankara;
    Istanbul->name = "Istanbul";
    Istanbul->domain = Turkiye;

    std::cout << Istanbul->domain->capital->name << std::endl;   

    return 0;
}
