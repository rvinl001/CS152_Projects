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
#line 40 "mini_l.yy" // lalr1.cc:413

#include "parser.tab.hh"
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
int num_temps = 0;
string make_temp() {
	std::string ret = "__temp__" + std::to_string(num_temps);
	num_temps++;
	return ret;
}

/* to differentiate idents  */
std::map<std::string, IdType> symbol_table;	


	/* end of your code */

#line 84 "parser.tab.cc" // lalr1.cc:413


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
#line 170 "parser.tab.cc" // lalr1.cc:479

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
      case 34: // CONTINUE
      case 37: // AND
      case 38: // OR
      case 40: // NOT
      case 41: // TRUE
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
      case 49: // FALSE
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
      case 34: // CONTINUE
      case 37: // AND
      case 38: // OR
      case 40: // NOT
      case 41: // TRUE
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
      case 49: // FALSE
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
      case 34: // CONTINUE
      case 37: // AND
      case 38: // OR
      case 40: // NOT
      case 41: // TRUE
      case 43: // ADD
      case 44: // SUB
      case 45: // MULT
      case 46: // LTE
      case 47: // GTE
      case 49: // FALSE
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
#line 105 "mini_l.yy" // lalr1.cc:859
    {cout << yystack_[0].value.as< dec_type > ().code << "\n";}
#line 702 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 109 "mini_l.yy" // lalr1.cc:859
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
#line 718 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 123 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 724 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 125 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< dec_type > ().code + "\n" + yystack_[0].value.as< dec_type > ().code;}
#line 730 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 129 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 736 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 133 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 742 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 137 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< int > ();}
#line 748 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 141 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + "\n";
		}
#line 755 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 145 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[7].value.as< dec_type > ().code + yystack_[3].value.as< dec_type > ().code;
                 for (int i = 0; i < yystack_[7].value.as< dec_type > ().ids.size(); ++i)
                 {
                        yylhs.value.as< dec_type > ().code += ". []" + yystack_[7].value.as< dec_type > ().ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }

		}
#line 767 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 154 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[10].value.as< dec_type > ().code + yystack_[6].value.as< dec_type > ().code + yystack_[3].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;
                 for (int i = 0; i < yystack_[10].value.as< dec_type > ().ids.size(); ++i)
                 {
                        yylhs.value.as< dec_type > ().code += ". [][]" + yystack_[10].value.as< dec_type > ().ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }
		}
#line 778 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 163 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 784 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 166 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 790 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 170 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = ". " + yystack_[0].value.as< dec_type > ().code;
		}
#line 797 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 174 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 803 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 179 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 809 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 182 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 815 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 185 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 821 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 188 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 827 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 191 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 833 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 194 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 839 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 197 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 845 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 200 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< dec_type > ().code + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 851 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 203 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code += yystack_[3].value.as< dec_type > ().code + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 857 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 207 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 863 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 210 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< dec_type > ().code + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 869 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 213 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[6].value.as< dec_type > ().code + yystack_[5].value.as< string > () + yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 875 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 217 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 881 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 220 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 887 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 224 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "= " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code + "\n";
		}
#line 894 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 228 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "?:= " + yystack_[3].value.as< dec_type > ().code + ", " + yystack_[1].value.as< dec_type > ().code;	
		}
#line 901 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 232 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "?:= " + yystack_[5].value.as< dec_type > ().code + ", " + yystack_[3].value.as< dec_type > ().code + ", " + yystack_[1].value.as< dec_type > ().code;}
#line 907 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 235 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "?:= " + yystack_[3].value.as< dec_type > ().code + ", " + yystack_[1].value.as< dec_type > ().code;}
#line 913 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 238 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "?:= " + yystack_[0].value.as< dec_type > ().code + ", " + yystack_[3].value.as< dec_type > ().code;}
#line 919 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 241 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "?:= " + yystack_[8].value.as< dec_type > ().code + ", " + yystack_[2].value.as< dec_type > ().code;}
#line 925 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 244 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = ".< " +  yystack_[0].value.as< dec_type > ().code + "\n";
		}
#line 932 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 248 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = ".> " + yystack_[0].value.as< dec_type > ().code;
		}
#line 939 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 252 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "goto " + yystack_[0].value.as< string > () + "\n";}
#line 945 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 255 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 951 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 261 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "";}
#line 957 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 264 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + yystack_[0].value.as< dec_type > ().code;}
#line 963 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 269 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 969 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 272 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "- " + yystack_[2].value.as< dec_type > ().code + ", "  + yystack_[0].value.as< dec_type > ().code;}
#line 975 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 275 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "+ " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;}
#line 981 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 279 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 987 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 282 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "% " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;}
#line 993 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 285 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "* " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code ;}
#line 999 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 288 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "/ " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;}
#line 1005 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 291 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = "+ " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;}
#line 1011 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 296 "mini_l.yy" // lalr1.cc:859
    {if (yystack_[1].value.as< dec_type > ().code == "<") {
			yylhs.value.as< dec_type > ().code = "< " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
		 }
		 if (yystack_[1].value.as< dec_type > ().code == ">") {
                        yylhs.value.as< dec_type > ().code = "> " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
                 }
		 if (yystack_[1].value.as< dec_type > ().code == "<=") {
                        yylhs.value.as< dec_type > ().code = "<= " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
                 }
		 if (yystack_[1].value.as< dec_type > ().code == ">=") {
                        yylhs.value.as< dec_type > ().code = ">= " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
                 }
                 if (yystack_[1].value.as< dec_type > ().code == "!=") {
                        yylhs.value.as< dec_type > ().code = "!= " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
                 }
                 if (yystack_[1].value.as< dec_type > ().code == "==") {
                        yylhs.value.as< dec_type > ().code = "== " + yystack_[2].value.as< dec_type > ().code + ", " + yystack_[0].value.as< dec_type > ().code;
                 }
		}
#line 1035 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 317 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1041 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 320 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1047 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 323 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< dec_type > ().code;}
#line 1053 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 326 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > ();}
#line 1059 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 329 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > () + yystack_[0].value.as< string > ();}
#line 1065 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 332 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > () + yystack_[0].value.as< string > ();}
#line 1071 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 335 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[3].value.as< string > () + yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();}
#line 1077 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 340 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 1083 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 343 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 1089 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 347 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< dec_type > ().code;}
#line 1095 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 350 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[1].value.as< string > ();}
#line 1101 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 355 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1107 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 358 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1113 "parser.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 361 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1119 "parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 364 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1125 "parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 367 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1131 "parser.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 370 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< dec_type > ().code = yystack_[0].value.as< string > ();}
#line 1137 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1141 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -61;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
      -9,   -41,    16,    -9,   -61,   -61,    14,   -61,   -61,    26,
     -41,   -61,    42,    46,    20,   -41,    54,    15,   -41,   -61,
     -41,   -61,    63,   -61,   -61,    71,    59,    98,   -61,   107,
     127,    -7,    55,    55,   101,   -61,   -41,   -41,   -41,    10,
     122,    40,   129,   118,    59,   121,    55,    61,   -61,    23,
     -61,    27,   -61,   104,   -61,   109,    24,   111,   103,   114,
     123,   127,   139,   -61,   -61,   112,    10,   -61,    10,    10,
      10,   127,   -61,   149,   -61,    74,     1,   161,    55,   -61,
     -61,   109,    10,   -61,   -61,    10,    10,    10,    10,    10,
     -61,   -61,   -61,   -61,   -61,   -61,    10,    10,    10,    55,
      55,   127,   127,   134,   -41,   116,   166,   156,   -61,   -61,
     -61,   147,   -61,   -61,   -61,   169,    10,   170,   171,    65,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   143,
      97,   159,   -61,   172,   167,   121,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   127,    55,    55,    10,   -61,   151,   -61,
     173,   174,   -61,   -41,   -61,   133,    10,   152,   127,   175,
     153,   -61
  };

  const unsigned char
  parser::yydefact_[] =
  {
       4,     0,     0,     4,     2,     6,     0,     1,     5,     0,
      12,    14,     0,     0,     0,    12,     0,     0,     0,    13,
      12,     7,     0,     9,    15,     0,     0,     0,     8,     0,
      41,     0,    51,    51,     0,    38,     0,     0,     0,    51,
      25,     0,     0,     0,     0,     0,    51,    51,    53,     0,
      54,    25,    16,    46,    17,     0,    43,    60,    62,     0,
       0,    41,    29,    36,    37,     0,    51,    39,    51,    51,
      51,    41,     3,     0,    10,     0,    43,     0,    51,    57,
      58,     0,    51,    20,    21,    51,     0,     0,     0,     0,
      66,    67,    64,    65,    68,    69,    51,    51,    51,    51,
      51,    41,    41,     0,     0,     0,     0,     0,    30,    40,
      42,     0,    18,    19,    55,     0,    51,     0,     0,     0,
      47,    49,    50,    48,    52,    45,    44,    61,    63,     0,
       0,     0,    28,     0,    26,     0,    59,    56,    22,    23,
      24,    33,    31,    41,    51,    51,    51,    11,     0,    34,
       0,     0,    32,     0,    27,     0,    51,     0,    41,     0,
       0,    35
  };

  const short int
  parser::yypgoto_[] =
  {
     -61,   -61,   -61,   184,    -1,   -43,   110,   -61,   -12,   -61,
      43,   -15,   -33,   -61,   -60,   -19,   -13,   -61,    -6,   -21,
     113
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    51,    23,    52,    12,    13,    14,
      53,    54,    63,    42,    43,    55,    56,    57,    58,    59,
      96
  };

  const unsigned char
  parser::yytable_[] =
  {
       6,   103,    74,    19,    64,   113,    44,     1,    25,    11,
       5,   110,    60,    66,    11,    41,     7,    24,    45,    11,
      67,    62,    62,    65,     9,    77,    82,    75,    81,    40,
      85,    17,    18,    76,    84,    40,    40,    40,    21,    22,
      68,   129,   130,    10,    97,    98,    41,   106,    40,   107,
     108,   109,    15,    76,    49,    16,    41,   115,    46,    75,
      40,     5,    28,   117,    78,    76,   118,    97,    98,   140,
      40,   132,   119,    20,     5,    28,    26,   124,   112,    90,
      91,    92,    93,   148,   125,   126,    41,    41,    69,    62,
      70,    27,   147,   127,   128,    47,    48,   137,   159,    49,
      40,    40,    79,    40,    50,    49,     5,    28,    97,    98,
      80,    28,     5,    28,    90,    91,    92,    93,    86,    30,
      94,    95,    31,   149,   150,   142,   143,   151,    41,   120,
     121,   122,   123,    61,    87,    68,    29,   157,   155,    71,
      72,   100,    40,    41,    21,    32,   101,    88,    99,    89,
     102,   104,    40,    33,    73,    94,    95,    40,    34,    83,
     105,    35,    36,    37,   111,   114,    38,   131,   133,    39,
     112,   134,   135,   136,   138,   139,   141,   144,     5,   152,
     146,   156,   145,   153,   158,   160,   161,     8,     0,   154,
       0,     0,     0,     0,   116
  };

  const short int
  parser::yycheck_[] =
  {
       1,    61,    45,    15,    37,     4,    13,    16,    20,    10,
      51,    71,    33,     3,    15,    30,     0,    18,    25,    20,
      39,    36,    37,    38,    10,    46,     3,    46,    47,    30,
       3,    11,    12,    46,    49,    36,    37,    38,    23,    24,
      13,   101,   102,    17,    43,    44,    61,    66,    49,    68,
      69,    70,    10,    66,    44,     9,    71,    78,     3,    78,
      61,    51,    52,    82,     3,    78,    85,    43,    44,     4,
      71,   104,    85,    19,    51,    52,    13,    96,     4,     5,
       6,     7,     8,   143,    97,    98,   101,   102,    48,   104,
      50,    20,   135,    99,   100,    40,    41,   116,   158,    44,
     101,   102,    41,   104,    49,    44,    51,    52,    43,    44,
      49,    52,    51,    52,     5,     6,     7,     8,    14,    21,
      46,    47,    15,   144,   145,    28,    29,   146,   143,    86,
      87,    88,    89,    32,    30,    13,    26,   156,   153,    10,
      22,    38,   143,   158,    23,    18,    32,    43,    37,    45,
      27,    12,   153,    26,    44,    46,    47,   158,    31,    49,
      48,    34,    35,    36,    15,     4,    39,    33,    52,    42,
       4,    15,    25,     4,     4,     4,    33,    18,    51,    28,
      13,    48,    10,    10,    32,    10,    33,     3,    -1,    15,
      -1,    -1,    -1,    -1,    81
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    16,    54,    55,    56,    51,    57,     0,    56,    10,
      17,    57,    60,    61,    62,    10,     9,    11,    12,    61,
      19,    23,    24,    58,    57,    61,    13,    20,    52,    59,
      21,    15,    18,    26,    31,    34,    35,    36,    39,    42,
      57,    64,    66,    67,    13,    25,     3,    40,    41,    44,
      49,    57,    59,    63,    64,    68,    69,    70,    71,    72,
      72,    32,    64,    65,    65,    64,     3,    68,    13,    48,
      50,    10,    22,    59,    58,    68,    69,    72,     3,    41,
      49,    68,     3,    59,    64,     3,    14,    30,    43,    45,
       5,     6,     7,     8,    46,    47,    73,    43,    44,    37,
      38,    32,    27,    67,    12,    48,    68,    68,    68,    68,
      67,    15,     4,     4,     4,    72,    73,    68,    68,    69,
      63,    63,    63,    63,    68,    69,    69,    71,    71,    67,
      67,    33,    65,    52,    15,    25,     4,    68,     4,     4,
       4,    33,    28,    29,    18,    10,    13,    58,    67,    72,
      72,    68,    28,    10,    15,    64,    48,    68,    32,    67,
      10,    33
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
       3,     0,     3,     1,     1,     3,     4,     2,     2,     4,
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
       0,   104,   104,   108,   123,   124,   128,   132,   136,   140,
     144,   153,   163,   165,   169,   173,   178,   181,   184,   187,
     190,   193,   196,   199,   202,   206,   209,   212,   216,   219,
     223,   227,   231,   234,   237,   240,   243,   247,   251,   254,
     257,   261,   263,   268,   271,   274,   278,   281,   284,   287,
     290,   292,   295,   316,   319,   322,   325,   328,   331,   334,
     339,   342,   346,   349,   354,   357,   360,   363,   366,   369
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
#line 1622 "parser.tab.cc" // lalr1.cc:1167
#line 375 "mini_l.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
