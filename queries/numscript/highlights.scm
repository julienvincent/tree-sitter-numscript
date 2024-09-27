("allowing" @keyword)
("unbounded" @type)
("overdraft" @keyword)

("up" @operator
 "to" @operator) 

["{" "}" "(" ")"] @punctuation.bracket

("=" @operator)
("$" @field)

(variable_declaration
  (type) @field
   (identifier) @var)

["source" "destination"] @field

["vars" "send"] @keyword

(set_tx_meta_statement
  "set_tx_meta" @method) 

((string) @string)
((number) @number)
((boolean) @boolean)
