/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'numscript',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.vars_block,
      $.send_statement,
      $.set_tx_meta_statement
    ),

    vars_block: $ => seq(
      'vars',
      $.block
    ),

    block: $ => seq(
      '{',
      repeat($.variable_declaration),
      '}'
    ),

    variable_declaration: $ => seq(
      field('type', $.type),
      field('name', $.identifier)
    ),

    type: $ => choice('monetary', 'account', 'string'),

    send_statement: $ => seq(
      'send',
      field('amount', $.identifier),
      $.parenthesized_clauses
    ),

    parenthesized_clauses: $ => seq(
      '(',
      field('source', $.source_clause),
      field('destination', $.destination_clause),
      ')'
    ),

    source_clause: $ => seq(
      'source',
      '=',
      field('account', choice($.identifier, $.treasury)),
      optional($.overdraft_clause)
    ),

    destination_clause: $ => seq(
      'destination',
      '=',
      field('account', choice($.identifier, $.treasury))
    ),

    treasury: $ => '@treasury',

    overdraft_clause: $ => choice(
      $.bounded_overdraft,
      $.unbounded_overdraft
    ),

    bounded_overdraft: $ => seq(
      'allowing',
      'overdraft',
      'up',
      'to',
      field('limit', $.identifier)
    ),

    unbounded_overdraft: $ => seq(
      'allowing',
      'unbounded',
      'overdraft'
    ),

    set_tx_meta_statement: $ => seq(
      'set_tx_meta',
      $.parenthesized_args
    ),

    parenthesized_args: $ => seq(
      '(',
      field('key', $.string),
      ',',
      field('value', choice($.identifier, $.string, $.number, $.boolean)),
      ')'
    ),

    identifier: $ => seq(
      '$',
      /[a-zA-Z_][a-zA-Z0-9_]*/
    ),

    string: $ => /"[^"]*"/,
    number: $ => /\d+(\.\d+)?/,
    boolean: $ => /(true|false)/,

    comment: $ => token(seq('//', /.*/))
  }
});
