// dbFile.cpp
#include "dbFile.h"

dbFile::dbFile(void)
{
	debug.open("./Debug.txt", ofstream::out | ios::app);
	t_0 = time(NULL);
}

dbFile::~dbFile(void)
{

	if (inked == true)
	{
		debug << "End of log entry....\n";
		debug << "*-----------------------------------------------------*\n\n\n";
	}

	debug.close();
}

void dbFile::write(string message)
{
	if (inked == false)
	{
		str[26] = {};
		ctime_s(str, sizeof str, &t_0);
		debug << str << "-------------------------------------------------------\n";
		inked = true;
	}
	debug << message << endl;
	debug.flush();
}