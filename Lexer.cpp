//
// Created by sarah on 02/01/2020.
//

#include "Lexer.h"
#include "StringHelper.h"

#define DELIM "\t (),"
/**
*return the string helper to split the lines.
*/
vector<string> Lexer::lexer(string line) {
  return StringHelper::split2(line, DELIM);
}