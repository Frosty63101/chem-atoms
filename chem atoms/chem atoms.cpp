#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

constexpr auto PI = 3.14159265;
constexpr auto c = 3000000000000000;
constexpr auto h = 0.000000000000004136;

int main()
{
	int rr;
	rr = 1;

	do {
		std::string el;

		float n{ 0 }, w{ 0 }, a{ 0 }, ch{ 0 }, e{ 0 }, s{ 0 }, ss{ 0 }, pp{ 0 }, sss{ 0 }, ppp{ 0 }, ssss{ 0 }, ddd{ 0 },
			pppp{ 0 }, sssss{ 0 }, dddd{ 0 }, ppppp{ 0 }, ssssss{ 0 }, ffff{ 0 }, ddddd{ 0 },
			pppppp{ 0 }, sssssss{ 0 }, fffff{ 0 }, dddddd{ 0 }, ppppppp{ 0 };

		std::cout << "enter element atomic number and charge\n";
		std::cin >> a;
		std::cin >> ch;

		e = a - ch;
		{
			if (a == 1) {
				el = "Hydrogen";
				w = 1.008;
			}
			if (a == 2) {
				el = "Helium";
				w = 4.0026;
			}
			if (a == 3) {
				el = "Lithium";
				w = 6.94;
			}
			if (a == 4) {
				el = "Berilium";
				w = 9.0122;
			}
			if (a == 5) {
				el = "Boron";
				w = 10.81;
			}
			if (a == 6) {
				el = "Carbon";
				w = 12.011;
			}
			if (a == 7) {
				el = "Nitrogen";
				w = 14.007;
			}
			if (a == 8) {
				el = "Oxygen";
				w = 15.999;
			}
			if (a == 9) {
				el = "Fluorine";
				w = 18.998;
			}
			if (a == 10) {
				el = "Neon";
				w = 20.180;
			}
			if (a == 11) {
				el = "Sodium";
				w = 22.990;
			}
			if (a == 12) {
				el = "Magnesium";
				w = 24.305;
			}
			if (a == 13) {
				el = "Aluminum";
				w = 26.982;
			}
			if (a == 14) {
				el = "Silicon";
				w = 28.085;
			}
			if (a == 15) {
				el = "Phosphurous";
				w = 30.974;
			}
			if (a == 16) {
				el = "Sulfur";
				w = 32.06;
			}
			if (a == 17) {
				el = "Chlorine";
				w = 35.45;
			}
			if (a == 18) {
				el = "Argon";
				w = 39.95;
			}
			if (a == 19) {
				el = "Potassium";
				w = 39.098;
			}
			if (a == 20) {
				el = "Calcium";
				w = 40.078;
			}
			if (a == 21) {
				el = "Scandium";
				w = 44.956;
			}
			if (a == 22) {
				el = "Titanium";
				w = 47.867;
			}
			if (a == 23) {
				el = "Vanadium";
				w = 50.942;
			}
			if (a == 24) {
				el = "Chromium";
				w = 51.996;
			}
			if (a == 25) {
				el = "Manganese";
				w = 54.938;
			}
			if (a == 26) {
				el = "Iron";
				w = 55.845;
			}
			if (a == 27) {
				el = "Cobalt";
				w = 58.933;
			}
			if (a == 28) {
				el = "Nickel";
				w = 58.693;
			}
			if (a == 29) {
				el = "Copper";
				w = 63.546;
			}
			if (a == 30) {
				el = "Zinc";
				w = 65.38;
			}
			if (a == 31) {
				el = "Galium";
				w = 69.723;
			}
			if (a == 32) {
				el = "Germanium";
				w = 72.630;
			}
			if (a == 33) {
				el = "Arsenic";
				w = 74.922;
			}
			if (a == 34) {
				el = "Selenium";
				w = 78.971;
			}
			if (a == 35) {
				el = "Bromine";
				w = 79.904;
			}
			if (a == 36) {
				el = "Krypton";
				w = 83.798;
			}
			if (a == 37) {
				el = "Rubidium";
				w = 85.468;
			}
			if (a == 38) {
				el = "Strontium";
				w = 87.62;
			}
			if (a == 39) {
				el = "Yttrium";
				w = 88.906;
			}
			if (a == 40) {
				el = "Zirconium";
				w = 91.224;
			}
			if (a == 41) {
				el = "Niobium";
				w = 92.906;
			}
			if (a == 42) {
				el = "Molybdenum";
				w = 95.95;
			}
			if (a == 43) {
				el = "Technetium";
				w = 97;
			}
			if (a == 44) {
				el = "Ruthenium";
				w = 101.07;
			}
			if (a == 45) {
				el = "Rhodium";
				w = 102.91;
			}
			if (a == 46) {
				el = "Palladium";
				w = 106.42;
			}
			if (a == 47) {
				el = "Silver";
				w = 107.87;
			}
			if (a == 48) {
				el = "Cadmium";
				w = 112.41;
			}
			if (a == 49) {
				el = "Indium";
				w = 114.82;
			}
			if (a == 50) {
				el = "Tin";
				w = 118.71;
			}
			if (a == 51) {
				el = "Antimony";
				w = 121.76;
			}
			if (a == 52) {
				el = "Tellurium";
				w = 127.60;
			}
			if (a == 53) {
				el = "Iodine";
				w = 126.90;
			}
			if (a == 54) {
				el = "Xenon";
				w = 131.29;
			}
			if (a == 55) {
				el = "Caesium";
				w = 132.91;
			}
			if (a == 56) {
				el = "Barium";
				w = 137.33;
			}
			if (a == 57) {
				el = "Lanthanum";
				w = 138.91;
			}
			if (a == 58) {
				el = "Cerium";
				w = 140.12;
			}
			if (a == 59) {
				el = "Praseodimium";
				w = 140.91;
			}
			if (a == 60) {
				el = "Neodymium";
				w = 144.24;
			}
			if (a == 61) {
				el = "Promethium";
				w = 145;
			}
			if (a == 62) {
				el = "Samarium";
				w = 150.36;
			}
			if (a == 63) {
				el = "Europium";
				w = 151.96;
			}
			if (a == 64) {
				el = "Gadolinium";
				w = 157.25;
			}
			if (a == 65) {
				el = "Terbium";
				w = 158.93;
			}
			if (a == 66) {
				el = "Dysprosium";
				w = 162.50;
			}
			if (a == 67) {
				el = "Holmium";
				w = 164.93;
			}
			if (a == 68) {
				el = "Erbium";
				w = 167.26;
			}
			if (a == 69) {
				el = "Thulium";
				w = 168.93;
			}
			if (a == 70) {
				el = "Ytterbium";
				w = 173.05;
			}
			if (a == 71) {
				el = "Lutetium";
				w = 174.97;
			}
			if (a == 72) {
				el = "Hafnium";
				w = 178.49;
			}
			if (a == 73) {
				el = "Tantalum";
				w = 180.95;
			}
			if (a == 74) {
				el = "Tungsten";
				w = 183.84;
			}
			if (a == 75) {
				el = "Rhenium";
				w = 186.21;
			}
			if (a == 76) {
				el = "Osmium";
				w = 190.23;
			}
			if (a == 77) {
				el = "Iridium";
				w = 192.22;
			}
			if (a == 78) {
				el = "Platinum";
				w = 195.08;
			}
			if (a == 79) {
				el = "Gold";
				w = 196.97;
			}
			if (a == 80) {
				el = "Mercury";
				w = 200.59;
			}
			if (a == 81) {
				el = "Thallium";
				w = 204.38;
			}
			if (a == 82) {
				el = "Lead";
				w = 207.2;
			}
			if (a == 83) {
				el = "Bismuth";
				w = 208.98;
			}
			if (a == 84) {
				el = "Polonium";
				w = 209;
			}
			if (a == 85) {
				el = "Astatine";
				w = 210;
			}
			if (a == 86) {
				el = "Radon";
				w = 222;
			}
			if (a == 87) {
				el = "Francium";
				w = 223;
			}
			if (a == 88) {
				el = "Radium";
				w = 226;
			}
			if (a == 89) {
				el = "Actinium";
				w = 227;
			}
			if (a == 90) {
				el = "Thorium";
				w = 232.04;
			}
			if (a == 91) {
				el = "Protactinium";
				w = 231.04;
			}
			if (a == 92) {
				el = "Uranium";
				w = 283.03;
			}
			if (a == 93) {
				el = "Neptunium";
				w = 237;
			}
			if (a == 94) {
				el = "Plutonium";
				w = 244;
			}
			if (a == 95) {
				el = "Americium";
				w = 243;
			}
			if (a == 96) {
				el = "Curium";
				w = 247;
			}
			if (a == 97) {
				el = "Berklium";
				w = 247;
			}
			if (a == 98) {
				el = "Californium";
				w = 251;
			}
			if (a == 99) {
				el = "Einstienium";
				w = 252;
			}
			if (a == 100) {
				el = "Fermium";
				w = 257;
			}
			if (a == 101) {
				el = "Mendelevium";
				w = 258;
			}
			if (a == 102) {
				el = "Nobelium";
				w = 259;
			}
			if (a == 103) {
				el = "Lawerenceium";
				w = 266;
			}
			if (a == 104) {
				el = "Ruthfordium";
				w = 267;
			}
			if (a == 105) {
				el = "Dubnium";
				w = 268;
			}
			if (a == 106) {
				el = "Seaborgium";
				w = 269;
			}
			if (a == 107) {
				el = "Bohrium";
				w = 270;
			}
			if (a == 108) {
				el = "Hassium";
				w = 269;
			}
			if (a == 109) {
				el = "Meitnerium";
				w = 278;
			}
			if (a == 110) {
				el = "Darmstadtium";
				w = 281;
			}
			if (a == 111) {
				el = "Roentgenium";
				w = 282;
			}
			if (a == 112) {
				el = "Coppernicium";
				w = 285;
			}
			if (a == 113) {
				el = "Nihonium";
				w = 286;
			}
			if (a == 114) {
				el = "Flerovium";
				w = 289;
			}
			if (a == 115) {
				el = "Moscovium";
				w = 290;
			}
			if (a == 116) {
				el = "Livermorium";
				w = 293;
			}
			if (a == 117) {
				el = "Tennessine";
				w = 294;
			}
			if (a == 118) {
				el = "Oganesson";
				w = 294;
			}

		}

		n = w - a;

		if (e == 1) {
			s = 1;
		}
		if (e == 2) {
			s = 2;
		}
		if (e == 3) {
			s = 2;
			ss = 1;
		}
		if (e == 4) {
			s = 2;
			ss = 2;
		}
		if (e == 5) {
			s = 2;
			ss = 2;
			pp = 1;
		}
		if (e == 6) {
			s = 2;
			ss = 2;
			pp = 2;
		}
		if (e == 7) {
			s = 2;
			ss = 2;
			pp = 3;
		}
		if (e == 8) {
			s = 2;
			ss = 2;
			pp = 4;
		}
		if (e == 9) {
			s = 2;
			ss = 2;
			pp = 5;
		}
		if (e == 10) {
			s = 2;
			ss = 2;
			pp = 6;
		}
		if (e == 11) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 1;
		}
		if (e == 12) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
		}
		if (e == 13) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 1;
		}
		if (e == 14) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 2;
		}
		if (e == 15) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 3;
		}
		if (e == 16) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 4;
		}
		if (e == 17) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 5;
		}
		if (e == 18) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
		}
		if (e == 19) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 1;
		}
		if (e == 20) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
		}
		if (e == 21) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 1;
		}
		if (e == 22) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 2;
		}
		if (e == 23) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 3;
		}
		if (e == 24) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 4;
		}
		if (e == 25) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 5;
		}
		if (e == 26) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 6;
		}
		if (e == 27) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 7;
		}
		if (e == 28) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 8;
		}
		if (e == 29) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 9;
		}
		if (e == 30) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
		}
		if (e == 31) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 1;
		}
		if (e == 32) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 2;
		}
		if (e == 33) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 3;
		}
		if (e == 34) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 4;
		}
		if (e == 35) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 5;
		}
		if (e == 36) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
		}
		if (e == 37) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 1;
		}
		if (e == 38) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
		}
		if (e == 39) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 1;
		}
		if (e == 40) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 2;
		}
		if (e == 41) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 3;
		}
		if (e == 42) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 4;
		}
		if (e == 43) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 5;
		}
		if (e == 44) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 6;
		}
		if (e == 45) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 7;
		}
		if (e == 46) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 8;
		}
		if (e == 47) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 9;
		}
		if (e == 48) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
		}
		if (e == 49) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 1;
		}
		if (e == 50) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 2;
		}
		if (e == 51) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 3;
		}
		if (e == 52) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 4;
		}
		if (e == 53) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 5;
		}
		if (e == 54) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
		}
		if (e == 55) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 1;
		}
		if (e == 56) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
		}
		if (e == 57) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 1;
		}
		if (e == 58) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 2;
		}
		if (e == 59) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 3;
		}
		if (e == 60) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 4;
		}
		if (e == 61) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 5;
		}
		if (e == 62) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 6;
		}
		if (e == 63) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 7;
		}
		if (e == 64) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 8;
		}
		if (e == 65) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 9;
		}
		if (e == 66) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 10;
		}
		if (e == 67) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 11;
		}
		if (e == 68) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 12;
		}
		if (e == 69) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 13;
		}
		if (e == 70) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
		}
		if (e == 71) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 1;
		}
		if (e == 72) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 2;
		}
		if (e == 73) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 3;
		}
		if (e == 74) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 4;
		}
		if (e == 75) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 5;
		}
		if (e == 76) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 6;
		}
		if (e == 77) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 7;
		}
		if (e == 78) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 8;
		}
		if (e == 79) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 9;
		}
		if (e == 80) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
		}
		if (e == 81) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 1;
		}
		if (e == 82) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 2;
		}
		if (e == 83) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 3;
		}
		if (e == 84) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 4;
		}
		if (e == 85) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 5;
		}
		if (e == 86) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
		}
		if (e == 87) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 1;
		}
		if (e == 88) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
		}
		if (e == 89) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 1;
		}
		if (e == 90) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 2;
		}
		if (e == 91) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 3;
		}
		if (e == 92) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 4;
		}
		if (e == 93) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 5;
		}
		if (e == 94) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 6;
		}
		if (e == 95) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 7;
		}
		if (e == 96) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 8;
		}
		if (e == 97) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 9;
		}
		if (e == 98) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 10;
		}
		if (e == 99) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 11;
		}
		if (e == 100) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 12;
		}
		if (e == 101) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 13;
		}
		if (e == 102) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
		}
		if (e == 103) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 1;
		}
		if (e == 104) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 2;
		}
		if (e == 105) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 3;
		}
		if (e == 106) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 4;
		}
		if (e == 107) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 5;
		}
		if (e == 108) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 6;
		}
		if (e == 109) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 7;
		}
		if (e == 110) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 8;
		}
		if (e == 111) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 9;
		}
		if (e == 112) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
		}
		if (e == 113) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 1;
		}
		if (e == 114) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 2;
		}
		if (e == 115) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 3;
		}
		if (e == 116) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 4;
		}
		if (e == 117) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 5;
		}
		if (e == 118) {
			s = 2;
			ss = 2;
			pp = 6;
			sss = 2;
			ppp = 6;
			ssss = 2;
			ddd = 10;
			pppp = 6;
			sssss = 2;
			dddd = 10;
			ppppp = 6;
			ssssss = 2;
			ffff = 14;
			ddddd = 10;
			pppppp = 6;
			sssssss = 2;
			fffff = 14;
			dddddd = 10;
			ppppppp = 6;
		}

		std::cout << "\n" << el;
		std::cout << "\nnumber of protons: " << a;
		std::cout << "\napproximate number of neutrons: " << n;
		std::cout << "\nnumber of electrons: " << e << "\n";

		if (s >= 1) {
			std::cout << "1s-" << s;
		}
		if (ss >= 1) {
			std::cout << ", 2s-" << ss;
		}
		if (pp >= 1) {
			std::cout << ", 2p-" << pp;
		}
		if (sss >= 1) {
			std::cout << ", 3s-" << sss;
		}
		if (ppp >= 1) {
			std::cout << ", 3p-" << ppp;
		}
		if (ssss >= 1) {
			std::cout << ", 4s-" << ssss;
		}
		if (ddd >= 1) {
			std::cout << ", 3d-" << ddd;
		}
		if (pppp >= 1) {
			std::cout << ", 4p-" << pppp;
		}
		if (sssss >= 1) {
			std::cout << ", 5s-" << sssss;
		}
		if (dddd >= 1) {
			std::cout << ", 4d-" << dddd;
		}
		if (ppppp >= 1) {
			std::cout << ", 5p-" << ppppp;
		}
		if (ssssss >= 1) {
			std::cout << ", 6s-" << ssssss;
		}
		if (ffff >= 1) {
			std::cout << ", 4f-" << ffff;
		}
		if (ddddd >= 1) {
			std::cout << ", 5d-" << ddddd;
		}
		if (pppppp >= 1) {
			std::cout << ", 6p-" << pppppp;
		}
		if (sssssss >= 1) {
			std::cout << ", 7s-" << sssssss;
		}
		if (fffff >= 1) {
			std::cout << ", 5f-" << fffff;
		}
		if (dddddd >= 1) {
			std::cout << ", 6d-" << dddddd;
		}
		if (ppppppp >= 1) {
			std::cout << ", 7p-" << ppppppp;
		}

		std::cout << "\n";
		
		if (a >= 3 && a <= 10) {
			std::cout << "[He]";
			if (ss >= 1) {
				std::cout << " 2s-" << ss;
			}
			if (pp >= 1) {
				std::cout << ", 2p-" << pp;
			}
			if (sss >= 1) {
				std::cout << ", 3s-" << sss;
			}
			if (ppp >= 1) {
				std::cout << ", 3p-" << ppp;
			}
			if (ssss >= 1) {
				std::cout << ", 4s-" << ssss;
			}
			if (ddd >= 1) {
				std::cout << ", 3d-" << ddd;
			}
			if (pppp >= 1) {
				std::cout << ", 4p-" << pppp;
			}
			if (sssss >= 1) {
				std::cout << ", 5s-" << sssss;
			}
			if (dddd >= 1) {
				std::cout << ", 4d-" << dddd;
			}
			if (ppppp >= 1) {
				std::cout << ", 5p-" << ppppp;
			}
			if (ssssss >= 1) {
				std::cout << ", 6s-" << ssssss;
			}
			if (ffff >= 1) {
				std::cout << ", 4f-" << ffff;
			}
			if (ddddd >= 1) {
				std::cout << ", 5d-" << ddddd;
			}
			if (pppppp >= 1) {
				std::cout << ", 6p-" << pppppp;
			}
			if (sssssss >= 1) {
				std::cout << ", 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}
		if (a >= 11 && a <= 18) {
			std::cout << "[Ne]";
			if (sss >= 1) {
				std::cout << " 3s-" << sss;
			}
			if (ppp >= 1) {
				std::cout << ", 3p-" << ppp;
			}
			if (ssss >= 1) {
				std::cout << ", 4s-" << ssss;
			}
			if (ddd >= 1) {
				std::cout << ", 3d-" << ddd;
			}
			if (pppp >= 1) {
				std::cout << ", 4p-" << pppp;
			}
			if (sssss >= 1) {
				std::cout << ", 5s-" << sssss;
			}
			if (dddd >= 1) {
				std::cout << ", 4d-" << dddd;
			}
			if (ppppp >= 1) {
				std::cout << ", 5p-" << ppppp;
			}
			if (ssssss >= 1) {
				std::cout << ", 6s-" << ssssss;
			}
			if (ffff >= 1) {
				std::cout << ", 4f-" << ffff;
			}
			if (ddddd >= 1) {
				std::cout << ", 5d-" << ddddd;
			}
			if (pppppp >= 1) {
				std::cout << ", 6p-" << pppppp;
			}
			if (sssssss >= 1) {
				std::cout << ", 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}
		if (a >= 19 && a <= 36) {
			std::cout << "[Ar]";
			if (ssss >= 1) {
				std::cout << " 4s-" << ssss;
			}
			if (ddd >= 1) {
				std::cout << ", 3d-" << ddd;
			}
			if (pppp >= 1) {
				std::cout << ", 4p-" << pppp;
			}
			if (sssss >= 1) {
				std::cout << ", 5s-" << sssss;
			}
			if (dddd >= 1) {
				std::cout << ", 4d-" << dddd;
			}
			if (ppppp >= 1) {
				std::cout << ", 5p-" << ppppp;
			}
			if (ssssss >= 1) {
				std::cout << ", 6s-" << ssssss;
			}
			if (ffff >= 1) {
				std::cout << ", 4f-" << ffff;
			}
			if (ddddd >= 1) {
				std::cout << ", 5d-" << ddddd;
			}
			if (pppppp >= 1) {
				std::cout << ", 6p-" << pppppp;
			}
			if (sssssss >= 1) {
				std::cout << ", 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}
		if (a >= 37 && a <= 54) {
			std::cout << "[Kr]";
			if (sssss >= 1) {
				std::cout << " 5s-" << sssss;
			}
			if (dddd >= 1) {
				std::cout << ", 4d-" << dddd;
			}
			if (ppppp >= 1) {
				std::cout << ", 5p-" << ppppp;
			}
			if (ssssss >= 1) {
				std::cout << ", 6s-" << ssssss;
			}
			if (ffff >= 1) {
				std::cout << ", 4f-" << ffff;
			}
			if (ddddd >= 1) {
				std::cout << ", 5d-" << ddddd;
			}
			if (pppppp >= 1) {
				std::cout << ", 6p-" << pppppp;
			}
			if (sssssss >= 1) {
				std::cout << ", 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}
		if (a >= 55 && a <= 86) {
			std::cout << "[Xe]";
			if (ssssss >= 1) {
				std::cout << " 6s-" << ssssss;
			}
			if (ffff >= 1) {
				std::cout << ", 4f-" << ffff;
			}
			if (ddddd >= 1) {
				std::cout << ", 5d-" << ddddd;
			}
			if (pppppp >= 1) {
				std::cout << ", 6p-" << pppppp;
			}
			if (sssssss >= 1) {
				std::cout << ", 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}
		if (a >= 87 && a <= 118) {
			std::cout << "[Rn]";
			if (sssssss >= 1) {
				std::cout << " 7s-" << sssssss;
			}
			if (fffff >= 1) {
				std::cout << ", 5f-" << fffff;
			}
			if (dddddd >= 1) {
				std::cout << ", 6d-" << dddddd;
			}
			if (ppppppp >= 1) {
				std::cout << ", 7p-" << ppppppp;
			}
		}

		
		std::cout << "\n\n";

		system("pause");

		system("cls");
	} while (rr == 1);

}