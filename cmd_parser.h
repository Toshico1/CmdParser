#ifndef __CMD_PARSER__
#define __CMD_PARSER__

struct Cmd_struct {
    char sign; //-
    char key; //key
    int mask; //mask
    char value; // key val
    char help[]; //some help (OMG)
};
void cmdPars(char **argv,struct Cmd_struct *arguments);

#endif