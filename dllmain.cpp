#include "stdafx.h"
#include "stdio.h"
#include <string>
#include <windows.h>
#include "includes\injector\injector.hpp"
#include "includes\IniReader.h"

int Init()
{

	CIniReader TraxRenamerIniReader("NFSUTraxRenamer.ini");

	// Song1
	char* Song1Title = TraxRenamerIniReader.ReadString("Song1", "Title", "\"Doomsday\"");
	char* Song1Artist = TraxRenamerIniReader.ReadString("Song1", "Artist", "Overseer");
	char* Song1Album = TraxRenamerIniReader.ReadString("Song1", "Album", "Wreckage");
	char* Song1PlayIn = TraxRenamerIniReader.ReadString("Song1", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D08, Song1Title, true);
	injector::WriteMemory(0x6F4D0C, Song1Artist, true);
	injector::WriteMemory(0x6F4D10, Song1Album, true);
	injector::WriteMemory(0x6F4D14, Song1PlayIn, true);

	// Song2
	char* Song2Title = TraxRenamerIniReader.ReadString("Song2", "Title", "\"Born Too Slow\"");
	char* Song2Artist = TraxRenamerIniReader.ReadString("Song2", "Artist", "The Crystal Method");
	char* Song2Album = TraxRenamerIniReader.ReadString("Song2", "Album", "Legion of Boom");
	char* Song2PlayIn = TraxRenamerIniReader.ReadString("Song2", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D18, Song2Title, true);
	injector::WriteMemory(0x6F4D1C, Song2Artist, true);
	injector::WriteMemory(0x6F4D20, Song2Album, true);
	injector::WriteMemory(0x6F4D24, Song2PlayIn, true);

	// Song3
	char* Song3Title = TraxRenamerIniReader.ReadString("Song3", "Title", "\"Out of Control\"");
	char* Song3Artist = TraxRenamerIniReader.ReadString("Song3", "Artist", "Rancid");
	char* Song3Album = TraxRenamerIniReader.ReadString("Song3", "Album", "Indestructible");
	char* Song3PlayIn = TraxRenamerIniReader.ReadString("Song3", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D28, Song3Title, true);
	injector::WriteMemory(0x6F4D2C, Song3Artist, true);
	injector::WriteMemory(0x6F4D30, Song3Album, true);
	injector::WriteMemory(0x6F4D34, Song3PlayIn, true);

	// Song4
	char* Song4Title = TraxRenamerIniReader.ReadString("Song4", "Title", "\"Two-Line Blacktop\"");
	char* Song4Artist = TraxRenamerIniReader.ReadString("Song4", "Artist", "Rob Zombie");
	char* Song4Album = TraxRenamerIniReader.ReadString("Song4", "Album", "Past, Present & Future");
	char* Song4PlayIn = TraxRenamerIniReader.ReadString("Song4", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D38, Song4Title, true);
	injector::WriteMemory(0x6F4D3C, Song4Artist, true);
	injector::WriteMemory(0x6F4D40, Song4Album, true);
	injector::WriteMemory(0x6F4D44, Song4PlayIn, true);

	// Song5
	char* Song5Title = TraxRenamerIniReader.ReadString("Song5", "Title", "\"Kimosabe\"");
	char* Song5Artist = TraxRenamerIniReader.ReadString("Song5", "Artist", "BT");
	char* Song5Album = TraxRenamerIniReader.ReadString("Song5", "Album", "");
	char* Song5PlayIn = TraxRenamerIniReader.ReadString("Song5", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D48, Song5Title, true);
	injector::WriteMemory(0x6F4D4C, Song5Artist, true);
	injector::WriteMemory(0x6F4D50, Song5Album, true);
	injector::WriteMemory(0x6F4D54, Song5PlayIn, true);

	// Song6
	char* Song6Title = TraxRenamerIniReader.ReadString("Song6", "Title", "\"The Only\"");
	char* Song6Artist = TraxRenamerIniReader.ReadString("Song6", "Artist", "Static-X");
	char* Song6Album = TraxRenamerIniReader.ReadString("Song6", "Album", "Shadow Zone");
	char* Song6PlayIn = TraxRenamerIniReader.ReadString("Song6", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D58, Song6Title, true);
	injector::WriteMemory(0x6F4D5C, Song6Artist, true);
	injector::WriteMemory(0x6F4D60, Song6Album, true);
	injector::WriteMemory(0x6F4D64, Song6PlayIn, true);

	// Song7
	char* Song7Title = TraxRenamerIniReader.ReadString("Song7", "Title", "\"Broken Promises\"");
	char* Song7Artist = TraxRenamerIniReader.ReadString("Song7", "Artist", "Element Eighty");
	char* Song7Album = TraxRenamerIniReader.ReadString("Song7", "Album", "Element Eighty");
	char* Song7PlayIn = TraxRenamerIniReader.ReadString("Song7", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D68, Song7Title, true);
	injector::WriteMemory(0x6F4D6C, Song7Artist, true);
	injector::WriteMemory(0x6F4D70, Song7Album, true);
	injector::WriteMemory(0x6F4D74, Song7PlayIn, true);

	// Song8
	char* Song8Title = TraxRenamerIniReader.ReadString("Song8", "Title", "\"Fortress Europe\"");
	char* Song8Artist = TraxRenamerIniReader.ReadString("Song8", "Artist", "Asian Dub Foundation");
	char* Song8Album = TraxRenamerIniReader.ReadString("Song8", "Album", "Enemy of the Enemy");
	char* Song8PlayIn = TraxRenamerIniReader.ReadString("Song8", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D78, Song8Title, true);
	injector::WriteMemory(0x6F4D7C, Song8Artist, true);
	injector::WriteMemory(0x6F4D80, Song8Album, true);
	injector::WriteMemory(0x6F4D84, Song8PlayIn, true);

	// Song9
	char* Song9Title = TraxRenamerIniReader.ReadString("Song9", "Title", "\"Invisible\"");
	char* Song9Artist = TraxRenamerIniReader.ReadString("Song9", "Artist", "Hotwire");
	char* Song9Album = TraxRenamerIniReader.ReadString("Song9", "Album", "The Routine");
	char* Song9PlayIn = TraxRenamerIniReader.ReadString("Song9", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D88, Song9Title, true);
	injector::WriteMemory(0x6F4D8C, Song9Artist, true);
	injector::WriteMemory(0x6F4D90, Song9Album, true);
	injector::WriteMemory(0x6F4D94, Song9PlayIn, true);

	// Song10
	char* Song10Title = TraxRenamerIniReader.ReadString("Song10", "Title", "\"And the Hero Will Drown\"");
	char* Song10Artist = TraxRenamerIniReader.ReadString("Song10", "Artist", "Story of the Year");
	char* Song10Album = TraxRenamerIniReader.ReadString("Song10", "Album", "Page Avenue");
	char* Song10PlayIn = TraxRenamerIniReader.ReadString("Song10", "PlayIn", "IG");
	injector::WriteMemory(0x6F4D98, Song10Title, true);
	injector::WriteMemory(0x6F4D9C, Song10Artist, true);
	injector::WriteMemory(0x6F4DA0, Song10Album, true);
	injector::WriteMemory(0x6F4DA4, Song10PlayIn, true);

	// Song11
	char* Song11Title = TraxRenamerIniReader.ReadString("Song11", "Title", "\"The Wonders of You\"");
	char* Song11Artist = TraxRenamerIniReader.ReadString("Song11", "Artist", "Andy Hunter");
	char* Song11Album = TraxRenamerIniReader.ReadString("Song11", "Album", "Exodus");
	char* Song11PlayIn = TraxRenamerIniReader.ReadString("Song11", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DA8, Song11Title, true);
	injector::WriteMemory(0x6F4DAC, Song11Artist, true);
	injector::WriteMemory(0x6F4DB0, Song11Album, true);
	injector::WriteMemory(0x6F4DB4, Song11PlayIn, true);

	// Song12
	char* Song12Title = TraxRenamerIniReader.ReadString("Song12", "Title", "\"Action Radius\"");
	char* Song12Artist = TraxRenamerIniReader.ReadString("Song12", "Artist", "Junkie XL");
	char* Song12Album = TraxRenamerIniReader.ReadString("Song12", "Album", "Big Sounds of the Drags");
	char* Song12PlayIn = TraxRenamerIniReader.ReadString("Song12", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DB8, Song12Title, true);
	injector::WriteMemory(0x6F4DBC, Song12Artist, true);
	injector::WriteMemory(0x6F4DC0, Song12Album, true);
	injector::WriteMemory(0x6F4DC4, Song12PlayIn, true);

	// Song13
	char* Song13Title = TraxRenamerIniReader.ReadString("Song13", "Title", "\"Quarter\"");
	char* Song13Artist = TraxRenamerIniReader.ReadString("Song13", "Artist", "Fuel");
	char* Song13Album = TraxRenamerIniReader.ReadString("Song13", "Album", "Natural Selection");
	char* Song13PlayIn = TraxRenamerIniReader.ReadString("Song13", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DC8, Song13Title, true);
	injector::WriteMemory(0x6F4DCC, Song13Artist, true);
	injector::WriteMemory(0x6F4DD0, Song13Album, true);
	injector::WriteMemory(0x6F4DD4, Song13PlayIn, true);

	// Song14
	char* Song14Title = TraxRenamerIniReader.ReadString("Song14", "Title", "\"Sucked In\"");
	char* Song14Artist = TraxRenamerIniReader.ReadString("Song14", "Artist", "Jerk");
	char* Song14Album = TraxRenamerIniReader.ReadString("Song14", "Album", "When Pure is Defiled");
	char* Song14PlayIn = TraxRenamerIniReader.ReadString("Song14", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DD8, Song14Title, true);
	injector::WriteMemory(0x6F4DDC, Song14Artist, true);
	injector::WriteMemory(0x6F4DE0, Song14Album, true);
	injector::WriteMemory(0x6F4DE4, Song14PlayIn, true);

	// Song15
	char* Song15Title = TraxRenamerIniReader.ReadString("Song15", "Title", "\"Snapshot\"");
	char* Song15Artist = TraxRenamerIniReader.ReadString("Song15", "Artist", "Fluke");
	char* Song15Album = TraxRenamerIniReader.ReadString("Song15", "Album", "Puppy");
	char* Song15PlayIn = TraxRenamerIniReader.ReadString("Song15", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DE8, Song15Title, true);
	injector::WriteMemory(0x6F4DEC, Song15Artist, true);
	injector::WriteMemory(0x6F4DF0, Song15Album, true);
	injector::WriteMemory(0x6F4DF4, Song15PlayIn, true);

	// Song16
	char* Song16Title = TraxRenamerIniReader.ReadString("Song16", "Title", "\"Ride\"");
	char* Song16Artist = TraxRenamerIniReader.ReadString("Song16", "Artist", "lostprophets");
	char* Song16Album = TraxRenamerIniReader.ReadString("Song16", "Album", "Start Something");
	char* Song16PlayIn = TraxRenamerIniReader.ReadString("Song16", "PlayIn", "IG");
	injector::WriteMemory(0x6F4DF8, Song16Title, true);
	injector::WriteMemory(0x6F4DFC, Song16Artist, true);
	injector::WriteMemory(0x6F4E00, Song16Album, true);
	injector::WriteMemory(0x6F4E04, Song16PlayIn, true);

	// Song17
	char* Song17Title = TraxRenamerIniReader.ReadString("Song17", "Title", "\"Supermoves\"");
	char* Song17Artist = TraxRenamerIniReader.ReadString("Song17", "Artist", "Overseer");
	char* Song17Album = TraxRenamerIniReader.ReadString("Song17", "Album", "Wreckage");
	char* Song17PlayIn = TraxRenamerIniReader.ReadString("Song17", "PlayIn", "IG");
	injector::WriteMemory(0x6F4E08, Song17Title, true);
	injector::WriteMemory(0x6F4E0C, Song17Artist, true);
	injector::WriteMemory(0x6F4E10, Song17Album, true);
	injector::WriteMemory(0x6F4E14, Song17PlayIn, true);

	// Song18
	char* Song18Title = TraxRenamerIniReader.ReadString("Song18", "Title", "\"Glitterball\"");
	char* Song18Artist = TraxRenamerIniReader.ReadString("Song18", "Artist", "FC Kahuna");
	char* Song18Album = TraxRenamerIniReader.ReadString("Song18", "Album", "Machine Says Yes");
	char* Song18PlayIn = TraxRenamerIniReader.ReadString("Song18", "PlayIn", "IG");
	injector::WriteMemory(0x6F4E18, Song18Title, true);
	injector::WriteMemory(0x6F4E1C, Song18Artist, true);
	injector::WriteMemory(0x6F4E20, Song18Album, true);
	injector::WriteMemory(0x6F4E24, Song18PlayIn, true);

	// Song19
	char* Song19Title = TraxRenamerIniReader.ReadString("Song19", "Title", "\"Swallow\"");
	char* Song19Artist = TraxRenamerIniReader.ReadString("Song19", "Artist", "Blindside");
	char* Song19Album = TraxRenamerIniReader.ReadString("Song19", "Album", "About a Burning Fire");
	char* Song19PlayIn = TraxRenamerIniReader.ReadString("Song19", "PlayIn", "IG");
	injector::WriteMemory(0x6F4E28, Song19Title, true);
	injector::WriteMemory(0x6F4E2C, Song19Artist, true);
	injector::WriteMemory(0x6F4E30, Song19Album, true);
	injector::WriteMemory(0x6F4E34, Song19PlayIn, true);

	// Song20
	char* Song20Title = TraxRenamerIniReader.ReadString("Song20", "Title", "\"Get Low\"");
	char* Song20Artist = TraxRenamerIniReader.ReadString("Song20", "Artist", "Lil Jon & the Eastside Boyz");
	char* Song20Album = TraxRenamerIniReader.ReadString("Song20", "Album", "Kings of Crunk");
	char* Song20PlayIn = TraxRenamerIniReader.ReadString("Song20", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E38, Song20Title, true);
	injector::WriteMemory(0x6F4E3C, Song20Artist, true);
	injector::WriteMemory(0x6F4E40, Song20Album, true);
	injector::WriteMemory(0x6F4E44, Song20PlayIn, true);

	// Song21
	char* Song21Title = TraxRenamerIniReader.ReadString("Song21", "Title", "\"Smashing the Gas (Get Faster)\"");
	char* Song21Artist = TraxRenamerIniReader.ReadString("Song21", "Artist", "Mystikal");
	char* Song21Album = TraxRenamerIniReader.ReadString("Song21", "Album", "Need for Speed Exclusive");
	char* Song21PlayIn = TraxRenamerIniReader.ReadString("Song21", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E48, Song21Title, true);
	injector::WriteMemory(0x6F4E4C, Song21Artist, true);
	injector::WriteMemory(0x6F4E50, Song21Album, true);
	injector::WriteMemory(0x6F4E54, Song21PlayIn, true);

	// Song22
	char* Song22Title = TraxRenamerIniReader.ReadString("Song22", "Title", "\"Who's Who\"");
	char* Song22Artist = TraxRenamerIniReader.ReadString("Song22", "Artist", "Dilated Peoples");
	char* Song22Album = TraxRenamerIniReader.ReadString("Song22", "Album", "Neighborhood Watch");
	char* Song22PlayIn = TraxRenamerIniReader.ReadString("Song22", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E58, Song22Title, true);
	injector::WriteMemory(0x6F4E5C, Song22Artist, true);
	injector::WriteMemory(0x6F4E60, Song22Album, true);
	injector::WriteMemory(0x6F4E64, Song22PlayIn, true);

	// Song23
	char* Song23Title = TraxRenamerIniReader.ReadString("Song23", "Title", "\"Keep It Coming\"");
	char* Song23Artist = TraxRenamerIniReader.ReadString("Song23", "Artist", "Nate Dogg");
	char* Song23Album = TraxRenamerIniReader.ReadString("Song23", "Album", "Need for Speed Exclusive");
	char* Song23PlayIn = TraxRenamerIniReader.ReadString("Song23", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E68, Song23Title, true);
	injector::WriteMemory(0x6F4E6C, Song23Artist, true);
	injector::WriteMemory(0x6F4E70, Song23Album, true);
	injector::WriteMemory(0x6F4E74, Song23PlayIn, true);

	// Song24
	char* Song24Title = TraxRenamerIniReader.ReadString("Song24", "Title", "\"Body Rock\"");
	char* Song24Artist = TraxRenamerIniReader.ReadString("Song24", "Artist", "X-ecutioners");
	char* Song24Album = TraxRenamerIniReader.ReadString("Song24", "Album", "");
	char* Song24PlayIn = TraxRenamerIniReader.ReadString("Song24", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E78, Song24Title, true);
	injector::WriteMemory(0x6F4E7C, Song24Artist, true);
	injector::WriteMemory(0x6F4E80, Song24Album, true);
	injector::WriteMemory(0x6F4E84, Song24PlayIn, true);

	// Song25
	char* Song25Title = TraxRenamerIniReader.ReadString("Song25", "Title", "\"Need For Speed\"");
	char* Song25Artist = TraxRenamerIniReader.ReadString("Song25", "Artist", "Petey Pablo");
	char* Song25Album = TraxRenamerIniReader.ReadString("Song25", "Album", "Need for Speed Exclusive");
	char* Song25PlayIn = TraxRenamerIniReader.ReadString("Song25", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E88, Song25Title, true);
	injector::WriteMemory(0x6F4E8C, Song25Artist, true);
	injector::WriteMemory(0x6F4E90, Song25Album, true);
	injector::WriteMemory(0x6F4E94, Song25PlayIn, true);

	// Song26
	char* Song26Title = TraxRenamerIniReader.ReadString("Song26", "Title", "\"24's\"");
	char* Song26Artist = TraxRenamerIniReader.ReadString("Song26", "Artist", "T.I.");
	char* Song26Album = TraxRenamerIniReader.ReadString("Song26", "Album", "Trap Muzik");
	char* Song26PlayIn = TraxRenamerIniReader.ReadString("Song26", "PlayIn", "FE");
	injector::WriteMemory(0x6F4E98, Song26Title, true);
	injector::WriteMemory(0x6F4E9C, Song26Artist, true);
	injector::WriteMemory(0x6F4EA0, Song26Album, true);
	injector::WriteMemory(0x6F4EA4, Song26PlayIn, true);

	return 0;
}

BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD reason, LPVOID /*lpReserved*/)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		uintptr_t base = (uintptr_t)GetModuleHandleA(NULL);
		IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)(base);
		IMAGE_NT_HEADERS* nt = (IMAGE_NT_HEADERS*)(base + dos->e_lfanew);

		if ((base + nt->OptionalHeader.AddressOfEntryPoint + (0x400000 - base)) == 0x670CB5) // Check if .exe file is compatible - Thanks to thelink2012 and MWisBest
			Init();

		else
		{
			MessageBoxA(NULL, "This .exe is not supported.\nPlease use v1.4 English speed.exe (3,03 MB (3.178.496 bytes)).", "NFSU Trax Renamer", MB_ICONERROR);
			return FALSE;
		}
	}
	return TRUE;

}

