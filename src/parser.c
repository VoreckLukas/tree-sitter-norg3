#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_CR = 2,
  anon_sym_CR_LF = 3,
  sym__character = 4,
  sym__whitespace = 5,
  anon_sym_BSLASH = 6,
  aux_sym_escape_sequence_token1 = 7,
  anon_sym_ = 8,
  sym__preceding_whitespace = 9,
  sym_heading_stars = 10,
  sym__dedent = 11,
  sym_document = 12,
  sym_non_structural = 13,
  sym__word = 14,
  sym_escape_sequence = 15,
  sym__paragraph_inner = 16,
  sym_paragraph = 17,
  sym_heading = 18,
  aux_sym_document_repeat1 = 19,
  aux_sym__word_repeat1 = 20,
  aux_sym_paragraph_repeat1 = 21,
  aux_sym_paragraph_repeat2 = 22,
  aux_sym_heading_repeat1 = 23,
  alias_sym_title = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [sym__character] = "_character",
  [sym__whitespace] = "_whitespace",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_char",
  [anon_sym_] = " ",
  [sym__preceding_whitespace] = "_preceding_whitespace",
  [sym_heading_stars] = "heading_stars",
  [sym__dedent] = "_dedent",
  [sym_document] = "document",
  [sym_non_structural] = "non_structural",
  [sym__word] = "_word",
  [sym_escape_sequence] = "escape_sequence",
  [sym__paragraph_inner] = "_paragraph_inner",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__word_repeat1] = "_word_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_paragraph_repeat2] = "paragraph_repeat2",
  [aux_sym_heading_repeat1] = "heading_repeat1",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym__character] = sym__character,
  [sym__whitespace] = sym__whitespace,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_] = anon_sym_,
  [sym__preceding_whitespace] = sym__preceding_whitespace,
  [sym_heading_stars] = sym_heading_stars,
  [sym__dedent] = sym__dedent,
  [sym_document] = sym_document,
  [sym_non_structural] = sym_non_structural,
  [sym__word] = sym__word,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__paragraph_inner] = sym__paragraph_inner,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__word_repeat1] = aux_sym__word_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_paragraph_repeat2] = aux_sym_paragraph_repeat2,
  [aux_sym_heading_repeat1] = aux_sym_heading_repeat1,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__character] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__preceding_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_heading_stars] = {
    .visible = true,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_non_structural] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__paragraph_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_title,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_paragraph_repeat1, 2,
    aux_sym_paragraph_repeat1,
    alias_sym_title,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
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
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 14,
  [31] = 18,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == 0) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__character);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 3, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 3, .external_lex_state = 1},
  [8] = {.lex_state = 3, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 3, .external_lex_state = 1},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 3, .external_lex_state = 1},
  [18] = {.lex_state = 3, .external_lex_state = 1},
  [19] = {.lex_state = 3, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 3, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 3, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 2, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__preceding_whitespace = 0,
  ts_external_token_heading_stars = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__preceding_whitespace] = sym__preceding_whitespace,
  [ts_external_token_heading_stars] = sym_heading_stars,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__preceding_whitespace] = true,
    [ts_external_token_heading_stars] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__preceding_whitespace] = true,
    [ts_external_token_heading_stars] = true,
  },
  [3] = {
    [ts_external_token__preceding_whitespace] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [sym__character] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(33),
    [sym_heading] = STATE(29),
    [aux_sym_document_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(7),
  },
  [2] = {
    [sym_non_structural] = STATE(4),
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [sym_paragraph] = STATE(15),
    [sym_heading] = STATE(4),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(11),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(21),
    [sym__dedent] = ACTIONS(23),
  },
  [3] = {
    [sym_non_structural] = STATE(2),
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [sym_paragraph] = STATE(15),
    [sym_heading] = STATE(2),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym_heading_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(11),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(21),
    [sym__dedent] = ACTIONS(27),
  },
  [4] = {
    [sym_non_structural] = STATE(4),
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [sym_paragraph] = STATE(15),
    [sym_heading] = STATE(4),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_CR] = ACTIONS(34),
    [anon_sym_CR_LF] = ACTIONS(31),
    [sym__character] = ACTIONS(37),
    [sym__whitespace] = ACTIONS(40),
    [anon_sym_BSLASH] = ACTIONS(43),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(46),
    [sym__dedent] = ACTIONS(29),
  },
  [5] = {
    [sym_non_structural] = STATE(4),
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [sym_paragraph] = STATE(15),
    [sym_heading] = STATE(4),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(11),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(21),
    [sym__dedent] = ACTIONS(49),
  },
  [6] = {
    [sym_non_structural] = STATE(5),
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [sym_paragraph] = STATE(15),
    [sym_heading] = STATE(5),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym_heading_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(11),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(21),
    [sym__dedent] = ACTIONS(51),
  },
  [7] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(55),
    [anon_sym_CR_LF] = ACTIONS(53),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(53),
    [sym__dedent] = ACTIONS(53),
  },
  [8] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_CR_LF] = ACTIONS(57),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym__preceding_whitespace] = ACTIONS(3),
    [sym_heading_stars] = ACTIONS(57),
    [sym__dedent] = ACTIONS(57),
  },
  [9] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [aux_sym_paragraph_repeat2] = STATE(26),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(63),
    [anon_sym_CR_LF] = ACTIONS(61),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(65),
    [sym__preceding_whitespace] = ACTIONS(3),
  },
  [10] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_CR_LF] = ACTIONS(67),
    [sym__character] = ACTIONS(71),
    [sym__whitespace] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_] = ACTIONS(67),
    [sym__preceding_whitespace] = ACTIONS(3),
  },
  [11] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(80),
    [anon_sym_CR] = ACTIONS(82),
    [anon_sym_CR_LF] = ACTIONS(80),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(80),
    [sym__preceding_whitespace] = ACTIONS(3),
  },
  [12] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_CR] = ACTIONS(86),
    [anon_sym_CR_LF] = ACTIONS(84),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(84),
    [sym__preceding_whitespace] = ACTIONS(3),
  },
  [13] = {
    [sym__word] = STATE(24),
    [sym_escape_sequence] = STATE(24),
    [sym__paragraph_inner] = STATE(24),
    [aux_sym__word_repeat1] = STATE(20),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_CR] = ACTIONS(90),
    [anon_sym_CR_LF] = ACTIONS(88),
    [sym__character] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(88),
    [sym__preceding_whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(92), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(9), 6,
      sym_heading_stars,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
  [17] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(96), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(94), 6,
      sym_heading_stars,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
  [34] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(59), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(57), 6,
      sym_heading_stars,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
  [51] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(55), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(53), 6,
      sym_heading_stars,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
  [68] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(100), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(98), 6,
      sym_heading_stars,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
  [85] = 7,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(15), 1,
      sym__character,
    ACTIONS(17), 1,
      sym__whitespace,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(20), 1,
      aux_sym__word_repeat1,
    STATE(24), 3,
      sym__word,
      sym_escape_sequence,
      sym__paragraph_inner,
  [109] = 5,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(106), 1,
      sym__character,
    STATE(22), 1,
      aux_sym__word_repeat1,
    ACTIONS(104), 2,
      anon_sym_CR,
      sym__whitespace,
    ACTIONS(102), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
      anon_sym_,
  [129] = 7,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(15), 1,
      sym__character,
    ACTIONS(17), 1,
      sym__whitespace,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(20), 1,
      aux_sym__word_repeat1,
    STATE(24), 3,
      sym__word,
      sym_escape_sequence,
      sym__paragraph_inner,
  [153] = 5,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(112), 1,
      sym__character,
    STATE(22), 1,
      aux_sym__word_repeat1,
    ACTIONS(110), 2,
      anon_sym_CR,
      sym__whitespace,
    ACTIONS(108), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
      anon_sym_,
  [173] = 7,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(15), 1,
      sym__character,
    ACTIONS(17), 1,
      sym__whitespace,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(20), 1,
      aux_sym__word_repeat1,
    STATE(24), 3,
      sym__word,
      sym_escape_sequence,
      sym__paragraph_inner,
  [197] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(117), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(115), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
      anon_sym_,
  [212] = 3,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(121), 3,
      anon_sym_CR,
      sym__character,
      sym__whitespace,
    ACTIONS(119), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_BSLASH,
      anon_sym_,
  [227] = 5,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(125), 1,
      anon_sym_CR,
    ACTIONS(127), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_paragraph_repeat2,
    ACTIONS(123), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [244] = 5,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(88), 1,
      anon_sym_,
    ACTIONS(132), 1,
      anon_sym_CR,
    STATE(27), 1,
      aux_sym_paragraph_repeat2,
    ACTIONS(129), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [261] = 4,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_heading_stars,
    STATE(28), 2,
      sym_heading,
      aux_sym_document_repeat1,
  [275] = 4,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(7), 1,
      sym_heading_stars,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_heading,
      aux_sym_document_repeat1,
  [289] = 2,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(9), 2,
      sym_heading_stars,
      ts_builtin_sym_end,
  [297] = 2,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(98), 2,
      sym_heading_stars,
      ts_builtin_sym_end,
  [305] = 2,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(142), 1,
      aux_sym_escape_sequence_token1,
  [312] = 2,
    ACTIONS(3), 1,
      sym__preceding_whitespace,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 17,
  [SMALL_STATE(16)] = 34,
  [SMALL_STATE(17)] = 51,
  [SMALL_STATE(18)] = 68,
  [SMALL_STATE(19)] = 85,
  [SMALL_STATE(20)] = 109,
  [SMALL_STATE(21)] = 129,
  [SMALL_STATE(22)] = 153,
  [SMALL_STATE(23)] = 173,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 212,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 261,
  [SMALL_STATE(29)] = 275,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 297,
  [SMALL_STATE(32)] = 305,
  [SMALL_STATE(33)] = 312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(32),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(24),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_structural, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_structural, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word_repeat1, 2), SHIFT_REPEAT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_norg_external_scanner_create(void);
void tree_sitter_norg_external_scanner_destroy(void *);
bool tree_sitter_norg_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_norg_external_scanner_serialize(void *, char *);
void tree_sitter_norg_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_norg(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_norg_external_scanner_create,
      tree_sitter_norg_external_scanner_destroy,
      tree_sitter_norg_external_scanner_scan,
      tree_sitter_norg_external_scanner_serialize,
      tree_sitter_norg_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
