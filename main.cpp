#include <iostream>
#include <cstring>
#include <cstdlib>
#include "cmd_parser.h"

using namespace std;


/*Cmd_struct arguments[] = {
    {'-', 'h', 0, '0', "Some h"},
    {'-', 'x', 0, '0', "Some x"},
    {'-', 'r', 0, '0', "Some r"},
    {'-', 'p', 0, '0', "Some p"},
    {'0', '0', 0, '0', "0"},

};*/

int main(int argc, char **argv){

Cmd_struct arguments[] = {
    {'-', 'h', 0, '0', "Some h"},
    {'-', 'x', 0, '0', "Some x"},
    {'-', 'r', 0, '0', "Some r"},
    {'-', 'p', 0, '0', "Some p"},
    {'0', '0', 0, '0', "0"},

};

cmdPars(argv, arguments);

//cout << arguments[0].help << endl; //test

}