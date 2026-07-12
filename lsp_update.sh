#!/usr/bin/env bash

pio project init --ide vim --board esp32-s3-devkitc-1 # create .ccls (works perfectly)
pio run -t compiledb                                  # for compile_commands.json, for clangd (half buggy)
# compiledb seems to be used by ccls so might as well do it
