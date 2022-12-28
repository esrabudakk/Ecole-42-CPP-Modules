
#include <iostream>
#include <fstream>
#include <cstring>

using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::string;

int main(int argc, char **argv)
{
	if (argc == 4)
	{

		ifstream file;
		ofstream copyfile;
		string filename;
		string s1;
		string s2;
		int i = 0;
		int k;
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		file.open(filename);
		string line;
		string tmp;
		size_t g = 0;
		i = 0;
		if (file.is_open())
		{
			cout << "~~~~ File connection success.LOADING..." << endl;
			while (getline(file, tmp))
			{
				cout << tmp << endl;
				g = tmp.find(s1);
				if (g != string::npos)
				{
					line.append(tmp.substr(0, g));
					line.append(s2);
					line.append(tmp.substr(g + s1.length()) + "\n");
				}
				else
					line.append(tmp).append("\n");
				tmp.clear();
				i++;
			}
			k = i;
			i = 0;
			cout << endl;
			if (filename.find_last_of(".") == string::npos)
				copyfile.open(filename.append(".replace"));
			else
			{
				size_t j = filename.find_last_of(".");
				filename = filename.substr(0, j) + ".replace";
				copyfile.open(filename);
			}
			if (copyfile.is_open())
			{
				cout << "~~~~ Copyfile success.READING..." << endl
					 << endl;
				copyfile << line;
				copyfile << endl;
				cout << line << endl;
			}
			else
				cout << "Copyfile connection error!" << endl;
		}
		else
			cout << "File connection error!" << endl;
		file.close();
		copyfile.close();
	}
	else
		cout << "Wrong arguman size" << endl;
}