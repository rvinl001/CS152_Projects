// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 1 "mini_l.yy" // lalr1.cc:404


#line 39 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 53 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 36 "mini_l.yy" // lalr1.cc:413

#include "parser.tab.hh"
#include <stdio.h>
	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */

/* to output "__temp__"  */
/*int num_temps = 0;
string make_temp() {
	std::string ret = "__temp__" + itoa(num_temps);
	num_temps++;
	return ret;
}*/	
	/* end of your code */

#line 80 "parser.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 166 "parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 62: // statements
      case 71: // declarations
        value.move< dec_type > (that.value);
        break;

      case 51: // IDENT
        value.move< string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 62: // statements
      case 71: // declarations
        value.copy< dec_type > (that.value);
        break;

      case 51: // IDENT
        value.copy< string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 62: // statements
      case 71: // declarations
        yylhs.value.build< dec_type > ();
        break;

      case 51: // IDENT
        yylhs.value.build< string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 90 "mini_l.yy" // lalr1.cc:859
    {cout << yystack_[0].value.as< dec_type > ().code <<  "\n";}
#line 578 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 94 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "func " + yystack_[10].value.as< dec_type > ().code + "\n";
		 yylhs.value.as< dec_type > ().code += yystack_[7].value.as< dec_type > ().code + "\n";
		 /* for loop for multiple idents  */
		 for (int i = 0; i < yystack_[7].value.as< dec_type > ().ids.size(); ++i) 
		 {
		 	yylhs.value.as< dec_type > ().code += "= " + yystack_[7].value.as< dec_type > ().ids[i] + ", $" + std::to_string(i); /* itoa(i) not in c++ */
		 }
		 yylhs.value.as< dec_type > ().code += yystack_[4].value.as< dec_type > ().code + "\n";
		 yylhs.value.as< dec_type > ().code += yystack_[1].value.as< dec_type > ().code + "\n";
		 yylhs.value.as< dec_type > ().code += "endfunc"; 
		}
#line 594 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 108 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 600 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 110 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< dec_type > ().code + "\n" + yystack_[0].value.as< dec_type > ().code;}
#line 606 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 114 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 612 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 118 "mini_l.yy" // lalr1.cc:859
    {printf("something");}
#line 618 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 121 "mini_l.yy" // lalr1.cc:859
    {printf("term -> var\n");}
#line 624 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 124 "mini_l.yy" // lalr1.cc:859
    {cout << "hi";}
#line 630 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 127 "mini_l.yy" // lalr1.cc:859
    {printf("term -> L_PAREN mult_expression R_PAREN\n");}
#line 636 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 130 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB NUMBER \n");}
#line 642 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 133 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB var\n");}
#line 648 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 136 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 654 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 139 "mini_l.yy" // lalr1.cc:859
    {printf("term -> IDENT L_PAREN expression R_PAREN\n");}
#line 660 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 142 "mini_l.yy" // lalr1.cc:859
    {printf("term -> IDENT L_PAREN mult_expression R_PAREN\n");}
#line 666 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 146 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident\n");}
#line 672 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 149 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 678 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 152 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 684 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 156 "mini_l.yy" // lalr1.cc:859
    {printf("vars -> var COMMA vars\n");}
#line 690 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 159 "mini_l.yy" // lalr1.cc:859
    {printf("vars -> var\n");}
#line 696 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 163 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> var ASSIGN expression\n");}
#line 702 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 166 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
#line 708 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 169 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
#line 714 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 172 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
#line 720 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 175 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
#line 726 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 178 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN exp BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 732 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 181 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> READ vars\n");}
#line 738 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 184 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> WRITE vars\n");}
#line 744 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 187 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> CONTINUE\n");}
#line 750 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 190 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> RETURN expression\n");}
#line 756 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 196 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 762 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 199 "mini_l.yy" // lalr1.cc:859
    {printf("statements -> statement SEMICOLON statements\n");}
#line 768 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 204 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression\n");}
#line 774 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 207 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
#line 780 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 210 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
#line 786 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 214 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term\n");}
#line 792 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 217 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MOD term\n");}
#line 798 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 220 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MULT term\n");}
#line 804 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 223 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term DIV term\n");}
#line 810 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 226 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term ADD term\n");}
#line 816 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 229 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term SUB term\n");}
#line 822 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 233 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> expression comp expression\n");}
#line 828 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 236 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> TRUE\n");}
#line 834 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 239 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> FALSE\n");}
#line 840 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 242 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");}
#line 846 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 245 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT expression comp expression\n");}
#line 852 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 248 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT TRUE\n");}
#line 858 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 251 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT FALSE\n");}
#line 864 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 254 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN\n");}
#line 870 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 259 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp\n");}
#line 876 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 262 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp AND relation_exp\n");}
#line 882 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 266 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp\n");}
#line 888 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 269 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
#line 894 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 274 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> LT\n");}
#line 900 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 277 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> GT\n");}
#line 906 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 280 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> EQ\n");}
#line 912 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 283 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> NEQ\n");}
#line 918 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 286 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> LTE\n");}
#line 924 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 289 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> GTE\n");}
#line 930 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 294 "mini_l.yy" // lalr1.cc:859
    {printf("identifiers -> ident\n");}
#line 936 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 297 "mini_l.yy" // lalr1.cc:859
    {printf("identifiers -> ident COMMA identifiers\n");}
#line 942 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 301 "mini_l.yy" // lalr1.cc:859
    {printf("declaration -> identifiers COLON INTEGER\n");}
#line 948 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 304 "mini_l.yy" // lalr1.cc:859
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 954 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 307 "mini_l.yy" // lalr1.cc:859
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 960 "parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 313 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 966 "parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 316 "mini_l.yy" // lalr1.cc:859
    {printf("declarations -> declaration SEMICOLON declarations\n");}
#line 972 "parser.tab.cc" // lalr1.cc:859
    break;


#line 976 "parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -57;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
     -13,   -24,    20,   -13,   -57,   -57,    34,   -57,   -57,    31,
     -22,   -57,    71,    41,    52,    72,     2,    24,   -22,    62,
     -57,   -57,    81,   -57,   -57,   -22,    51,    66,    89,    84,
       3,   109,    56,    86,    19,    19,    79,   -57,    61,    61,
      61,    14,   100,   -57,     9,   104,    95,   105,   -57,    19,
      36,   -57,    27,   -57,    -1,   -57,   112,   -57,    92,   -12,
      91,    83,    90,    96,   109,   117,   -57,   -57,    88,    14,
     -57,    14,    14,    14,   109,   -57,   108,    85,    58,   130,
      19,   -57,   -57,    92,    14,   -57,   -57,    14,    14,    14,
      14,    14,    14,   -57,   -57,   -57,   -57,   -57,   -57,    14,
      14,    14,    19,    19,   109,   109,   113,    61,    97,   133,
     126,   -57,   -57,   -57,   124,   -57,   -57,   -57,   146,    14,
     148,   149,    63,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   121,    12,   140,   -57,   156,   154,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   109,    19,    19,
      14,   131,   -57,   158,   155,   -57,    61,   -57,   123,    14,
     137,   109,   162,   141,   -57
  };

  const unsigned char
  parser::yydefact_[] =
  {
       4,     0,     0,     4,     2,     6,     0,     1,     5,     0,
      67,    61,     0,     0,     0,     0,     0,     0,    67,     0,
      66,    63,     0,    62,    68,    67,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     6,    16,     0,     0,     0,     0,    64,     0,
       0,    44,     0,    45,     6,     7,    37,     8,     0,    34,
      51,    53,     0,     0,    32,    20,    27,    28,     0,     0,
      30,     0,     0,     0,    32,     3,     0,     0,    34,     0,
       0,    48,    49,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,    57,    58,    55,    56,    59,    60,     0,
       0,     0,     0,     0,    32,    32,     0,     0,     0,     0,
       0,    31,    21,    33,     0,     9,    10,    46,     0,     0,
       0,     0,     0,    38,    40,    41,    42,    39,    43,    36,
      35,    52,    54,     0,     0,     0,    19,     0,    17,    65,
      50,    47,    13,    14,    15,    24,    22,    32,     0,     0,
       0,     0,    25,     0,     0,    23,     0,    18,     0,     0,
       0,    32,     0,     0,    26
  };

  const short int
  parser::yypgoto_[] =
  {
     -57,   -57,   -57,   170,   174,    73,   -31,   -38,   -57,   -51,
     -35,   -45,   -57,   -56,   -30,    93,   -57,   -57,    -7
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    43,    56,    57,    66,    45,    46,
      58,    59,    60,    61,    62,    99,    12,    13,    14
  };

  const unsigned char
  parser::yytable_[] =
  {
      44,    67,    87,     1,    78,    63,    70,    65,    65,    68,
      72,    24,    71,   106,    77,    83,    32,    69,    27,    79,
       7,    86,    49,   113,    78,    21,    22,     5,    33,    11,
      84,   100,   101,    44,   109,    78,   110,   111,   112,    80,
     146,   147,   122,    44,     9,    77,   131,   132,    10,   120,
     118,    18,   121,   133,   134,   129,   130,    73,    52,    50,
      51,    19,   116,    52,   128,    54,    55,   144,    53,   136,
      54,    55,    15,    44,    44,    23,    65,    81,    42,    85,
      52,    25,    16,    17,   141,    82,    29,    54,    55,   115,
      93,    94,    95,    96,    26,    20,   151,    93,    94,    95,
      96,   100,   101,    28,    30,    31,   100,   101,    47,    48,
     162,    64,    42,    71,    74,   154,    44,    75,   152,   153,
      76,   103,   104,   105,   160,   158,    88,    34,   102,   107,
      44,    97,    98,   114,   117,    35,   108,   115,    97,    98,
      36,   138,    89,    37,    38,    39,   135,   139,    40,   137,
     140,    41,   142,   143,   145,    90,    91,    92,   148,   155,
      42,   123,   124,   125,   126,   127,   149,   150,   156,   161,
     157,   159,   163,     8,   164,     6,   119
  };

  const unsigned char
  parser::yycheck_[] =
  {
      31,    39,     3,    16,    49,    35,    41,    38,    39,    40,
       1,    18,    13,    64,    49,    50,    13,     3,    25,    49,
       0,    52,     3,    74,    69,    23,    24,    51,    25,    51,
       3,    43,    44,    64,    69,    80,    71,    72,    73,     3,
      28,    29,    87,    74,    10,    80,   102,   103,    17,    84,
      80,    10,    87,   104,   105,   100,   101,    48,    44,    40,
      41,     9,     4,    44,    99,    51,    52,     4,    49,   107,
      51,    52,     1,   104,   105,    51,   107,    41,    51,    52,
      44,    19,    11,    12,   119,    49,    20,    51,    52,     4,
       5,     6,     7,     8,    13,    23,   147,     5,     6,     7,
       8,    43,    44,    52,    15,    21,    43,    44,    52,    23,
     161,    32,    51,    13,    10,   150,   147,    22,   148,   149,
      15,    38,    32,    27,   159,   156,    14,    18,    37,    12,
     161,    46,    47,    25,     4,    26,    48,     4,    46,    47,
      31,    15,    30,    34,    35,    36,    33,    23,    39,    52,
       4,    42,     4,     4,    33,    43,    44,    45,    18,    28,
      51,    88,    89,    90,    91,    92,    10,    13,    10,    32,
      15,    48,    10,     3,    33,     1,    83
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    16,    54,    55,    56,    51,    57,     0,    56,    10,
      17,    51,    69,    70,    71,     1,    11,    12,    10,     9,
      23,    23,    24,    51,    71,    19,    13,    71,    52,    20,
      15,    21,    13,    25,    18,    26,    31,    34,    35,    36,
      39,    42,    51,    57,    59,    61,    62,    52,    23,     3,
      40,    41,    44,    49,    51,    52,    58,    59,    63,    64,
      65,    66,    67,    67,    32,    59,    60,    60,    59,     3,
      63,    13,     1,    48,    10,    22,    15,    63,    64,    67,
       3,    41,    49,    63,     3,    52,    59,     3,    14,    30,
      43,    44,    45,     5,     6,     7,     8,    46,    47,    68,
      43,    44,    37,    38,    32,    27,    62,    12,    48,    63,
      63,    63,    63,    62,    25,     4,     4,     4,    67,    68,
      63,    63,    64,    58,    58,    58,    58,    58,    63,    64,
      64,    66,    66,    62,    62,    33,    60,    52,    15,    23,
       4,    63,     4,     4,     4,    33,    28,    29,    18,    10,
      13,    62,    67,    67,    63,    28,    10,    15,    59,    48,
      63,    32,    62,    10,    33
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    56,    56,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    70,    71,    71
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,    12,     0,     2,     1,     1,     1,     3,
       3,     2,     2,     4,     4,     4,     1,     4,     7,     3,
       1,     3,     5,     7,     5,     6,    14,     2,     2,     1,
       2,     3,     0,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     4,     2,     2,
       4,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     8,    11,     3,     0,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "L_PAREN", "R_PAREN", "EQ",
  "NEQ", "LT", "GT", "END_PARAMS", "SEMICOLON", "COLON", "COMMA",
  "L_SQUARE_BRACKET", "MOD", "R_SQUARE_BRACKET", "FUNCTION",
  "BEGIN_PARAMS", "WHILE", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "DIV", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND",
  "OR", "FOR", "NOT", "TRUE", "RETURN", "ADD", "SUB", "MULT", "LTE", "GTE",
  "ASSIGN", "FALSE", "ERRTOK", "IDENT", "NUMBER", "$accept", "prog_start",
  "function", "functions", "ident", "term", "var", "vars", "statement",
  "statements", "expression", "mult_expression", "relation_exp",
  "relation_and_exp", "bool_exp", "comparison", "identifiers",
  "declaration", "declarations", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,    89,    89,    93,   108,   109,   113,   117,   120,   123,
     126,   129,   132,   135,   138,   141,   145,   148,   151,   155,
     158,   162,   165,   168,   171,   174,   177,   180,   183,   186,
     189,   192,   196,   198,   203,   206,   209,   213,   216,   219,
     222,   225,   228,   232,   235,   238,   241,   244,   247,   250,
     253,   258,   261,   265,   268,   273,   276,   279,   282,   285,
     288,   293,   296,   300,   303,   306,   309,   313,   315
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1451 "parser.tab.cc" // lalr1.cc:1167
#line 319 "mini_l.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
