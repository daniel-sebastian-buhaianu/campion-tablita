#include <fstream>
using namespace std;
int main()
{
	ifstream f("tablita.in");
	int n;
	f >> n;
	f.close();
	int x = 0, gr = 1;
	while (n < x+1 || n > x+gr)
	{
		x += gr;
		gr++;
	}
	ofstream g("tablita.out");
	g << gr;
	g.close();
	return 0;
}
