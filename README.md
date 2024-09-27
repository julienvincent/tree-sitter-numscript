# tree-sitter-numscript

This is a very basic tree-sitter grammar for numscript

### Neovim usage example

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.numscript = {
  install_info = {
    url = "https://github.com/julienvincent/tree-sitter-numscript",
    files = { "src/parser.c" },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
    branch = "master",
  },
  filetype = "numscript",
}
```

### Including queries

To have syntax highlighting work you need to either copy the queries from [queries/numscript/\*](./queries/numscript/)
to your local `queries` directory in your neovim config or you can add this repo as a plugin.

Example using [lazy.nvim](https://github.com/folke/lazy.nvim):

```lua
-- plugins/treesitter.lua
return {
  {
    "https://github.com/julienvincent/tree-sitter-numscript",
  },
}
```
