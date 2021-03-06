**Overview**

We use the flex tool to generate a lexical analyzer for a high-level source code language called "MINI-L". The lexical analyzer should take as input a MINI-L program, parse it, and output the sequence of lexical tokens associated with the program.

1. Write the specification for a flex lexical analyzer for the MINI-L language. For this phase of the project, your lexical analyzer need only output the list of tokens identified from an inputted MINI-L program.
- Example: write the flex specification in a file named mini_l.lex.
2. Run flex to generate the lexical analyzer for MINI-L using your specification.
- Example: execute the command flex mini_l.lex. This will create a file called lex.yy.c in the current directory.
3. Compile your MINI-L lexical analyzer. This will require the -lfl flag for gcc.
- Example: compile your lexical analyzer into the executable lexer with the following command: gcc -o lexer lex.yy.c -lfl. The program lexer should now be able to convert an inputted MINI-L program into the corresponding list of tokens.

**What is MINI-L?**

[The MINI-L Source Code Language](https://github.com/rvinl001/CS152_Projects/blob/master/Phase1:%20Lexical%20Analyzer/The%20MINI-L%20Source%20Code%20Language.pdf)

**Expected Output Format**

[Output Format for Lexical Analyzer](https://github.com/rvinl001/CS152_Projects/blob/master/Phase1:%20Lexical%20Analyzer/Output%20Format%20for%20Lexical%20Analyzer.pdf)
