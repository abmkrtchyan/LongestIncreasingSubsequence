#include <iostream>
#include <vector>
#include "LisBottomUp.h"
#include "LisTopDown.h"
#include "LisBruteForce.h"
#include "LisBackTracking.h"

void print_vector(const std::vector<int>& a)
{
    std::cout << " {";
    for (const auto& value : a)
        std::cout << " " << value;
    std::cout << " }" << std::endl;
}

using std::cout;
using std::endl;


int main()
{
    cout << "\t Calculating LIS with brute force ..." << endl;
    {
        auto lisBruteForceSolver = new LisBruteForce();

        cout << "Case 1:" << endl;
        std::vector x = {5, 12, 9, 6, 14, 8, 3, 22, 31};
        lisBruteForceSolver->initialize(x);
        std::vector y = lisBruteForceSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);

        cout << "Case 2:" << endl;
        x = {34, 19, 16, 3, 14, 22, 31, 26, 9};
        lisBruteForceSolver->initialize(x);
        y = lisBruteForceSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);

        cout << "Case 3:" << endl;
        x = {15, 19, 64, 3, 2, 1};
        lisBruteForceSolver->initialize(x);
        y = lisBruteForceSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
    }

    cout << "\t Calculating LIS by backtracking ..." << endl;
    {
        std::vector<int> x, y;
        auto lisBackTrackingSolver = new LisBackTracking();

        cout << "Case 1:" << endl;
        x = {5, 12, 9, 6, 14, 8, 3, 22, 31};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);

        cout << "Case 2:" << endl;
        x = {34, 19, 16, 3, 14, 22, 31, 26, 9};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);

        cout << "Case 3:" << endl;
        x = {15, 19, 64, 3, 2, 1};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
    }

    cout << "\t Calculating LIS with Bottom Up ..." << endl;
    {
        std::vector<int> x, y;
        auto lisBackTrackingSolver = new LisBottomUp();

        cout << "Case 1:" << endl;
        x = {5, 12, 9, 6, 14, 8, 3, 22, 31};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
        //
        cout << "LIS starting from 'x[1]' is :";
        print_vector(lisBackTrackingSolver->obtainLisFrom(1));

        cout << "Case 2:" << endl;
        x = {34, 19, 16, 3, 14, 22, 31, 26, 9};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
        //
        cout << "LIS starting from 'x[5]' is :";
        print_vector(lisBackTrackingSolver->obtainLisFrom(5));

        cout << "Case 3:" << endl;
        x = {15, 19, 64, 3, 2, 1};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
    }

    cout << "\t Calculating LIS with Top Down ..." << endl;
    {
        std::vector<int> x, y;
        auto lisBackTrackingSolver = new LisTopDown();

        cout << "Case 1:" << endl;
        x = {5, 12, 9, 6, 14, 8, 3, 22, 31};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
        //
        cout << "LIS starting from 'x[1]' is :";
        print_vector(lisBackTrackingSolver->obtainLisFrom(1));

        cout << "Case 2:" << endl;
        x = {34, 19, 16, 3, 14, 22, 31, 26, 9};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
        //
        cout << "LIS starting from 'x[5]' is :";
        print_vector(lisBackTrackingSolver->obtainLisFrom(5));

        cout << "Case 3:" << endl;
        x = {15, 19, 64, 3, 2, 1};
        lisBackTrackingSolver->initialize(x);
        y = lisBackTrackingSolver->getLis();
        cout << "x = ";
        print_vector(x);
        cout << "y = ";
        print_vector(y);
    }
    return 0;
}
