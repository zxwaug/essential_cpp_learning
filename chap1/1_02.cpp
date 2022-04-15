#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string user_name;
    int val = 0;
    int num_tries = 0;
    int num_right(0);
    double user_core = 0.0;
    char user_more;
    bool go_for_it = true;
    const int max_tries = 3;
    const int seq_size = 18;
    int elem_seq[seq_size] = {
        1, 2, 3, // Fibonacci
        3, 4, 7, // Lucas
        2, 5, 12, // Pell
        3, 6, 10, // Triangular
        4, 9, 16, // Square
        5, 12, 22 // Pentagonal
    };
    int cur_index = 0;

    return 0;
}