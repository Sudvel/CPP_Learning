#ifndef GOLF_H
#define GOLF_H

const int LEN = 40;
struct Golf
{
    char name[LEN];
    int handicap;
};

void setgolf(Golf &g, const char * name, int hc);
int setgolf(Golf &g);
void handicap(Golf &g, int hc);
void showgolf(const Golf &g);

#endif