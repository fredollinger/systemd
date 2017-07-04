#ifndef MACRO_BUG_H
#define MACRO_BUG_H

#define assert(expr) do {} while (false)

#define assert_cc(expr) do {} while (false)

/* What is interpreted as whitespace? */
#define WHITESPACE        " \t\n\r"
#define NEWLINE           "\n\r"
#define QUOTES            "\"\'"
#define COMMENTS          "#;"
#define GLOB_CHARS        "*?["
#define DIGITS            "0123456789"
#define LOWERCASE_LETTERS "abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE_LETTERS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LETTERS           LOWERCASE_LETTERS UPPERCASE_LETTERS
#define ALPHANUMERICAL    LETTERS DIGITS

#endif // MACRO_BUG_H
