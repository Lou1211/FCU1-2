#include <iostream>
#include <string>

using namespace std;

int main()
{
    char way[4] = {'N', 'E', 'S', 'W'};
    int move[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int X, Y, x, y, map[55][55] = {0}, a;
    char face;
    cin >> X >> Y;
    int lost = 0;
    while (cin >> x >> y >> face && x != EOF)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (face == way[i])
            {
                a = i;
                break;
            }
        }
        char walk[105];
        cin >> walk;
        // cout << x << "\t" << y << "\t" << walk << endl;
        lost = 0;
        for (int i = 0; walk[i]; ++i)
        {
            if (walk[i] == 'R')
            {
                a = (a + 1) % 4;
                face = way[a];
            }
            else if (walk[i] == 'L')
            {
                a = (a + 3) % 4;
                face = way[a];
            }
            else if (walk[i] == 'F')
            {
                int xp = move[a][0];
                int yp = move[a][1];
                int Nextx = x + xp;
                int Nexty = y + yp;
                if (Nextx < 0 || Nextx > X || Nexty < 0 || Nexty > Y)
                {
                    if (map[x][y] < 0)
                        continue;

                    lost = 1;
                    map[x][y] = -1;
                    break;
                }
                x = Nextx;
                y = Nexty;
            }
            //cout << x << "\t" << y << "\t" << a << "\t" << face << endl;
        }
        if (lost)
        {
            cout << x << " " << y << " " << face << " LOST" << endl;
        }
        else
        {
            cout << x << " " << y << " " << face << endl;
        }
    }
}