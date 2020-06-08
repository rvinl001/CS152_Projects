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
      case 23: // INTEGER
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 58: // declaration
      case 59: // declarations
      case 60: // identifiers
      case 65: // statements
        value.move< dec_type > (that.value);
        break;

      case 52: // NUMBER
        value.move< int > (that.value);
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
      case 23: // INTEGER
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 58: // declaration
      case 59: // declarations
      case 60: // identifiers
      case 65: // statements
        value.copy< dec_type > (that.value);
        break;

      case 52: // NUMBER
        value.copy< int > (that.value);
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
      case 23: // INTEGER
      case 54: // prog_start
      case 55: // function
      case 56: // functions
      case 57: // ident
      case 58: // declaration
      case 59: // declarations
      case 60: // identifiers
      case 65: // statements
        yylhs.value.build< dec_type > ();
        break;

      case 52: // NUMBER
        yylhs.value.build< int > ();
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
#line 92 "mini_l.yy" // lalr1.cc:859
    {cout << yystack_[0].value.as< dec_type > ().code <<  "\n";}
#line 599 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 96 "mini_l.yy" // lalr1.cc:859
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
#line 615 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 110 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 621 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 112 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< dec_type > ().code + "\n" + yystack_[0].value.as< dec_type > ().code;}
#line 627 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 116 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 633 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 120 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > () = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
		 for (int i = 0; i < yystack_[2].value.as< dec_type > ().ids.size(); ++i)
		 {
		 	yylhs.value.as< dec_type > ().code += ". " + yystack_[2].value.as< dec_type > ().ids[i] + "\n"; /* prints out ". id" then newline  */
		 }
		}
#line 644 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 128 "mini_l.yy" // lalr1.cc:859
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 650 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 131 "mini_l.yy" // lalr1.cc:859
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 656 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 137 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 662 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 140 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 668 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 144 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 674 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 147 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< string > ().code;}
#line 680 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 152 "mini_l.yy" // lalr1.cc:859
    {printf("something");}
#line 686 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 155 "mini_l.yy" // lalr1.cc:859
    {printf("term -> var\n");}
#line 692 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 158 "mini_l.yy" // lalr1.cc:859
    {cout << "hi";}
#line 698 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 161 "mini_l.yy" // lalr1.cc:859
    {printf("term -> L_PAREN mult_expression R_PAREN\n");}
#line 704 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 164 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB NUMBER \n");}
#line 710 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 167 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB var\n");}
#line 716 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 170 "mini_l.yy" // lalr1.cc:859
    {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 722 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 173 "mini_l.yy" // lalr1.cc:859
    {printf("term -> IDENT L_PAREN expression R_PAREN\n");}
#line 728 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 176 "mini_l.yy" // lalr1.cc:859
    {printf("term -> IDENT L_PAREN mult_expression R_PAREN\n");}
#line 734 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 180 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident\n");}
#line 740 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 183 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 746 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 186 "mini_l.yy" // lalr1.cc:859
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 752 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 190 "mini_l.yy" // lalr1.cc:859
    {printf("vars -> var COMMA vars\n");}
#line 758 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 193 "mini_l.yy" // lalr1.cc:859
    {printf("vars -> var\n");}
#line 764 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 197 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> var ASSIGN expression\n");}
#line 770 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 200 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
#line 776 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 203 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
#line 782 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 206 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
#line 788 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 209 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
#line 794 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 212 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN exp BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 800 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 215 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> READ vars\n");}
#line 806 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 218 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> WRITE vars\n");}
#line 812 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 221 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> CONTINUE\n");}
#line 818 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 224 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> RETURN expression\n");}
#line 824 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 230 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 830 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 233 "mini_l.yy" // lalr1.cc:859
    {printf("statements -> statement SEMICOLON statements\n");}
#line 836 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 238 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression\n");}
#line 842 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 241 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
#line 848 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 244 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
#line 854 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 248 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term\n");}
#line 860 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 251 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MOD term\n");}
#line 866 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 254 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MULT term\n");}
#line 872 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 257 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term DIV term\n");}
#line 878 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 260 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term ADD term\n");}
#line 884 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 263 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term SUB term\n");}
#line 890 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 267 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> expression comp expression\n");}
#line 896 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 270 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> TRUE\n");}
#line 902 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 273 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> FALSE\n");}
#line 908 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 276 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");}
#line 914 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 279 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT expression comp expression\n");}
#line 920 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 282 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT TRUE\n");}
#line 926 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 285 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT FALSE\n");}
#line 932 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 288 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN\n");}
#line 938 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 293 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp\n");}
#line 944 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 296 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp AND relation_exp\n");}
#line 950 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 300 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp\n");}
#line 956 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 303 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
#line 962 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 308 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> LT\n");}
#line 968 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 311 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> GT\n");}
#line 974 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 314 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> EQ\n");}
#line 980 "parser.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 317 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> NEQ\n");}
#line 986 "parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 320 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> LTE\n");}
#line 992 "parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 323 "mini_l.yy" // lalr1.cc:859
    {printf("comp -> GTE\n");}
#line 998 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1002 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -66;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
      -7,   -21,    49,    -7,   -66,   -66,    44,   -66,   -66,    43,
      21,   -66,    79,    78,    94,    21,    83,    73,    77,    53,
     -66,    21,   -66,   -66,    96,   -66,   102,    72,   104,   112,
     103,   -12,    12,    12,    98,   -66,    84,    84,    84,    14,
     115,   -66,     9,   126,   118,    91,   121,    12,    26,   -66,
      34,   -66,    15,   -66,    67,   -66,    33,    64,   109,   110,
     117,   114,   103,   135,   -66,   -66,   105,    14,   -66,    14,
      14,    14,   103,   -66,   136,   -66,    86,    40,   146,    12,
     -66,   -66,    33,    14,   -66,   -66,    14,    14,    14,    14,
      14,    14,   -66,   -66,   -66,   -66,   -66,   -66,    14,    14,
      14,    12,    12,   103,   103,   119,    84,   106,   151,   141,
     -66,   -66,   -66,   132,   -66,   -66,   -66,   155,    14,   156,
     157,    55,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   129,    89,   145,   -66,   154,   152,   143,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   103,    12,    12,    14,
     -66,   139,   -66,   158,   159,   -66,    84,   -66,   122,    14,
     137,   103,   161,   140,   -66
  };

  const unsigned char
  parser::yydefact_[] =
  {
       4,     0,     0,     4,     2,     6,     0,     1,     5,     0,
      11,    13,     0,     0,     0,    11,     0,     0,     0,     0,
      12,    11,    10,     7,     0,    14,     0,     0,     0,     0,
      40,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       6,    24,     0,     0,     0,     0,     0,     0,     0,    52,
       0,    53,     6,    15,    45,    16,     0,    42,    59,    61,
       0,     0,    40,    28,    35,    36,     0,     0,    38,     0,
       0,     0,    40,     3,     0,     8,     0,    42,     0,     0,
      56,    57,     0,     0,    19,    20,     0,     0,     0,     0,
       0,     0,    65,    66,    63,    64,    67,    68,     0,     0,
       0,     0,     0,    40,    40,     0,     0,     0,     0,     0,
      39,    29,    41,     0,    17,    18,    54,     0,     0,     0,
       0,     0,    46,    48,    49,    50,    47,    51,    44,    43,
      60,    62,     0,     0,     0,    27,     0,    25,     0,    58,
      55,    21,    22,    23,    32,    30,    40,     0,     0,     0,
       9,     0,    33,     0,     0,    31,     0,    26,     0,     0,
       0,    40,     0,     0,    34
  };

  const short int
  parser::yypgoto_[] =
  {
     -66,   -66,   -66,   169,   174,   -66,     6,   -66,   -65,   -30,
     -35,   -66,   -58,   -36,   -31,   -66,    13,   -28,    95
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    41,    12,    13,    14,    54,    55,
      64,    43,    44,    56,    57,    58,    59,    60,    98
  };

  const unsigned char
  parser::yytable_[] =
  {
      42,    45,    65,    68,   105,    61,    63,    63,    66,     1,
      70,    76,    82,    46,   112,    47,    77,    67,    86,    78,
      85,    20,   122,   123,   124,   125,   126,    26,    69,    79,
       5,   108,    42,   109,   110,   111,    77,    83,    92,    93,
      94,    95,    42,    76,   115,   132,   133,   119,    77,     7,
     120,   117,    48,    49,     9,   121,    50,    71,    50,   143,
      10,    51,   127,    52,    53,    52,    53,    80,   128,   129,
      50,   135,    11,    42,    42,    81,    63,    52,    53,    96,
      97,    87,   140,    99,   100,    40,    84,    16,   151,    15,
     114,    92,    93,    94,    95,    17,    22,    88,    99,   100,
      23,    24,    21,   162,    25,    18,    19,    99,   100,    27,
      89,    90,    91,   154,   130,   131,    42,   145,   146,   152,
     153,    32,    28,   160,    29,    30,   158,    31,    69,    33,
      62,    42,    96,    97,    34,    40,    72,    35,    36,    37,
      73,   104,    38,    74,    75,    39,   101,   106,   102,   103,
     116,   113,   134,   107,    40,   114,   137,   138,   136,   139,
     141,   142,   144,   147,   148,   149,   150,   155,   156,   161,
     159,   163,     8,   164,   157,     6,     0,   118
  };

  const short int
  parser::yycheck_[] =
  {
      30,    13,    37,    39,    62,    33,    36,    37,    38,    16,
       1,    47,    48,    25,    72,     3,    47,     3,     3,    47,
      50,    15,    87,    88,    89,    90,    91,    21,    13,     3,
      51,    67,    62,    69,    70,    71,    67,     3,     5,     6,
       7,     8,    72,    79,     4,   103,   104,    83,    79,     0,
      86,    79,    40,    41,    10,    86,    44,    48,    44,     4,
      17,    49,    98,    51,    52,    51,    52,    41,    99,   100,
      44,   106,    51,   103,   104,    49,   106,    51,    52,    46,
      47,    14,   118,    43,    44,    51,    52,     9,   146,    10,
       4,     5,     6,     7,     8,     1,    23,    30,    43,    44,
      23,    24,    19,   161,    51,    11,    12,    43,    44,    13,
      43,    44,    45,   149,   101,   102,   146,    28,    29,   147,
     148,    18,    20,   159,    52,    21,   156,    15,    13,    26,
      32,   161,    46,    47,    31,    51,    10,    34,    35,    36,
      22,    27,    39,    52,    23,    42,    37,    12,    38,    32,
       4,    15,    33,    48,    51,     4,    15,    25,    52,     4,
       4,     4,    33,    18,    10,    13,    23,    28,    10,    32,
      48,    10,     3,    33,    15,     1,    -1,    82
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    16,    54,    55,    56,    51,    57,     0,    56,    10,
      17,    51,    58,    59,    60,    10,     9,     1,    11,    12,
      59,    19,    23,    23,    24,    51,    59,    13,    20,    52,
      21,    15,    18,    26,    31,    34,    35,    36,    39,    42,
      51,    57,    62,    64,    65,    13,    25,     3,    40,    41,
      44,    49,    51,    52,    61,    62,    66,    67,    68,    69,
      70,    70,    32,    62,    63,    63,    62,     3,    66,    13,
       1,    48,    10,    22,    52,    23,    66,    67,    70,     3,
      41,    49,    66,     3,    52,    62,     3,    14,    30,    43,
      44,    45,     5,     6,     7,     8,    46,    47,    71,    43,
      44,    37,    38,    32,    27,    65,    12,    48,    66,    66,
      66,    66,    65,    15,     4,     4,     4,    70,    71,    66,
      66,    67,    61,    61,    61,    61,    61,    66,    67,    67,
      69,    69,    65,    65,    33,    63,    52,    15,    25,     4,
      66,     4,     4,     4,    33,    28,    29,    18,    10,    13,
      23,    65,    70,    70,    66,    28,    10,    15,    62,    48,
      66,    32,    65,    10,    33
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    56,    56,    57,    58,    58,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,    12,     0,     2,     1,     3,     8,    11,
       3,     0,     3,     1,     3,     1,     1,     3,     3,     2,
       2,     4,     4,     4,     1,     4,     7,     3,     1,     3,
       5,     7,     5,     6,    14,     2,     2,     1,     2,     3,
       0,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     4,     2,     2,     4,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1
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
  "function", "functions", "ident", "declaration", "declarations",
  "identifiers", "term", "var", "vars", "statement", "statements",
  "expression", "mult_expression", "relation_exp", "relation_and_exp",
  "bool_exp", "comparison", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,    91,    91,    95,   110,   111,   115,   119,   127,   130,
     133,   137,   139,   143,   146,   151,   154,   157,   160,   163,
     166,   169,   172,   175,   179,   182,   185,   189,   192,   196,
     199,   202,   205,   208,   211,   214,   217,   220,   223,   226,
     230,   232,   237,   240,   243,   247,   250,   253,   256,   259,
     262,   266,   269,   272,   275,   278,   281,   284,   287,   292,
     295,   299,   302,   307,   310,   313,   316,   319,   322
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
#line 1477 "parser.tab.cc" // lalr1.cc:1167
#line 328 "mini_l.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
