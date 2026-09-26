Frontier Evidence Exporter
==========================

Program: game-core.dll
Language: x86/little/64/default
Compiler: ghidra.program.database.ProgramCompilerSpec@28d6d376
Image base: 180000000

Purpose:
This bundle is intended to compare the historical
RDRMP runtime against Frontier-MP, especially the
frontend -> script lifecycle -> multiplayer ->
local player -> actor -> gameplay transition.

Important files:
  01_program_info.txt
  02_memory_map.txt
  03_functions_all.tsv
  04_symbols.txt
  05_relevant_strings.txt
  06_native_hash_hits.txt
  07_seed_functions.txt
  08_callgraph.tsv
  09_function_xrefs.txt
  decomp_XX.txt

The decompilation shards contain pseudocode for
the most relevant functions discovered by the
automatic keyword/hash/XREF analysis.
