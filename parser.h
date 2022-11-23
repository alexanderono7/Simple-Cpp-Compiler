#ifndef __PARSER_H__
#define __PARSER_H__

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include <string.h>
#include <vector>
#include <string>
#include <set>
#include <vector>
#include "lexer.h"
#include "execute.h"

using namespace std;


// maybe don't use this?
class Parser {
    public:
    private:
};

// Parsing Functions
void readAndPrintAllInput();
void parse_var_section();
void parse_id_list();
void parse_body();
InstructionNode* parse_stmt_list(); 
InstructionNode* parse_stmt();

InstructionNode* parse_assign_stmt();
void parse_expr();
void parse_primary();
void parse_op();

InstructionNode* parse_output_stmt();
InstructionNode* parse_input_stmt();
InstructionNode* parse_while_stmt();
InstructionNode* parse_if_stmt();
void parse_condition();
void parse_relop();
InstructionNode* parse_switch_stmt();
InstructionNode* parse_for_stmt();
void parse_case_list();
void parse_case();
void parse_default_case();

void parse_inputs();
void parse_num_list();

// Non-Parsing Functions
void raise_error();
int location(string a);
void new_variable(string name);

#endif