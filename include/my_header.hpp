//  Copyright (c) 2047 Eyad A. Abdellatif et Arthur Dauge

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <algorithm>

void exo1(void) {
    
	long a = 2, b = 1, c = 0;

	while (a + b > 0) {
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
	
}

void exo2(void) {
	long n = 3, fac = 1, i = 1;

	if (n > 0) {
		while (i <= n) {
			fac = fac * i;
			i = i + 1;
		}
	} else {
		if (n < 0) {
			fac = 0;
		}
	}	
}

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

void exo3(void) {

	int z = 0;
	int x = essayer_code(150);

	if (x != z) {
		while (z > 9999) {
			z = z + 1;
		}
	}
}

unsigned short lancer_de()
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}

void exo4(void) {

	int point = 0;
	int joueur1 = 0;
	int joueur2 = 0;
	int tour = 0;

	while (joueur1 >= 50 && joueur2 >= 50); {
		int x = lancer_de();
		std::cin.get();
		while (x != 1) {
			if (x % 2 == 0) {
				point = point + x;
					if (tour % 2 == 0) {
						joueur2 = joueur2 + point;
						char point;
						std::cout << "Le joueur 2 a : "
							<< point
							<< std::endl;
					} else {
						joueur1 = joueur1 + point;
						char point;
						std::cout << "Le joueur 1 a : "
							<< point
							<< std::endl;
					}
			}
			if (x = 3) {
				point = point * 3;
				if (tour % 2 == 0) {
					joueur2 = joueur2 + point;
					char point;
					std::cout << "Le joueur 2 a : "
						<< point
						<< std::endl;
				}
				else {
					joueur1 = joueur1 + point;
					char point;
					std::cout << "Le joueur 1 a : "
						<< point
						<< std::endl;
				}
			}
			if (x = 5) {
				point = 0;
				if (tour % 2 == 0) {
					joueur2 = joueur2 + point;
					char point;
					std::cout << "Le joueur 2 a : "
						<< point
						<< std::endl;
				} else {
					joueur1 = joueur1 + point;
					char point;
					std::cout << "Le joueur 1 a : "
						<< point
						<< std::endl;
				}
			}
		} else {
			
			char point;
			std::cout << "Le joueur a : "
				<< point
				<< std::endl;
			char tour;
			std::cout << "Tour numero :  "
				<< tour
				<< std::endl;
			tour++;
			point = 0;
			x = 0;
			std::cout << "Changement de joueur !"
				<< std::endl;
	}
}
	if (joueur1 > joueur2) {
		std::cout << "Le joueur 1 gagnant"
				  << std::endl;
	}
	else {
		std::cout << "Le joueur 2 gagnant"
				  << std::endl;
	}
}

#endif

