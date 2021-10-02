//Vikalp 2K19/EC/208

#include <iostream>
using namespace std;

class game
{
    int Score = 1;
    static int Points;

public:
    void inc();
    void print();
};

int game ::Points = 20;

void game ::inc()
{
    Score += 1;
    Points += 25;
}
void game ::print()
{
    cout << "\nPoints is : " << Points;
    cout << "\nScore is " << Score;
}

int main()
{
    game match1;
    match1.inc();
    match1.print();
    game match2;
    match2.inc();
    match2.print();
    game match3;
    match3.inc();
    match3.print();
    return 0;
}