// 2017 -> 5(a)
int num[] = {0, 0, 0, 0}; // no error
float item[3][2] = {0, 1, 2, 3, 4, 5}; //no error
// but following is the recommended
float item[3][2] = {
    {0, 1},
    {2, 3},
    {4, 5}
};

int num[3] = {3, 4, 5, 6}; // no error
int num[4] = {3, 4, 5, 6}; // but this is recommended

int m[2][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1}
}
