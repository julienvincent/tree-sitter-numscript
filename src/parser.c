#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_vars = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_monetary = 4,
  anon_sym_account = 5,
  anon_sym_string = 6,
  anon_sym_send = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_source = 10,
  anon_sym_EQ = 11,
  anon_sym_destination = 12,
  sym_treasury = 13,
  anon_sym_allowing = 14,
  anon_sym_overdraft = 15,
  anon_sym_up = 16,
  anon_sym_to = 17,
  anon_sym_unbounded = 18,
  anon_sym_set_tx_meta = 19,
  anon_sym_COMMA = 20,
  anon_sym_DOLLAR = 21,
  aux_sym_identifier_token1 = 22,
  sym_string = 23,
  sym_number = 24,
  sym_boolean = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym__statement = 28,
  sym_vars_block = 29,
  sym_block = 30,
  sym_variable_declaration = 31,
  sym_type = 32,
  sym_send_statement = 33,
  sym_parenthesized_clauses = 34,
  sym_source_clause = 35,
  sym_destination_clause = 36,
  sym_overdraft_clause = 37,
  sym_bounded_overdraft = 38,
  sym_unbounded_overdraft = 39,
  sym_set_tx_meta_statement = 40,
  sym_parenthesized_args = 41,
  sym_identifier = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_vars] = "vars",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_monetary] = "monetary",
  [anon_sym_account] = "account",
  [anon_sym_string] = "string",
  [anon_sym_send] = "send",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_source] = "source",
  [anon_sym_EQ] = "=",
  [anon_sym_destination] = "destination",
  [sym_treasury] = "treasury",
  [anon_sym_allowing] = "allowing",
  [anon_sym_overdraft] = "overdraft",
  [anon_sym_up] = "up",
  [anon_sym_to] = "to",
  [anon_sym_unbounded] = "unbounded",
  [anon_sym_set_tx_meta] = "set_tx_meta",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_vars_block] = "vars_block",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym_type] = "type",
  [sym_send_statement] = "send_statement",
  [sym_parenthesized_clauses] = "parenthesized_clauses",
  [sym_source_clause] = "source_clause",
  [sym_destination_clause] = "destination_clause",
  [sym_overdraft_clause] = "overdraft_clause",
  [sym_bounded_overdraft] = "bounded_overdraft",
  [sym_unbounded_overdraft] = "unbounded_overdraft",
  [sym_set_tx_meta_statement] = "set_tx_meta_statement",
  [sym_parenthesized_args] = "parenthesized_args",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_vars] = anon_sym_vars,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_monetary] = anon_sym_monetary,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_send] = anon_sym_send,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_destination] = anon_sym_destination,
  [sym_treasury] = sym_treasury,
  [anon_sym_allowing] = anon_sym_allowing,
  [anon_sym_overdraft] = anon_sym_overdraft,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_unbounded] = anon_sym_unbounded,
  [anon_sym_set_tx_meta] = anon_sym_set_tx_meta,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_vars_block] = sym_vars_block,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_type] = sym_type,
  [sym_send_statement] = sym_send_statement,
  [sym_parenthesized_clauses] = sym_parenthesized_clauses,
  [sym_source_clause] = sym_source_clause,
  [sym_destination_clause] = sym_destination_clause,
  [sym_overdraft_clause] = sym_overdraft_clause,
  [sym_bounded_overdraft] = sym_bounded_overdraft,
  [sym_unbounded_overdraft] = sym_unbounded_overdraft,
  [sym_set_tx_meta_statement] = sym_set_tx_meta_statement,
  [sym_parenthesized_args] = sym_parenthesized_args,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monetary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_destination] = {
    .visible = true,
    .named = false,
  },
  [sym_treasury] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allowing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overdraft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbounded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_tx_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_vars_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_send_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_clauses] = {
    .visible = true,
    .named = true,
  },
  [sym_source_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_destination_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_overdraft_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_bounded_overdraft] = {
    .visible = true,
    .named = true,
  },
  [sym_unbounded_overdraft] = {
    .visible = true,
    .named = true,
  },
  [sym_set_tx_meta_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_args] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_account = 1,
  field_amount = 2,
  field_destination = 3,
  field_key = 4,
  field_limit = 5,
  field_name = 6,
  field_source = 7,
  field_type = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_destination] = "destination",
  [field_key] = "key",
  [field_limit] = "limit",
  [field_name] = "name",
  [field_source] = "source",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_amount, 1},
  [1] =
    {field_name, 1},
    {field_type, 0},
  [3] =
    {field_account, 2},
  [4] =
    {field_destination, 2},
    {field_source, 1},
  [6] =
    {field_key, 1},
    {field_value, 3},
  [8] =
    {field_limit, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      ADVANCE_MAP(
        '"', 1,
        '$', 107,
        '(', 94,
        ')', 95,
        ',', 106,
        '/', 2,
        '=', 97,
        '@', 66,
        'a', 13,
        'd', 20,
        'f', 7,
        'm', 48,
        'o', 79,
        's', 21,
        't', 49,
        'u', 39,
        'v', 8,
        '{', 88,
        '}', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 84:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_vars);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_monetary);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_send);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_destination);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_treasury);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_allowing);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_overdraft);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_unbounded);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_set_tx_meta);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_monetary] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_send] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_destination] = ACTIONS(1),
    [sym_treasury] = ACTIONS(1),
    [anon_sym_allowing] = ACTIONS(1),
    [anon_sym_overdraft] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_unbounded] = ACTIONS(1),
    [anon_sym_set_tx_meta] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__statement] = STATE(2),
    [sym_vars_block] = STATE(2),
    [sym_send_statement] = STATE(2),
    [sym_set_tx_meta_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_vars] = ACTIONS(5),
    [anon_sym_send] = ACTIONS(7),
    [anon_sym_set_tx_meta] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_vars,
    ACTIONS(7), 1,
      anon_sym_send,
    ACTIONS(9), 1,
      anon_sym_set_tx_meta,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__statement,
      sym_vars_block,
      sym_send_statement,
      sym_set_tx_meta_statement,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_vars,
    ACTIONS(18), 1,
      anon_sym_send,
    ACTIONS(21), 1,
      anon_sym_set_tx_meta,
    STATE(3), 5,
      sym__statement,
      sym_vars_block,
      sym_send_statement,
      sym_set_tx_meta_statement,
      aux_sym_source_file_repeat1,
  [40] = 1,
    ACTIONS(24), 8,
      anon_sym_RBRACE,
      anon_sym_monetary,
      anon_sym_account,
      anon_sym_string,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_destination,
      anon_sym_allowing,
  [51] = 4,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_type,
    STATE(7), 2,
      sym_variable_declaration,
      aux_sym_block_repeat1,
    ACTIONS(28), 3,
      anon_sym_monetary,
      anon_sym_account,
      anon_sym_string,
  [67] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_type,
    STATE(6), 2,
      sym_variable_declaration,
      aux_sym_block_repeat1,
    ACTIONS(32), 3,
      anon_sym_monetary,
      anon_sym_account,
      anon_sym_string,
  [83] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_type,
    STATE(6), 2,
      sym_variable_declaration,
      aux_sym_block_repeat1,
    ACTIONS(28), 3,
      anon_sym_monetary,
      anon_sym_account,
      anon_sym_string,
  [99] = 4,
    ACTIONS(37), 1,
      anon_sym_destination,
    ACTIONS(39), 1,
      anon_sym_allowing,
    STATE(37), 1,
      sym_overdraft_clause,
    STATE(38), 2,
      sym_bounded_overdraft,
      sym_unbounded_overdraft,
  [113] = 3,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(43), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [125] = 1,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [132] = 1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [139] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [146] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [153] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [160] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [167] = 1,
    ACTIONS(57), 4,
      anon_sym_RBRACE,
      anon_sym_monetary,
      anon_sym_account,
      anon_sym_string,
  [174] = 1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_vars,
      anon_sym_send,
      anon_sym_set_tx_meta,
  [181] = 3,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      sym_treasury,
    STATE(39), 1,
      sym_identifier,
  [191] = 3,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      sym_treasury,
    STATE(8), 1,
      sym_identifier,
  [201] = 2,
    ACTIONS(65), 1,
      anon_sym_source,
    STATE(27), 1,
      sym_source_clause,
  [208] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [215] = 2,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
  [222] = 2,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      sym_identifier,
  [229] = 2,
    ACTIONS(69), 1,
      anon_sym_overdraft,
    ACTIONS(71), 1,
      anon_sym_unbounded,
  [236] = 2,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_identifier,
  [243] = 2,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_parenthesized_args,
  [250] = 2,
    ACTIONS(75), 1,
      anon_sym_destination,
    STATE(31), 1,
      sym_destination_clause,
  [257] = 2,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parenthesized_clauses,
  [264] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [268] = 1,
    ACTIONS(81), 1,
      anon_sym_EQ,
  [272] = 1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
  [276] = 1,
    ACTIONS(85), 1,
      aux_sym_identifier_token1,
  [280] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [284] = 1,
    ACTIONS(89), 1,
      anon_sym_COMMA,
  [288] = 1,
    ACTIONS(91), 1,
      anon_sym_EQ,
  [292] = 1,
    ACTIONS(93), 1,
      sym_string,
  [296] = 1,
    ACTIONS(95), 1,
      anon_sym_destination,
  [300] = 1,
    ACTIONS(97), 1,
      anon_sym_destination,
  [304] = 1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [308] = 1,
    ACTIONS(101), 1,
      anon_sym_up,
  [312] = 1,
    ACTIONS(103), 1,
      anon_sym_overdraft,
  [316] = 1,
    ACTIONS(105), 1,
      anon_sym_to,
  [320] = 1,
    ACTIONS(107), 1,
      anon_sym_destination,
  [324] = 1,
    ACTIONS(109), 1,
      anon_sym_DOLLAR,
  [328] = 1,
    ACTIONS(111), 1,
      anon_sym_destination,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 181,
  [SMALL_STATE(19)] = 191,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 208,
  [SMALL_STATE(22)] = 215,
  [SMALL_STATE(23)] = 222,
  [SMALL_STATE(24)] = 229,
  [SMALL_STATE(25)] = 236,
  [SMALL_STATE(26)] = 243,
  [SMALL_STATE(27)] = 250,
  [SMALL_STATE(28)] = 257,
  [SMALL_STATE(29)] = 264,
  [SMALL_STATE(30)] = 268,
  [SMALL_STATE(31)] = 272,
  [SMALL_STATE(32)] = 276,
  [SMALL_STATE(33)] = 280,
  [SMALL_STATE(34)] = 284,
  [SMALL_STATE(35)] = 288,
  [SMALL_STATE(36)] = 292,
  [SMALL_STATE(37)] = 296,
  [SMALL_STATE(38)] = 300,
  [SMALL_STATE(39)] = 304,
  [SMALL_STATE(40)] = 308,
  [SMALL_STATE(41)] = 312,
  [SMALL_STATE(42)] = 316,
  [SMALL_STATE(43)] = 320,
  [SMALL_STATE(44)] = 324,
  [SMALL_STATE(45)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_clause, 3, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_args, 5, 0, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_clauses, 4, 0, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_tx_meta_statement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send_statement, 3, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_clause, 4, 0, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overdraft_clause, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_clause, 3, 0, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbounded_overdraft, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bounded_overdraft, 5, 0, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_numscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
