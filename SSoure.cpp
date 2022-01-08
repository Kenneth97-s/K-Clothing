#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void populateArrary(int marks[][4], int c, int r)
{
 for (int x = 0; x < r; x++)
 {
  for (int y = 0; y < c; y++)
  {
   marks[x][c] = 25 + rand() % (80 + 1 - 25);
  }
 }
}
void display(int marks[][4], int c, int r)
{

 for (int x = 0; x < r; x++)
 {
  for (int y = 0; y < c; y++)
  {
   cout << marks[x][y];
  }
  cout << endl;
 }
}

int main()
{

 srand(time(NULL));
 string subCode[] = {"IIS20BT", "TPG201T", "LOD3111T", "DSY34C"};
 int m[4][4];
 populateArrary(m, 4, 4);
 display(m, 4, 4);

 system("pause");
 return 0;
}