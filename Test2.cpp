// 
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
// 
//using namespace std;
// 
//int main()
//{
//	string fname;
//	cout<<"Enter the file name: ";
//	cin>>fname;
// 
//	vector<vector<string>> content;
//	vector<string> row;
//	string line, word;
// 
//	fstream file (fname, ios::in);
//	if(file.is_open())
//	{
//		while(getline(file, line))
//		{
//			row.clear();
// 
//			stringstream str(line);
// 
//			while(getline(str, word, ','))
//				row.push_back(word);
//			content.push_back(row);
//		}
//	}
//	else
//		cout<<"Could not open the file\n";
// 
//	for(int i=0;i<content.size();i++)
//	{
//		for(int j=0;j<content[i].size();j++)
//		{
//			cout<<content[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
// 
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//
//int append()
//{
//	const char comma = ',';
//	string line, word;
//	int size = 0;
//
//
//	ifstream in("MockInput.txt");   if (!in) { cerr << "can't open file"; return 1; }
//	ifstream in2("MockOutput.csv");   if (!in) { cerr << "can't open file"; return 1; }
//	ofstream fout("MockOutput.csv");
//	while (getline(in2, line))          // get successive line of text
//	{
//		stringstream ss(line);
//		bool first = true;
//		while (ss >> word)               // get successive words/values per line
//		{
//			if (!first) fout << comma;     // second and later words need a separator
//			fout << word;
//			first = false;
//			size++;
//			std::cout << word;
//			if (size == 3)
//			{
//				fout << "\n";
//				size = 0;
//				first = true;
//			}
//
//		}
//		fout << '\n';                      // end of line of output
//	}
//	while (getline(in, line))          // get successive line of text
//	{
//		stringstream ss(line);
//		bool first = true;
//		while (ss >> word)               // get successive words/values per line
//		{
//			if (!first) fout << comma;     // second and later words need a separator
//			fout << word;
//			first = false;
//			size++;
//			if (size == 3)
//			{
//				fout << "\n";
//				size = 0;
//				first = true;
//			}
//
//		}
//		fout << '\n';                      // end of line of output
//	}
//
//	in.close();
//	in2.close();
//	fout.close();
//
//}

int main()
{
	const char comma = ',';
	string line, word;
	int size=0;

	ifstream in("MockInput.txt");   if (!in) { cerr << "can't open file"; return 1; }
	ofstream fout("MockOutput.csv");
	fout << "timeplace" << ", "
		<< "testaverage1" << ", "
		<< "testaverage2" << ", "
		<< "\n";
		while (getline(in, line))          // get successive line of text
		{
			stringstream ss(line);
			bool first = true;
			while (ss >> word)               // get successive words/values per line
			{
				if (!first) fout << comma;     // second and later words need a separator
				fout << word;
				first = false;
				size++;
				if (size == 3)
				{
					fout << "\n";
					size = 0;
					first = true;
				}

			}
			fout << '\n';                      // end of line of output
		}

	in.close();
	fout.close();
	//append();
}
