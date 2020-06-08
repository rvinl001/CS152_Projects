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
      case 58: // integer
      case 59: // number
      case 60: // declaration
      case 61: // declarations
      case 62: // identifiers
      case 63: // term
      case 64: // var
      case 65: // vars
      case 66: // statement
      case 67: // statements
      case 68: // expression
      case 69: // mult_expression
      case 70: // relation_exp
      case 71: // relation_and_exp
      case 72: // bool_exp
      case 73: // comparison
        value.move< dec_type > (that.value);
        break;

      case 52: // NUMBER
        value.move< int > (that.value);
        break;

      case 3: // L_PAREN
      case 4: // R_PAREN
      case 5: // EQ
      case 6: // NEQ
      case 7: // LT
      case 8: // GT
      case 13: // L_SQUARE_BRACKET
      case 14: // MOD
      case 15: // R_SQUARE_BRACKET
      case 23: // INTEGER
      case 30: // DIV
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
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
      case 58: // integer
      case 59: // number
      case 60: // declaration
      case 61: // declarations
      case 62: // identifiers
      case 63: // term
      case 64: // var
      case 65: // vars
      case 66: // statement
      case 67: // statements
      case 68: // expression
      case 69: // mult_expression
      case 70: // relation_exp
      case 71: // relation_and_exp
      case 72: // bool_exp
      case 73: // comparison
        value.copy< dec_type > (that.value);
        break;

      case 52: // NUMBER
        value.copy< int > (that.value);
        break;

      case 3: // L_PAREN
      case 4: // R_PAREN
      case 5: // EQ
      case 6: // NEQ
      case 7: // LT
      case 8: // GT
      case 13: // L_SQUARE_BRACKET
      case 14: // MOD
      case 15: // R_SQUARE_BRACKET
      case 23: // INTEGER
      case 30: // DIV
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
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
      case 58: // integer
      case 59: // number
      case 60: // declaration
      case 61: // declarations
      case 62: // identifiers
      case 63: // term
      case 64: // var
      case 65: // vars
      case 66: // statement
      case 67: // statements
      case 68: // expression
      case 69: // mult_expression
      case 70: // relation_exp
      case 71: // relation_and_exp
      case 72: // bool_exp
      case 73: // comparison
        yylhs.value.build< dec_type > ();
        break;

      case 52: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 3: // L_PAREN
      case 4: // R_PAREN
      case 5: // EQ
      case 6: // NEQ
      case 7: // LT
      case 8: // GT
      case 13: // L_SQUARE_BRACKET
      case 14: // MOD
      case 15: // R_SQUARE_BRACKET
      case 23: // INTEGER
      case 30: // DIV
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
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
#line 96 "mini_l.yy" // lalr1.cc:859
    {cout << yystack_[0].value.as< dec_type > ().code << "\n";}
#line 680 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 100 "mini_l.yy" // lalr1.cc:859
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
#line 696 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 114 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 702 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 116 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< dec_type > ().code + "\n" + yystack_[0].value.as< dec_type > ().code;}
#line 708 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 120 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 714 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 124 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 720 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 128 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< int > ();}
#line 726 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 132 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
		 for (int i = 0; i < yystack_[2].value.as< dec_type > ().ids.size(); ++i)
		 {
		 	yylhs.value.as< dec_type > ().code += ". " + yystack_[2].value.as< dec_type > ().ids[i] + "\n"; /* prints out ". id" then newline  */
		 }
		}
#line 737 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 140 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[7].value.as< dec_type > ().code + yystack_[3].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
                 for (int i = 0; i < yystack_[7].value.as< dec_type > ().ids.size(); ++i)
                 {
                        yylhs.value.as< dec_type > ().code += ". []" + yystack_[7].value.as< dec_type > ().ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }

		}
#line 749 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 149 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[10].value.as< dec_type > ().code + yystack_[6].value.as< dec_type > ().code + yystack_[3].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
                 for (int i = 0; i < yystack_[10].value.as< dec_type > ().ids.size(); ++i)
                 {
                        yylhs.value.as< dec_type > ().code += ". [][]" + yystack_[10].value.as< dec_type > ().ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }
		}
#line 760 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 158 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 766 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 161 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 772 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 165 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 778 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 168 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< string > ();}
#line 784 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 173 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 790 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 176 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 796 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 179 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 802 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 182 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 808 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 185 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 814 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 188 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 820 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 191 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 826 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 194 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 832 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 197 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code += yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 838 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 201 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 844 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 204 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 850 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 207 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[6].value.as< string > () + yystack_[5].value.as< string > () + yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 856 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 211 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 862 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 214 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 868 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 218 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
		}
#line 875 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 222 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< dec_type > ().code + yystack_[1].value.as< dec_type > ().code;
		 cout << "?:= " << yystack_[3].value.as< dec_type > ().code << "\n";	
		}
#line 883 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 227 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
#line 889 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 230 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
#line 895 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 233 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
#line 901 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 236 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN exp BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 907 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 239 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;
		 cout << ".< " << yystack_[0].value.as< dec_type > ().code << "\n";
		}
#line 915 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 244 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;
		 cout << ".> " << yystack_[0].value.as< dec_type > ().code << "\n";
		}
#line 923 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 249 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> CONTINUE\n");}
#line 929 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 252 "mini_l.yy" // lalr1.cc:859
    {printf("statement -> RETURN expression\n");}
#line 935 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 258 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 941 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 261 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 947 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 266 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 953 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 269 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
#line 959 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 272 "mini_l.yy" // lalr1.cc:859
    {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
#line 965 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 276 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 971 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 279 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MOD term\n");}
#line 977 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 282 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term MULT term\n");}
#line 983 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 285 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term DIV term\n");}
#line 989 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 288 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term ADD term\n");}
#line 995 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 291 "mini_l.yy" // lalr1.cc:859
    {printf("multiplicative_expression -> term SUB term\n");}
#line 1001 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 295 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> expression comp expression\n");}
#line 1007 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 298 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> TRUE\n");}
#line 1013 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 301 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> FALSE\n");}
#line 1019 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 304 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");}
#line 1025 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 307 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT expression comp expression\n");}
#line 1031 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 310 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT TRUE\n");}
#line 1037 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 313 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT FALSE\n");}
#line 1043 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 316 "mini_l.yy" // lalr1.cc:859
    {printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN\n");}
#line 1049 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 321 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp\n");}
#line 1055 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 324 "mini_l.yy" // lalr1.cc:859
    {printf("relation_and_exp -> relation_exp AND relation_exp\n");}
#line 1061 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 328 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp\n");}
#line 1067 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 331 "mini_l.yy" // lalr1.cc:859
    {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
#line 1073 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 336 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1079 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 339 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1085 "parser.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 342 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1091 "parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 345 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1097 "parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 348 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1103 "parser.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 351 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1109 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1113 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -59;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
      -6,   -33,    25,    -6,   -59,   -59,    18,   -59,   -59,    42,
       6,   -59,    62,    72,    78,     6,    92,    68,    36,   -59,
       6,   -59,   105,   -59,   -59,   101,    60,   106,   -59,   107,
      99,    -4,    12,    12,    96,   -59,    88,    88,    88,    14,
     116,   -59,   -24,   122,   120,    60,   121,    12,    26,   -59,
      34,   -59,    10,   -59,   110,   -59,    33,    58,   108,   109,
     111,   119,    99,   136,   -59,   -59,   103,    14,   -59,    14,
      14,    14,    99,   -59,   134,   -59,    90,    40,   148,    12,
     -59,   -59,    33,    14,   -59,   -59,    14,    14,    14,    14,
      14,    14,   -59,   -59,   -59,   -59,   -59,   -59,    14,    14,
      14,    12,    12,    99,    99,   123,    88,   112,   153,   143,
     -59,   -59,   -59,   135,   -59,   -59,   -59,   155,    14,   157,
     158,    56,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   130,    81,   147,   -59,   156,   154,   121,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,    99,    12,    12,    14,
     -59,   140,   -59,   159,   160,   -59,    88,   -59,   124,    14,
     138,    99,   161,   141,   -59
  };

  const unsigned char
  parser::yydefact_[] =
  {
       4,     0,     0,     4,     2,     6,     0,     1,     5,     0,
      12,    14,     0,     0,     0,    12,     0,     0,     0,    13,
      12,     7,     0,     9,    15,     0,     0,     0,     8,     0,
      41,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       6,    25,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    54,     6,    16,    46,    17,     0,    43,    60,    62,
       0,     0,    41,    29,    36,    37,     0,     0,    39,     0,
       0,     0,    41,     3,     0,    10,     0,    43,     0,     0,
      57,    58,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,    66,    67,    64,    65,    68,    69,     0,     0,
       0,     0,     0,    41,    41,     0,     0,     0,     0,     0,
      30,    40,    42,     0,    18,    19,    55,     0,     0,     0,
       0,     0,    47,    49,    50,    51,    48,    52,    45,    44,
      61,    63,     0,     0,     0,    28,     0,    26,     0,    59,
      56,    22,    23,    24,    33,    31,    41,     0,     0,     0,
      11,     0,    34,     0,     0,    32,     0,    27,     0,     0,
       0,    41,     0,     0,    35
  };

  const short int
  parser::yypgoto_[] =
  {
     -59,   -59,   -59,   170,   175,   -45,     4,   -59,     7,   -59,
      17,   -30,   -35,   -59,   -58,   -36,   -31,   -59,    13,   -28,
      95
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    41,    23,    53,    12,    13,    14,
      54,    55,    64,    43,    44,    56,    57,    58,    59,    60,
      98
  };

  const unsigned char
  parser::yytable_[] =
  {
      42,    75,    65,    68,   105,    61,    63,    63,    66,    45,
       1,    76,    82,    86,   112,    47,    77,    67,     5,    78,
      85,    46,    19,    69,    70,     7,    71,    25,     9,    79,
      29,   108,    42,   109,   110,   111,    77,    83,    92,    93,
      94,    95,    42,    76,   115,   132,   133,   119,    77,    74,
     120,   117,    48,    49,    84,   121,    50,    11,    50,    10,
     143,    51,   127,    52,    28,    52,    28,    80,   128,   129,
      50,   135,    15,    42,    42,    81,    63,    52,    28,    96,
      97,    16,   140,    99,   100,    40,    28,    24,   151,    17,
      18,    21,    22,   150,   114,    92,    93,    94,    95,    99,
     100,    99,   100,   162,   122,   123,   124,   125,   126,   145,
     146,    20,    28,   154,   130,   131,    42,    32,    26,   152,
     153,    27,    31,   160,    87,    33,   158,    30,    62,    69,
      34,    42,    72,    35,    36,    37,    96,    97,    38,    40,
      88,    39,    73,   103,    21,   101,   104,   102,   106,   113,
      40,   107,   116,    89,    90,    91,   134,   114,   137,   139,
     138,   141,   142,   144,   136,   147,   148,   149,   155,   156,
     161,   163,   159,     8,   164,   157,     6,   118
  };

  const unsigned char
  parser::yycheck_[] =
  {
      30,    46,    37,    39,    62,    33,    36,    37,    38,    13,
      16,    47,    48,     3,    72,     3,    47,     3,    51,    47,
      50,    25,    15,    13,    48,     0,    50,    20,    10,     3,
      26,    67,    62,    69,    70,    71,    67,     3,     5,     6,
       7,     8,    72,    79,     4,   103,   104,    83,    79,    45,
      86,    79,    40,    41,    50,    86,    44,    51,    44,    17,
       4,    49,    98,    51,    52,    51,    52,    41,    99,   100,
      44,   106,    10,   103,   104,    49,   106,    51,    52,    46,
      47,     9,   118,    43,    44,    51,    52,    51,   146,    11,
      12,    23,    24,   138,     4,     5,     6,     7,     8,    43,
      44,    43,    44,   161,    87,    88,    89,    90,    91,    28,
      29,    19,    52,   149,   101,   102,   146,    18,    13,   147,
     148,    20,    15,   159,    14,    26,   156,    21,    32,    13,
      31,   161,    10,    34,    35,    36,    46,    47,    39,    51,
      30,    42,    22,    32,    23,    37,    27,    38,    12,    15,
      51,    48,     4,    43,    44,    45,    33,     4,    15,     4,
      25,     4,     4,    33,    52,    18,    10,    13,    28,    10,
      32,    10,    48,     3,    33,    15,     1,    82
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    16,    54,    55,    56,    51,    57,     0,    56,    10,
      17,    51,    60,    61,    62,    10,     9,    11,    12,    61,
      19,    23,    24,    58,    51,    61,    13,    20,    52,    59,
      21,    15,    18,    26,    31,    34,    35,    36,    39,    42,
      51,    57,    64,    66,    67,    13,    25,     3,    40,    41,
      44,    49,    51,    59,    63,    64,    68,    69,    70,    71,
      72,    72,    32,    64,    65,    65,    64,     3,    68,    13,
      48,    50,    10,    22,    59,    58,    68,    69,    72,     3,
      41,    49,    68,     3,    59,    64,     3,    14,    30,    43,
      44,    45,     5,     6,     7,     8,    46,    47,    73,    43,
      44,    37,    38,    32,    27,    67,    12,    48,    68,    68,
      68,    68,    67,    15,     4,     4,     4,    72,    73,    68,
      68,    69,    63,    63,    63,    63,    63,    68,    69,    69,
      71,    71,    67,    67,    33,    65,    52,    15,    25,     4,
      68,     4,     4,     4,    33,    28,    29,    18,    10,    13,
      58,    67,    72,    72,    68,    28,    10,    15,    64,    48,
      68,    32,    67,    10,    33
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    56,    56,    57,    58,    59,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,    12,     0,     2,     1,     1,     1,     3,
       8,    11,     0,     3,     1,     3,     1,     1,     3,     3,
       2,     2,     4,     4,     4,     1,     4,     7,     3,     1,
       3,     5,     7,     5,     6,    14,     2,     2,     1,     2,
       3,     0,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     4,     2,     2,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1
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
  "function", "functions", "ident", "integer", "number", "declaration",
  "declarations", "identifiers", "term", "var", "vars", "statement",
  "statements", "expression", "mult_expression", "relation_exp",
  "relation_and_exp", "bool_exp", "comparison", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,    95,    95,    99,   114,   115,   119,   123,   127,   131,
     139,   148,   158,   160,   164,   167,   172,   175,   178,   181,
     184,   187,   190,   193,   196,   200,   203,   206,   210,   213,
     217,   221,   226,   229,   232,   235,   238,   243,   248,   251,
     254,   258,   260,   265,   268,   271,   275,   278,   281,   284,
     287,   290,   294,   297,   300,   303,   306,   309,   312,   315,
     320,   323,   327,   330,   335,   338,   341,   344,   347,   350
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
#line 1590 "parser.tab.cc" // lalr1.cc:1167
#line 356 "mini_l.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
