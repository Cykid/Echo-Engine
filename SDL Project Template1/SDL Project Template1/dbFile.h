// dbFile.h
#ifndef _DB_FILE_H_
#define	_DB_FILE_H_

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

/// <summary> Debug file class that any errors should be written to. </summary>
class dbFile
{
public:

	/// <summary> Creates a file "./Debug.txt" in running directory. </summary>
	dbFile(void);
	/// <summary> Closes "./Debug.txt". </summary>
	~dbFile(void);
	/// <summary> Writes a messages to the "./Debug.txt". </summary>
	void write(string message);

private:
	ofstream debug;
	time_t t_0;
	char str[26];
	bool inked = false;
};



#endif // !_DB_FILE_H_