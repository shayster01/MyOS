//Shawn Shay

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;
bool freespace[256000];
// 0=free, 1=not free

struct node  {
	node *back;
	node *frwd;
	int free;
	int filler;
	int dir[31];
};

struct dirnode{
	int type;
	//0=free, 1=dir, 2=user data
	string name;
	int link;
	int size;
};
void SetupFreeSpace();
void isFree(int);
int main()
{
	SetupFreeSpace();
	cout << freespace[0] << " " << freespace[255999] << endl;
	node node1;
	node1.back =0;
	node1.frwd = NULL;
	node1.dir[0];
	dirnode node2;
	node2.type = 1;
	node2.name = "root";
	node2.size = 0;
	node2.link = 0;
	node currentnode = node1;
	//cout << currentnode.back;
	isFree(255999);
}
void SetupFreeSpace()
{
	int i = 255999;
	while (i > 0)
	{
		freespace[i] =0 ;
		i--;
	}
}

void isFree(int block)
{
	if (freespace[block] == 0)
	{
		cout << "Free" << endl;
	}
	else
		cout << "Not Free" << endl;
}
string CREATE(int type, string name)
{

}
