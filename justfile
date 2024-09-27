default:
  @just --list

build:
  pnpm tree-sitter generate --no-bindings
